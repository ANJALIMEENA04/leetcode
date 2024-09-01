class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        priority_queue<int> p;
        vector<int> ans;
        for(auto x:queries){
            int a=x[0],b=x[1];
            p.push(abs(a)+abs(b));
            if(p.size()>=k){
                if(p.size()>k) p.pop();
                ans.push_back(p.top());
            }
            else
                ans.push_back(-1);
        }
        return ans;
    }
};
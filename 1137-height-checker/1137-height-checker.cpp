class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt=0;
        vector<int> exp;
        exp.assign(heights.begin(),heights.end()) ;
        sort(exp.begin(),exp.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i] != exp[i]) cnt++;
        }
        return cnt;
    }
};
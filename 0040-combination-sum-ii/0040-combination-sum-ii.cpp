class Solution {
public:
    void func(int ind,int k,vector<int> ds,vector<vector<int>>& vec,vector<int> arr)
    {
        if(k==0){
            vec.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]> k) break;
            ds.push_back(arr[i]);
            func(i+1,k-arr[i],ds,vec,arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ds;
        // set<vector<int>> st;
        vector<vector<int>> vec;
        sort(candidates.begin(),candidates.end());
        func(0,target,ds,vec,candidates);
        // for(auto x: st)
        // {
        //     vec.push_back(x);
        // }
        return vec;
        
    }
};
class Solution {
public:
    // void func(int i,int k,vector<int>& candidates,vector<vector<int>>& vec,vector<int> ds)
    // {
    //     if(i==candidates.size()){
    //         if(k==0) vec.push_back(ds);
    //         return;
    //     }
    //     else{
    //         if(candidates[i]<=k){
    //             ds.push_back(candidates[i]);
    //             func(i,k-candidates[i],candidates,vec,ds);
    //             ds.pop_back();
    //         }
    //         func(i+1,k,candidates,vec,ds);
    //     }
    // }

    void f(int i,vector<int>ds,int sum,vector<int>& arr,vector<vector<int>>& vec){
        if(sum==0) {
            vec.push_back(ds);
            return;
        }
        if(i>=arr.size() || sum<0 || arr[i]>sum) return;
        f(i+1,ds,sum,arr,vec);// ye mene socha
        ds.push_back(arr[i]);
        f(i,ds,sum-arr[i],arr,vec);// ye jo abhi likha hua code h vo actual approch h
        // ds.pop_back();
        // f(i+1,ds,sum,arr,vec);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> vec;
         vector<int> ds;
         sort(candidates.begin(),candidates.end());
        //  func(0,target,candidates,vec,ds);
         f(0,ds,target,candidates,vec);
         return vec;
    }
};
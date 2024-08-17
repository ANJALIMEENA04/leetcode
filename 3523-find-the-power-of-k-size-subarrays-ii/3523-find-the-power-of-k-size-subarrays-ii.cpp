
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        vector<long long int>temp;
        vector<long long int>arr;
        for(auto it:nums) arr.push_back(it);
        temp.push_back(nums[0]);
        for(int i=1;i<n;i++)
            temp.push_back(nums[i]+temp[i-1]);
        for(int i=0;i<=nums.size()-k;i++)
        { 
            // cout<<arr[i]<<endl;
            long long x = ((arr[i+k-1]+1) * arr[i+k-1])/2 - ((arr[i]-1) * arr[i])/2;
            long long  y = temp[i+k-1];
            if(i) y = temp[i+k-1]-temp[i-1] ;
            if((nums[i+k-1]-nums[i] == k-1) &&  (y==x)) ans.push_back(nums[i+k-1]);
            else ans.push_back(-1);
        }
        return ans;
    }
};
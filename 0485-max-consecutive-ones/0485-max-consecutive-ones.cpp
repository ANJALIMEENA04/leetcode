class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0,max=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                curr++;
            if(curr>max)
            {
                max=curr;
            }
            else if(nums[i]==0)
                curr=0;
        }
        return max; 
    }
};
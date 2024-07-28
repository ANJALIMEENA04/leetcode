class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long long single=0,doble=0,sum=0;
        for(int x:nums){
            if(log10(x)<1) single+=x;
            else if(log10(x)<2) doble+=x;
            else sum+=x;
        }
        // cout<<log10(nums[0])<<' '<<doble<<' '<<sum<<endl;
        if( single >(doble+sum) || doble>(single+sum)) return true;
        return false;
    }
};
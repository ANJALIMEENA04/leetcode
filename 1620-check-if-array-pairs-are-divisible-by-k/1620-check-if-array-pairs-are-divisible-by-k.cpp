class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        // unordered_map<int,int> mp;
        int n=arr.size();
        vector<int> freq(k,0);
        for(auto x: arr){
            int rem=x%k;
            if(rem<0) rem+=k;
            freq[rem]++;
        }
        int i=1,j=k-1;
        if(freq[0]%2) return false;
        while(i<=j && i<k-1){
            // cout<<i<<' '<<j<<'-'<<freq[i++]<<' '<<freq[j--]<<endl;
            if(freq[i]!=freq[j]) return false; 
            i++;j--;
        }
        return true;
    }
};
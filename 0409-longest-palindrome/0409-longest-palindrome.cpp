class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        // if(s.size()==1) return 1;
        for(auto x:s) mp[x]++;
        int cnt=0;
        for(auto x:mp){
            cnt+=(x.second/2)*2;
        }
        if(cnt<s.size())return cnt+1;
        return cnt;
        
    }
};
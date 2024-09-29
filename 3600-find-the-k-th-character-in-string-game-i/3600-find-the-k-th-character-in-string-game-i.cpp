class Solution {
public:
    char kthCharacter(int k) {
        string ans="a",temp="";
        while(ans.size()<k){
            for(char c:ans){
                temp+=(char)('a' + ((c - 'a' + 1) % 26));
            }
            ans=ans+temp;
            temp="";
            // cout<<temp<<"-"<<ans<<endl;
        }
        return ans[k-1];
    }
};
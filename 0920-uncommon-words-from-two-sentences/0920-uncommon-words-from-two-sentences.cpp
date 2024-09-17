class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string,int> mp;
        string word="";
        for(auto x: s1){
            if(x==' ')  {
                mp[word]++;
                word="";
            }
            else word+=x;
        }
        mp[word]++;
        word="";
        for(auto x: s2) {
            if(x==' ')  {
                mp[word]++;
                word="";
            }
            else word+=x;
        }
        mp[word]++;
        for(auto x: mp){
            if(x.second==1) ans.push_back(x.first);
        }
        return ans;
    }

};
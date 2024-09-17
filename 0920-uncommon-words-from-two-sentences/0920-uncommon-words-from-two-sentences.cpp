class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans,v1,v2;
        map<string,int>m;
        string t = "";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' ') {
                v1.push_back(t);
                t="";
            }
            else t += s1[i];
            if(i==s1.size()-1){
                v1.push_back(t);
                t="";
            }
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' ') {
                v2.push_back(t);
                t="";
            }
            else t += s2[i];
            if(i==s2.size()-1){
                v2.push_back(t);
                t="";
            }
        }
        for(auto it:v1) ++m[it];
        for(auto it:v2) ++m[it];
        for(auto it:m) if(it.second==1) ans.push_back(it.first);
        return ans;  
    }
};
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> map(26);
        for(auto x: word){
            map[int(x-'a')]++;
        }
        int j=1,cnt=8;
        int cost=0;
        sort(map.begin(),map.end(),greater<int>());
        for(int i=0;i<26;i++){
            
            if(map[i]>0 and cnt) {
                cout<<j<<' '<<map[i]<<endl;
                cost+=map[i]*j;
                cnt--;
            }
            if(cnt==0){
                cout<<j<<' '<<map[i]<<endl;
                cnt=8;
                j++;
                // cost+=map[i]*j;
            }
        }
        return cost;
    }
};
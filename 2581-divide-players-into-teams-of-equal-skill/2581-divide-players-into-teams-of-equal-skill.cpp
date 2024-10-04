class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0,j=skill.size()-1;
        long long int ans=0,sum=skill[i]+skill[j];
        while(i<j){
            if(skill[i]+skill[j]!=sum) return -1;
            ans+=skill[i]*skill[j];
            i++;j--;
        }
        return ans;

    }
};
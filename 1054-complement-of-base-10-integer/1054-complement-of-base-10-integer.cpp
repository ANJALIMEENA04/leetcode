class Solution {
public:
    int bitwiseComplement(int num) {
        // vector<int > ans;
        int n=0,i=0;
        if(num==0) return 1;
        while(num>0){
            // ans.push_back(num%2);
            if(!(num%2)) n+=pow(2,i);
            num/=2;
            i++;
            // cout<<i<<' '<<n<<endl;
        }
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(!ans[i]){
        //         n+=pow(2,i);
        //     }
        // }
        return n;
    }
};
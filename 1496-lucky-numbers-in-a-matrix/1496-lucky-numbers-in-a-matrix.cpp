class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row;
        for(int i=0;i<n;i++){
            int mini=matrix[i][0];
            for(int j=1;j<m;j++){
                mini=min(mini,matrix[i][j]);
            }
            row.push_back(mini);
            // cout<<row[i]<<' ';
        }
        vector<int> col;
        // cout<<endl;
        for(int j=0;j<m;j++){
            int maxi=matrix[0][j];
            // vec[i]=j;
            for(int i=1;i<n;i++){
                maxi=max(matrix[i][j],maxi) ;

            }
            col.push_back(maxi);
            // cout<<col[j]<<' ';
        }
        vector<int> like;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==col[j] && matrix[i][j]==row[i]) 
                    like.push_back(matrix[i][j]);
            }
        }
        return like;

    }
};
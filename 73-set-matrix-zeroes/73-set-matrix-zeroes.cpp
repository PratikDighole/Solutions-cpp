class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    //     int sz=matrix.size();
    //     int cz=matrix[0].size();
    //     vector<int> row;
    //     vector<int> col;
    //     int p=0,q=0;
    //     while(p<sz && q<cz)
    //     {
    //         if(matrix[p][q]==0)
    //         {
    //             row.push_back(p);
    //             col.push_back(q);
    //         }
    //         p++;
    //         if(p==(sz-1))
    //         {
    //             p=0;
    //             q++;
    //         }
    //     }
    //     p=0,q=0;
    //     while(p<sz && q<cz)
    //     {
    //         if(find(row.begin(),row.end(),p)!=row.end()||find(col.begin(),col.end(),q)!=col.end())
    //         {
    //             matrix[p][q]=0;
    //         }
    //     }
    // }
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_set<int> row;
        unordered_set<int> column;
        
        for (int i{};i<m;i++){
            for (int j{};j<n;j++){
                if (matrix[i][j]==0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        
        for (int i{};i<m;i++){
            for (int j{};j<n;j++){
                if (row.find(i)!=row.end()||column.find(j)!=column.end())
                    matrix[i][j]=0;
            }
        }
    }
};
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas;
        vector<int> one={1};
        pas.push_back(one);
        for(int i=1;i<numRows;i++)
        {
            vector<int> v;
            v.push_back(1);
            for(int j=1;j<i;j++)
            {
                v.push_back(pas[i-1][j-1]+pas[i-1][j]);
            }
            v.push_back(1);
            pas.push_back(v);
        }
        return pas;
    }
};
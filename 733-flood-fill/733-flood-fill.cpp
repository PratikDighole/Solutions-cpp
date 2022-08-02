class Solution {
public:
    void change(int i,int j,int prev,vector<vector<int>>& v,int next)
    {
        int r=v.size();
        int c=v[0].size();
        if(i<0 || j<0)return;
        if(i>=r || j>=c)return;
        if(v[i][j]!=prev)return;
        v[i][j]=next;
        change(i+1,j,prev,v,next);
        change(i-1,j,prev,v,next);
        change(i,j+1,prev,v,next);
        change(i,j-1,prev,v,next);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int curr=image[sr][sc];
        if(curr!=color)
        {
            change(sr,sc,curr,image,color);
        }
        return image;
    }
};
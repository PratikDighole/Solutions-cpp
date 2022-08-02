class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        int total=0;
        for(int i=0;i<n.length();i++)
        {
            string s(1,n[i]);
            int val=stoi(s);
            ans=max(ans,val);
        }
        return ans;
    }
};
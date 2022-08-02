class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        vector<int> ans;
        neargreater(nums2,mp);
        for(auto it:nums1)
        {
            ans.push_back(mp[it]);
        }
        return ans;
    }
    void neargreater(vector<int> &v,map<int,int>  &m)
    {
        stack<int> s;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(s.empty())
            {
                m[v[i]]=-1;
                s.push(v[i]);
            }
            else if(s.size()>0 && s.top()>v[i])
            {
                m[v[i]]=s.top();
                s.push(v[i]);
            }
            else{
                while(s.size()>0 && s.top()<=v[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    m[v[i]]=-1;
                    s.push(v[i]);
                }
                else{
                    m[v[i]]=s.top();
                    s.push(v[i]);
                }
            }
        }
        
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxv=nums[0];
        int curr=0;
        for(auto it:nums)
        {
            curr=max(it,curr+it);
            if(maxv<curr)
            {
                maxv=curr;
            }
        }
        return maxv;
    }
};
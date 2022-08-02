class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxv=INT_MIN;
        int sum=0;
        for (int i=0;i<nums.size();i++)
        { 
            sum+=nums[i];
            maxv=max(maxv,sum);
            if(sum<0)
                sum=0;
        }
        return maxv;
    }
};
class Solution {
public:
    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void sortColors(vector<int>& nums) {
        int f;
        for(int i=0;i<nums.size();i++)
        {
            f=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                {
                    swap(&nums[f],&nums[j]);
                }
            }
        }
    }
};
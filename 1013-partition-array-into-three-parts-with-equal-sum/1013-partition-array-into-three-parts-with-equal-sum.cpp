class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum%3==0)
        {
            int val=sum/3,count=0,total=0;
            for(int i=0;i<arr.size();i++){
                total+=arr[i];
                if(total==val){
                    count++;
                    total=0;
            }
                
                if(count>=3)return true;}
        }
        return false;
    }
    
};
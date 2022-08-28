class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size();
        if(digits[s-1]==9){
            int i=s-1;
            while(digits[i]==9 && i!=0){
                i--;
            }
            if(digits[i]==9)digits.push_back(0);
            digits[i]= digits[i]==9? 1 :digits[i]+1;
            for(int j=i+1;j<s;j++){
                digits[j]=0;
            }
            
        }
        else{
            digits[s-1]+=1;
        }
        return digits;
    }
};
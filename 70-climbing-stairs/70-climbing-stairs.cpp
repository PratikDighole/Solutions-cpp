
class Solution {
public:
    int visit[46];
    int climbStairs(int n) {
        // if(n==0)return 1;
        // if(n<0)return 0;
        // int a=climbStairs(n-2);
        // int b=climbStairs(n-1);
        // return a+b;
        if(n==0)return 1;
        if(n<0)return 0;
        if(visit[n]!=0)return visit[n];
        int total=climbStairs(n-2)+climbStairs(n-1);
        visit[n]=total;
        return total;
    }
};
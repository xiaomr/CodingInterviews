
class Solution
{

public:
    int jumpFloor(int n)
    {
       // f(1)=1, f(0)=0, f(n) = f(n-1) + f(n-1)
       int step1 = 0;
       int step2 = 1;
       int res = 0;
       if (n<2) return n;
       for (int i=3; i<=n; i++){
            res = step1 + step2;
            step1 = step2;
            step2 = res;
       }
       return res;
    }


};
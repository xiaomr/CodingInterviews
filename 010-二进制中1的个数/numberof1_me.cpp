class Solution
{
public:
    int NumberOf1(int n)
    {
       // n&(n-1)的结果是二进制的n去掉一个1
       int count = 0;
       while(count) {
           n = n&(n-1);
           count++;
       }
       return count;
    }
};
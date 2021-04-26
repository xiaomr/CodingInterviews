#include <vector>
using namespace std;

class Solution
{
public:
    void reOrderArray(vector<int> &array)
    {
       if(array.size() < 1) {
           return;
       }
       vector<int>::iterator left = array.begin();
       vector<int>::iterator right = array.end()-1;

       while(left < right) {
           while (left < right && *left & 0x1 == 0) {
               left++;
           }
           while (left < right && *right & 0x1 == 1) {
               right--;
           }
           if (left < right) {
               swap(*left, *right);
           }
       }
    }
};

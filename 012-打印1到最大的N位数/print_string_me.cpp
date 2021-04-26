#include <iostream>
#include <string>
using namespace std;
class solution {
    public:
      void printMaxNDigit(int n) {
          string number(n, '0');
          if (!OverFlow(number)) {
              Increment(number);
              Print (number);
          }

      }
      bool OverFlow(string &number){
         if (number[0] == '1') {
             return true;
         }
         else {
             return false;
         }
      }
      void Increment(string &number) {
          int len = number.size();
          int sum = number[len-1] - '0' + 1;
          int flag = 0;
          for (int i=len-1; i>0; i--) {
              sum += flag;
              if (sum > 10 ) {
                  sum -= 10;
                  number[i] = '0' + sum;
                  flag=1;
              }
              else {
                  flag=0;
                  break;
              }
          }


      }
      
      void Print(string number) {
          int b = number.rfind('0');
          cout <<  number.substr(b+1); //截取从pos开始包括pos的字串.
      }

}
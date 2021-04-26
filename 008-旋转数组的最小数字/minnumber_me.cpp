class Solution
{
public:
    int minNumberInRotateArray(vector<int> rotateArray)
    {
      // bina search O(logn),  pay attention to dumplicate number
      // two half array,  4,5,6,7,1,2,3
      int low = 0;
      int mid = 0;
      int high = rotateArray.size();
      while(rotateArray[low] >= rotateArray[high]){
          if(high - low == 1) return rotateArray[high];
          mid = (low  + high) / 2;
          if (rotateArray[mid] > rotateArray[high]) {
              low = mid;
          }          
          else if (rotateArray[mid] <= rotateArray[high]){
             high = mid;
          }  
       }
    }

private:

};

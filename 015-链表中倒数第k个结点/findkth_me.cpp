#include <iostream>
using namespace std;
struct ListNode {
    public:
         int val;
         struct ListNode* next;

};

class solution {
     ListNode* findKth(ListNode* head, int k) {
         if (head == NULL || k==0) return NULL;
         ListNode* fast = head;
         int i=0;
         // 快指针先走K步, 中止时到达第k+1个结点
         while(i<k && fast){
              fast = fast->next;
              i++;
         }
         // 不足k个结点
         if (i<k) {
            return NULL;
         }
         ListNode* slow = head;
         // fast再走n-k步, fast走到NULL, slow走到n-k步, 走到n-k+1个结点.即为倒数第k个结点.
         while(fast) {
             fast = fast->next;
             slow = slow->next;
         }
         return slow;
     }
}
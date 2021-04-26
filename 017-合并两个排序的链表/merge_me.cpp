#include<iostream>
using namespace std;
struct ListNode {
    public:
    int val;
    struct ListNode* next;

}

class solution {
    ListNode* mergeSortedList(ListNode*l1, ListNode*l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode* p;
        ListNode* head = p;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while(p1!=NULL && p2!=NULL) {
            if (p1->val < p2->val) {
                p->next = p1;
                p1 = p1->next;
            }
            else {
                p->next = p2;
                p2 = p2->next;
            }
        }
        if (p1) {
            p->next = p1;
        }
        if (p2) {
            p->next = p2;
        }
        return head->next;
    }
}
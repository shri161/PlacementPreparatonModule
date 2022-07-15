/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr=headA;
        int a=0,b=0;
        while(curr!=NULL)
        { a++;
         curr=curr->next;
        }
        curr=headB;
        while(curr!=NULL)
        {
            b++;
            curr=curr->next;
        }
        int x=abs(a-b);
        if(a>b)
        { while(x--)
          headA=headA->next;
        }
        else if(b>a)
        {
          while(x--)
              headB=headB->next;
        }
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};
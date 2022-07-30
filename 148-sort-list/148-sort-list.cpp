/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode *solve(ListNode *head)
    {   if(head==NULL)
        return head;
       if(head->next==NULL)
           return head;
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
       
        ListNode *l1=solve(slow->next);
       slow->next=NULL;
        ListNode *l2=solve(head);
        ListNode *temp=new ListNode(0);
       ListNode *x=temp;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
            else
            { temp->next=l2;
               temp=l2;
              l2=l2->next;   
            }
        }
     if(l1==NULL)
         temp->next=l2;
     if(l2==NULL)
         temp->next=l1;
     return x->next;
    }
public:
    ListNode* sortList(ListNode* head) {
        return solve(head);
    }
};
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
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *left=new ListNode(0);
        ListNode *ans=left;
        ListNode *right=new ListNode(0);
        ListNode *r=right;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                left->next=head;
                left=head;
            }
            else
            {
                right->next=head;
                right=head;
            }
            head=head->next;
        }
        left->next=r->next;
        right->next=NULL;
        return ans->next;
    }
};
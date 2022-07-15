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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
          fast=fast->next->next;
            slow=slow->next;
        }
        if(fast!=NULL)
            slow=slow->next;
        ListNode *temp=reverseList(slow);
        ListNode *curr=head;
        while(temp!=NULL)
        {
          if(curr->val!=temp->val)
          return false;
            curr=curr->next;
            temp=temp->next;
        }
        return true;
    }
};
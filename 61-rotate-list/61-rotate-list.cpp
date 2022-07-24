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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        ListNode *curr=head;
        int c=0;
        while(curr!=NULL)
        {
            c++;
            curr=curr->next;
        }
        k=k%c;
        if(k==0)
            return head;
        curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=head;
        k=c-k;
        k--;
        while(k--)
        {
            head=head->next;
        }  
        curr=head->next;
        head->next=NULL;
        head=curr;
        return head;
        
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     if(head==NULL)
         return head;
        Node *curr=head;
        while(curr!=NULL)
        {
            Node *temp=new Node(curr->val);
            Node *x=curr->next;
            curr->next=temp;
            temp->next=x;
            curr=x;
        }
      curr=head;
        while(curr!=NULL)
        {    if(curr->random!=NULL)
            curr->next->random=curr->random->next;
            else
                curr->next->random=NULL;
            curr=curr->next->next;
        }
        curr=head;
        Node *dummy=new Node(0);
          dummy->next=  curr->next;
        Node *x=dummy->next;
        Node *front=x->next;
        while(front!=NULL)
        {  x->next=front->next;
           x=x->next;
           Node *temp=front;
          curr->next=front;
          curr=front;
         front=curr->next->next;
        }
        curr->next=NULL;
        x->next=NULL;
        return dummy->next;
    }
};
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
     ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode*prev=nullptr;
         ListNode*nxt=nullptr;
        while(curr!=nullptr){
           nxt=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nxt;
        }
        return prev;
     }

    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
         ListNode* prev=nullptr;

         if (head == nullptr || head->next == nullptr)
            return;


        while(fast!=nullptr&&fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=nullptr){
            slow=slow->next;
            prev=prev->next;
        }
       prev->next=nullptr;

        ListNode* half=reverse(slow);
        

        ListNode* l1=head;
      
        while(l1!=nullptr&&half!=nullptr){
           ListNode* temp1=l1->next;
           ListNode* temp2=half->next;

           l1->next=half;
           half->next=temp1;
           
           l1=temp1;
           half=temp2;
        }

    }
};
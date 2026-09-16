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
    ListNode* reverse(ListNode*head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;

        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* prev=dummy;
        ListNode* curr=head;
        int count=0;
        while(curr!=nullptr){
           
            count++;

            if(count==k){
                ListNode* temp=curr->next;
                curr->next=nullptr;

                ListNode* hd=prev->next;
                prev->next=nullptr;

               ListNode* rev=reverse(hd);

               prev->next=rev;
               hd->next=temp;

               prev=hd;
               curr=hd;

               count=0;
 
            }
            curr=curr->next;
        }
        return dummy->next;
    }
};
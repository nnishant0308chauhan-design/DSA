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
    ListNode* insertionSortList(ListNode* head) {
         ListNode* dummy=new ListNode(0,nullptr);

         ListNode* curr=head;
         ListNode* next=nullptr;
         while(curr!=nullptr){
            next=curr->next;
            curr->next=nullptr;

           if(dummy->next==nullptr){
            dummy->next=curr;
           }else{
            ListNode* temp=dummy->next;
            ListNode* prev=dummy;
            while(temp!=nullptr&&curr->val > temp->val){
                prev=temp;
                temp=temp->next;
            }
           if(temp==dummy->next){
            curr->next=temp;
            dummy->next=curr;
           }else{
            prev->next=curr;
            curr->next=temp;
           }
           }
           curr=next;
         }
         return dummy->next;
    }
};
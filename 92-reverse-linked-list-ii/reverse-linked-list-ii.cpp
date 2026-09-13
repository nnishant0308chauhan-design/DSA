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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* prev=dummy;
         ListNode* tail=dummy;
        
        if(head==nullptr||head->next==nullptr){
            return head;
        }

        for(int i=1;i<left;i++){
            prev=prev->next;
        }

        for(int i=0;i<right;i++){
            tail=tail->next;
        }
        
        ListNode* revhead=prev->next;
        ListNode* extra=tail->next;

        prev->next=nullptr;
        tail->next=nullptr;

        ListNode* pre=nullptr;
        ListNode* curr=revhead;
        ListNode* nex=nullptr;
        while(curr!=nullptr){
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
        }

        prev->next=pre;
        revhead->next=extra;

        return dummy->next;
    }
};
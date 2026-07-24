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

   ListNode* reverse(ListNode* node){
    ListNode* prev=nullptr;
    ListNode* curr=node;
    ListNode* next=nullptr;

    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
   }


    bool isPalindrome(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr &&fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=nullptr){
            prev=slow;
            slow=slow->next;
        }
        prev->next=reverse(slow);
        ListNode* left=head;
        ListNode* right=prev->next;
        while(right!=nullptr){
            if(left->val!=right->val){
                return false;
            }
            left=left->next;
            right=right->next;
        }
        return true;

    }
};















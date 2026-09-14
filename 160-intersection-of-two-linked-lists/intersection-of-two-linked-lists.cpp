/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,ListNode*>mpp;

        ListNode* curr=headA;
        while(curr!=nullptr){
            mpp[curr]=curr;
            curr=curr->next;
        }

        ListNode* curr2=headB;
        while(curr2!=nullptr){
            if(mpp.count(curr2)){
                return curr2;
            }
            curr2=curr2->next;
        }
        return nullptr;
    }
};
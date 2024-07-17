// TakeAway : Two pointer approach
// Time Complexity : O(n)
// Space Complexity : O(1)
// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode dummy;
        ListNode* res = &dummy;
        
        while(l1!=NULL and l2!= NULL){
            if(l1->val <= l2->val){
                res->next=l1;
                l1 = l1->next;
            }
            else{
                res->next=l2;
                l2 = l2 -> next;
            }
            res = res->next;
        }
        if(l1!=NULL) res->next = l1;
        else res->next = l2;
        
        return dummy.next;
    }
};
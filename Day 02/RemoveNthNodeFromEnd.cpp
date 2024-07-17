// TakeAway : Two pointer approach
// Time Complexity : O(n)
// Space Complexity : O(1)
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start->next= head;
        
        ListNode *fast=start;
        ListNode* slow = start;
        
        for(int i = 0 ; i < n ;i++) fast = fast->next;
        
        while(fast->next!=NULL){
            slow=slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;;
    }
};
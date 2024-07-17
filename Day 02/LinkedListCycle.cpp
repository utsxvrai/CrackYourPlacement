// TakeAway: Use two pointers, one slow and one fast. If there is a cycle, they will meet at some point.
// Time Complexity: O(n)
// Space Complexity: O(1)
// https://leetcode.com/problems/linked-list-cycle/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        if(head==NULL or head->next==NULL) return false;
        while(fast && fast->next){
            slow=slow->next;
            fast = fast->next->next;
            
            if(slow==fast) return true;
            
            
        }
        return false;
    }
};
// TakeAways: Use two pointers, one to keep track of the current node and the other to keep track of the previous node. When the current node's value is equal to the value to be removed, update the previous node's next pointer to the current node's next pointer and delete the current node.
// Time Complexity: O(n)
// Space Complexity: O(1)
// https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* curr = head;
        ListNode* prev = dummy;
        
        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        
        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
        
        
    }
};
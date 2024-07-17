// TakeAways: Use two pointers, one fast and one slow. Fast pointer moves twice as fast as slow pointer. When fast pointer reaches end of list, slow pointer will be at the middle of the list.
// Time Complexity: O(n)
// Space Complexity: O(1)
// https://leetcode.com/problems/middle-of-the-linked-list/


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
};
// TakeAway : Two pointer approach
// Time Complexity : O(n)
// Space Complexity : O(1)
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;

        ListNode* curr = head;
        
        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp; 
            } else {
                curr = curr->next;
            }
        }
        
        return head;
    }
};
// TakeAway : i have used the same two pointer approach to reverse the linked list in this problem i have used three pointers prev, curr and n.
// Time Complexity : O(n)
// Space Complexity : O(1)
// https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr;
        curr = head;
        while(curr!=NULL){
            ListNode* n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        return prev;
    }
};
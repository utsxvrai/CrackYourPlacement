// TakeAways: Use two pointers, one to keep track of the current node and the other to keep track of the previous node. When the current node's value is equal to the value to be removed, update the previous node's next pointer to the current node's next pointer and delete the current node.
// Time Complexity: O(n)
// Space Complexity: O(1)
// https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        int c(0);
        
        while(l1!=nullptr or l2 != nullptr){
            int a = (l1!=nullptr) ? l1->val : 0;
            int b = (l2!=nullptr) ? l2->val : 0;
            
            int sum = a + b +c;
            int n = sum%10;
            c = sum/10;
            
            ListNode* temp = new ListNode(n);
            curr->next = temp;
            curr = curr->next;
            
            if (l1 != NULL) {
                l1 = l1->next;
            }
            if (l2 != NULL) {
                l2 = l2->next;
            }
        }
        if (c == 1) {
            curr->next = new ListNode(1);
        }
        
        return dummy->next;
        
        
        
    }
};
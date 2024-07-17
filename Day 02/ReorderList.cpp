// TakeAways: Use two pointers, one to keep track of the current node and the other to keep track of the previous node. When the current node's value is equal to the value to be removed, update the previous node's next pointer to the current node's next pointer and delete the current node.
// Time Complexity: O(n)
// Space Complexity: O(1)
// https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr!=NULL){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    void merge(ListNode*l1 , ListNode* l2){
        while(l1){
            ListNode*p1 = l1->next;
            ListNode* p2 = l2->next;
            
            l1-> next = l2;
            if (p1 == NULL) {
                break;
            }
            l2->next = p1;
            
            l1 = p1;
            l2 = p2;
        }
    }
public:
    void reorderList(ListNode* head) {
         if (head->next == NULL) {
            return;
        }
        
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prev->next = NULL;
        
        ListNode* l1 = head;
        ListNode* l2 = reverse(slow);
        
        merge(l1, l2);
         
    }
};
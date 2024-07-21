class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1(0), l2(0);
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA){
            l1++;
            tempA=tempA->next;
        }
        while(tempB){
            l2++;
            tempB=tempB->next;
        }
        int d = abs(l1-l2);
        if(l1<l2){
            for(int i = 0 ; i < d ; i++){
                headB=headB->next;
            }
        }
        else{
            for(int i = 0 ; i < d ; i++){
                headA=headA->next;
            }
        }
        
        while(headA && headB){
            if(headA == headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
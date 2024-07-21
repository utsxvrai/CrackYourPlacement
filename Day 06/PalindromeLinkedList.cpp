class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}
int size(ListNode *temp)
{ int x=0;
    while(temp!=nullptr){
        x++;
        temp=temp->next;
    }return x;
}
    bool isPalindrome(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ListNode *temp=head,*temp1=head;
        int s=size(temp),p=1;
        temp=head;
        while(p<s/2)
        {
            p++;
            temp=temp->next;
        }
        p=s/2;
        temp=reverseList(temp->next);
        while(temp!=nullptr && temp1!=nullptr && p--)
        {
            if(temp->val==temp1->val){
                temp=temp->next;
                temp1=temp1->next;
            }else   return false;
        }
        return true; 
    }
};
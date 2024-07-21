class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;

        while(temp != nullptr){
            arr.emplace_back(temp-> val);
            temp = temp-> next;

        }
        temp = head;
        int i =0;
        sort(arr.begin(), arr.end());
        while(temp != nullptr){
            temp-> val = arr[i];
            temp = temp-> next;
            i++;
        }
        
    return head;
    }
};
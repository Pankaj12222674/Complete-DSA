
//iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* res = nullptr;
        ListNode* curr = head;

        while(curr!=nullptr){
            ListNode* temp = curr->next;
            curr->next = res;
            res = curr;
            curr = temp;
        }

        return res;
        
    }
};

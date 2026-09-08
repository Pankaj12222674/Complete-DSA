
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


//recursive approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==nullptr || head->next == nullptr){
            return head;
           
        }
        ListNode* newHead= reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        
        return newHead;
        
    }
};

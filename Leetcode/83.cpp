class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)    return head;
        
        ListNode *curr = head;
        
        while(head->next) {
            if(head->val == head->next->val)
                head->next = head->next->next;
            else
                head = head->next;
        }
        
        if(head->next)  {
            if(head->val == head->next->val)    head->next = NULL;
        }
        
        return curr;
    }
};
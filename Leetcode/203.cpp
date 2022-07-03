/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int v) {
        if(!head)   return head;
        
        ListNode* curr = head;
        
        while(curr->next)   {
            if(curr->next->val == v)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        
        if(head->val == v)
            return head->next;
        
        return head;
    }
};
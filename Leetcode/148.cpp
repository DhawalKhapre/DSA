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
    ListNode* merge(ListNode* l, ListNode* r)   {
        ListNode* first = new ListNode();
        ListNode* curr = first;
        
        while(l && r)   {
            if(l->val <= r->val)    {
                curr->next = l;
                l = l->next;
            }
            else    {
                curr->next = r;
                r = r->next;
            }
            curr = curr->next;
        }
        
        if(l)
            curr->next = l;
        if(r)
            curr->next = r;
        
        return first->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode* temp;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next)   {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        temp->next = NULL;
        
        ListNode* l = sortList(head);
        ListNode* r = sortList(slow);
        
        return merge(l, r);
    }
};
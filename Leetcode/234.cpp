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
    ListNode* reverse(ListNode* head)   {
        if(!head || !head->next)
            return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast && fast->next)   {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* temp = slow->next;
        slow->next = NULL;
        ListNode* head2 = reverse(temp);
        
        while(head && head2)    {
            if(head->val != head2->val)
                return false;
            
            head = head->next;
            head2 = head2->next;
        }
        
        return true;
    }
};
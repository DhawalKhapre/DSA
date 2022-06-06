ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *a = headA, *b = headB;
    int countA=0, countB=0;
    
    for(ListNode *curr=headA; curr!=NULL; curr=curr->next)   countA++;
    for(ListNode *curr=headB; curr!=NULL; curr=curr->next)   countB++;
    
    while(countA>countB)    countA--, a=a->next;
    while(countA<countB)    countB--, b=b->next;
    
    while(a!=b) a=a->next, b=b->next;
    
    return a;
}
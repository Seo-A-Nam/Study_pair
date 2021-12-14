//Maintain a slow and a fast pointer. Slow moves one place at a time while fast moves two places at a time. 
//When fast pointer reaches end of the linked list, at that time slow pointer is the middle element.


  ListNode* middleNode(ListNode* head) {
        if(head==NULL|| head->next==NULL)
            return head;
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast!=NULL&& fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
       
        return slow;
    }
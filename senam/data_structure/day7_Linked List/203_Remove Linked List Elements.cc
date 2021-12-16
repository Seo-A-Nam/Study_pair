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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ptr, *pre = 0;
        
        ptr = head;
        if (head->val == val)
        {
            ptr->val = 0;
            //delete(ptr);
            head = head->next;
        }
        ptr = head;
        pre = head;
        while (ptr)
        {
            if (pre != NULL)
            {
                if (ptr->val == val)
                {
                    pre->next = ptr->next;
                    //delete(ptr);
                    ptr = pre;
                }
            }
            pre = ptr;
            ptr = ptr->next;
        }
        return (head);
    }
};
// still debugging ...
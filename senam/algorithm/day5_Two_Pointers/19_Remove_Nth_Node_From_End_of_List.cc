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
    int     lstsize(ListNode* head)
    {
        ListNode *ptr = head;
        int size = 0;
        while (ptr)
        {
            ptr = ptr->next;
            size++;
        }
        return (size);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode    *ptr = head;
        int         size = lstsize(head);
        
        if (size < n)
            return (head);
        if (size == n)
            head = head->next;
        else
        {
            for (int i = 0; i < size - n - 1; i++)
                ptr = ptr->next;
            ptr->next = ptr->next->next;
        }
        return (head);
    }
};
// isn't there any better way to improve this solution?
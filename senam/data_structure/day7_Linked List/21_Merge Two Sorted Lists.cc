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
    int lstsize(ListNode *lst)
    {
        int len = 0;
        while (lst)
        {
            lst = lst->next;
            len++;
        }
        return (len);
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        int len = lstsize(list1) + lstsize(list2);
        ListNode *list;
        
        
        while (list1 || list2)
        {
            if ((list1->val > list2->val) || (list1 != NULL && list2 == NULL))
            {
                list->val = list1->val;
                list = list1->next;
            }
            if ((list1->val < list2->val) || (list1 == NULL && list2 != NULL))
            {
                list->val = list2->val;
                list = list2->next;
            }
            list = list->next;
        }
        return (list);
    }
};
// still debugging ...
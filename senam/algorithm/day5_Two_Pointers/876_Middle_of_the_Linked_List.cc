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
#include <vector>
using namespace std;

class Solution {
public:
    int lstsize(ListNode *head) {
        int size = 0;
        while (head->next)
        {
            size++;
            head = head->next;
        }
        return (size);
    }
    ListNode* middleNode(ListNode* head) {
        int size = lstsize(head);
        
        if (size % 2 == 0) size /= 2;
        else size = (size + 1) / 2;
        for (int i = 0; i < size; i++)
            head = head->next;
        return (head);
    }
}; // Try this next time ? : 
// https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/
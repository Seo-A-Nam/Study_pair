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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *a = head;
        int cnt =0;
        while(a!=NULL)
        {
            a = a->next;
            cnt++;
        }
        ListNode *b = head;
        if(cnt==1)
        {
            b = NULL ;
            
        }
        else if(cnt==2)
        {
            if(n==1)
            {
                b->next = NULL;
            }
            if(n==2)
            {
                b = b->next;
                
            }
        }
        else
        {
            int tar;
            if(cnt==n)
            {
                 b = b->next;
            }
            else
            {
                 tar = cnt - n -1 ;
                while(tar--)
                {
                    b = b->next;

                }
                ListNode *tmp = b->next;
                b->next = tmp->next;
                b = head;
            }
            
           

        }
        
        return b;
        
    }
};
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next)
            return head;// single or zero node
        
        int n = 0;
        ListNode* curr = head;
        while(curr){
            curr = curr->next;
            n++;
        }   
        curr = head;
        ListNode *prev = NULL, *next =NULL;
        ListNode *newHead = NULL, *tail1 = NULL, *tail2 = head;
        while(n >= k)
        {
            for(int i = 0; i< k ;i++)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            if(!newHead) 
                    newHead = prev;
            if(tail1)
                    tail1->next = prev; 
            tail2->next = curr;  // when n is not a multiple of k; 
            
            tail1 = tail2;
            tail2 = curr;
            prev =  NULL;
            n -= k;
        }
       return newHead; 
    }
};

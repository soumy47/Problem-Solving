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
    ListNode* insertionSortList(ListNode* head) {
        
        if( head == NULL || head->next == NULL)
            return head;
        
        ListNode* curr = head;
        ListNode* currprev = curr, *j , *jprev = NULL;
        
        ListNode* dummy = new ListNode(INT_MIN, head);
        
        while(curr)
        {
             ListNode* next = curr->next;
             jprev = dummy, j = jprev->next;
            
            if(currprev->val <= curr->val)
                currprev = curr;
            else{
                while(j != NULL  && j->val <= curr->val)
                {
                    jprev = j;
                    j = j->next;
                }
                jprev->next = curr;
                curr->next = j;
                currprev->next = next;
            }
            
            curr = next;
        }
        return dummy->next;
        
        
       /* int i =0;
        while(temp)
        {
            ListNode* next =  temp->next;
            curr = head;
            int j =0;
            while( (j<= i)  && (curr != NULL))
            {
                j++;
                if(curr->val > temp->val)
                    swap(curr->val, temp->val);
                curr = curr->next;
            }
            i++;
            temp = next;
        }
        return head;*/
    }
};

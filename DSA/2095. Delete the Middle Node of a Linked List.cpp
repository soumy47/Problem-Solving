 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head == NULL  or head->next == NULL)
            return NULL;
        ListNode* fast = head, *slow = head, * prev = NULL;
        
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prev->next = slow->next; 
        return head;
    }
    
};

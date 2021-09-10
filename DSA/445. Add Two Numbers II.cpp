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
    
    ListNode* reverse(ListNode* root)
    {
        ListNode* prev = NULL, *next, *curr = root;
        
        while(curr)
        {
            next = curr->next;
            curr ->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { 
        ListNode* ans = new ListNode(), *temp;
        temp = ans;
        
        stack<ListNode*> s1, s2;
        
        while(l1)
        {
            s1.push(l1);
            l1 = l1->next;
        }
        while(l2)
        {
            s2.push(l2);
            l2 = l2->next;
        }
        
        int sum = 0, carry = 0;
        while(s1.size()  || s2.size() || carry)
        {
            sum = carry;
            if(s1.size())
            {
                l1 = s1.top();
                sum += l1->val;
                s1.pop();
            }
            if(s2.size())
            {
                l2 = s2.top();
                sum += l2->val;
                s2.pop();
            }
            
            ListNode *temp1 = new ListNode(sum % 10);
            temp->next = temp1;
            temp = temp->next;
            carry = sum /10;
        }
        
        return reverse(ans->next);
    }
};

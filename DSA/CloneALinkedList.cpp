class Solution {
public: 
        Node* copyRandomList(Node* head) {
        //step1 : create the copy nodes and there next
        
       Node* item = head, *front;
        while(item)
        {
            front =item->next;
            Node* copy = new Node(item->val);
            item -> next = copy;
            copy->next = front;
            item = front;
        }
        
     //   step2 connecting random ptrs;
        
        item = head;
        while(item)
        {
            front=item->next->next;
            if(item->random)
                item->next->random = item->random->next;                          
            item = front;
        }
        
    //step 3 : getting back the original linked list
        
        Node* dummy = new Node(0);
        
        Node* copy  = dummy;
 
        item = head;
        while(item)
        {
            front = item->next->next;
            copy->next = item->next;
            item ->next = front;
            copy = copy->next;
            item =  item->next; 
        }
        
        return dummy->next;
    }
       
   };

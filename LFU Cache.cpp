class LFUCache {
public:
    class Node{
     public:
        int key, val, freq;
        Node* prev, *next; 
       
        Node(int Key, int Value)
        {
            key = Key;
            val = Value;
            freq = 1;// freq of the new node is always 1
        }
    };
    class List{
       public:
        Node* head, *tail;
        int size; 
        
        List()
        {
            // inorder to reduce the multiple checking for null condtion , we take two nodes for indicating the starting and the ending part of                     the list 
            head = new Node(0,0);
            
            tail = new Node(0,0);
            head -> next = tail;
            tail -> prev = head;
            size = 0;           // initial size will be 0 as it is empty
        }
        
        void add(Node * node ){
            Node* temp = head->next;
            
            head -> next = node;
            node ->prev = head;
            node -> next = temp;
            temp -> prev = node;
            size++;
        }     
        
        void del(Node* node){
            node->prev->next = node->next;
            node->next->prev = node->prev;
            size--;
        }
    };
    //declaration
    map<int, List*> freqlist;  // freq->list mapping
    
    map<int, Node*> keyNode;   //key->node(address of the node) maping
    
    int currsize; // current size of the cache
    int minfreq;  // least frequency
    int maxCap;   // max capacity of the cache
    
    LFUCache(int capacity) {
        //initialization
        maxCap = capacity;
        currsize = 0;
        minfreq = 0;
    }
    
    void update(Node *node){
        keyNode.erase(node->key);  // rm from node map
        freqlist[node->freq]->del(node); // rm from list map
        
        if(node->freq == minfreq  && freqlist[minfreq]->size == 0)
            minfreq++;
        
        List *list = new List();
        if(freqlist.find(node->freq+1) != freqlist.end()){
           list =   freqlist[node->freq+1];
        }
        
        node->freq+=1;
        
        list->add(node);
        freqlist[node->freq] = list;
        keyNode[node->key] = node;
        
    }
    
    
    int get(int key) {
        //if found in the map
        
        if(keyNode.find(key) != keyNode.end())
        {
            //fetch the node address
            
            Node* address = keyNode[key];
            int ans = address ->val;
            
            // update it, as it has been accessed 
            
            update(address);
            return ans;
        }
        return -1; // not found
    }
    
    void put(int key, int value) 
    {
        if(maxCap == 0)
            return;
        
        //if already present, update it
        if(keyNode.find(key) != keyNode.end())
        {
            Node* address = keyNode[key];
            address->val = value;         // updated the value
            update(address);
            return;
        }
        else
        {
            //                                     __        __                                        
            // new element , so freq = 1 for sure    \_(--)_/    , will do that later
            // check if capacity is full or not
            // if full, remove LFU, if they are multiple then remove the LRu element
                    if(currsize == maxCap)
                    {
                        List* list = freqlist[minfreq];
                        keyNode.erase(list->tail->prev->key);
                        freqlist[minfreq]->del(list->tail->prev);
                            currsize--;
                    }
                    currsize++;
                    minfreq = 1;
            
                    List* list = new List();
                    if(freqlist.find(minfreq) != freqlist.end())
                        list = freqlist[minfreq];   
            
                    Node* node = new Node(key, value);
                    list->add(node);
                    keyNode[key] = node;
                    freqlist[minfreq] = list;   
            
        }
    }
};

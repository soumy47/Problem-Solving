class LRUCache {
public:
    
    class node{
        public:
        int val;
        int key;
        node* next, *prev;
        node(int key_, int val_)
        {
            key = key_;
            val = val_;
        }
    };
    
    int cap = 0;
    
    unordered_map<int, node*> m;
    
    //two dummy nodes
    node* head  = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    //do the initaial things
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void deletenode(node* delNode)
    {
        node* delprev = delNode->prev;
        node* delnext = delNode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    void addnode(node* addNode)
    {
        node* temp    = head->next;
        
        head->next    = addNode;
        addNode->next = temp;
        addNode->prev = head;
        temp->prev    = addNode;
        
    }
    
    int get(int key) {
        if(m.find(key) != m.end())
        {
            node* address = m[key];  //get the address from the map
            
            int res = address->val;  // store the val
            
            m.erase(key);           // 1st erase from map
            
            deletenode(address);   //  then delete from DLL;
            
            addnode(address);       //add it in the DLL;
            
            m[key] = head->next;     // insert the head ->next as it is the LAST recently used key
            
            return res;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        
        //if already exists
        if(m.find(key) != m.end())
        {
            node* oldaddress = m[key];
            m.erase(key);
            deletenode(oldaddress);
        }
        
        // if size is full, remove LRU i.e, tail->prev->key
        if(m.size() == cap)
        {
            node* LRU = tail->prev; 
            m.erase(tail->prev->key);
            deletenode(LRU);
        }
        
        addnode(new node(key, value));
        m[key] = head->next;
    }
};

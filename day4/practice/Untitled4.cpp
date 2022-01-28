class node{
    public:
    int value;
    node * next;
    node * prev;
    node( int temp=0)
    {
        value=temp;
        next=prev=NULL;
    }
};


class MyCircularDeque {
public:
    int size;
    int cnt;
    node * rear;
    node * curr;
    MyCircularDeque(int k) {
        size=k;
        cnt=0;
        rear=NULL;
    }
    
    bool insertFront(int value) {
        if(cnt+1>size)
            return false;
        cnt++;
        curr=new node(value);
        if(rear)
        {
            curr->next=rear->next;
            rear->next->prev=curr;
            rear->next=curr;
            curr->prev=rear;
        }
        else
            rear=curr->next=curr->prev=curr;
        return true;
    }
    
    bool insertLast(int value) {
        if(cnt+1>size)
            return false;
        cnt++;
        curr=new node(value);
        if(rear)
        {
            rear->next->prev=curr;
            curr->prev=rear;
            curr->next=rear->next;
            rear->next=curr;
        }
        else
            curr->next=curr->prev=curr;
        rear=curr;
        return true;
    }
    
    bool deleteFront() {
        if(!rear)
            return false;
        curr=rear->next;
        if(rear==rear->next)
        {
            rear=NULL;
        }
        else
        { 
            rear->next=curr->next;
            curr->next->prev=rear;   
        }
        
        delete(curr);
        cnt--;
        return true;
    }
    
    bool deleteLast() {
        if(!rear)
            return false;
        curr=rear;
        if(rear==rear->next)
        {
            rear=NULL;
        }
        else
        {
            rear->prev->next=rear->next;
            rear->next->prev=rear->prev;
            rear=rear->prev;
        }
        cnt--;
       
        delete(curr);
        return true;
    }
    
    int getFront() {
        if(rear)
            return rear->next->value;
        else
            return -1;
    }
    
    int getRear() {
        if(rear)
            return rear->value;
        else
            return -1;
    }
    
    bool isEmpty() {
        if(rear)
            return false;
        else
            return true;
    }
    
    bool isFull() {
        if(cnt==size)
            return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
 
 
 
 //link:https://leetcode.com/problems/design-circular-deque/submissions/

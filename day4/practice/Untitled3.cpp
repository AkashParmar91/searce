class node{
    public:
    int value;
    node * next;
    node(int temp)
    {
        value=temp,next=NULL;   
    }
    
};

class MyCircularQueue {
public:
    int size;
    node * rear=NULL;
    node * curr;
    int cnt;
    MyCircularQueue(int k) {
        size=k;
        cnt=0;
    }
    bool enQueue(int value) {
        if(cnt+1>size)
            return false;
        cnt++;
        curr=new node(value);
        if(rear)
        {
            curr->next=rear->next;
            rear->next=curr;
        }
        else
            curr->next=curr;
        rear=curr;
        return true;
    }
    
    bool deQueue() {
        if(!rear)
            return false;
        cnt--;
        curr=rear->next;
        if(rear==curr)
        {
            rear=NULL;
        }
        else
            rear->next=curr->next;
        delete(curr);
        return true;
    }
    int Front() {
        if(rear)
            return rear->next->value;
        else
            return -1;
    }
    
    int Rear() {
        if(rear)
            return rear->value;
        else
            return -1;
    }
    
    bool isEmpty() {
        if(rear)
            return false;
        return true;
    }
    
    bool isFull() {
        if(cnt==size)
            return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
 
 
 
 //link:https://leetcode.com/problems/design-circular-queue/

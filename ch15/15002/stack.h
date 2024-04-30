#ifndef _STACK_H_
#define _STACK_H_

class Stack {
    public:
        class node{
            public:
                int data;
                node * next;
                node(int x, node *nxt):data(x), next(nxt){}
        };
        Stack(); void insert(int); int pop();
        void show();
    protected:
        node *first;
};
#endif  //_STACK_H_

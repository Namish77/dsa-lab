// Program 10 - Stack using Linked List
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node{ int v; Node* next; Node(int x):v(x),next(NULL){} };

class LStack{
    Node* top;
public:
    LStack():top(NULL){}
    void push(int x){ Node* n=new Node(x); n->next=top; top=n; }
    void pop(){ if(top){ Node* t=top; top=top->next; delete t; } }
};

int main(){ LStack s; s.push(10); s.pop(); }
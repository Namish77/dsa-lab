// Program 12 - Queue using Linked List
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node{ int v; Node* next; Node(int x):v(x),next(NULL){} };

class LQueue{
    Node* f; Node* r;
public:
    LQueue():f(NULL),r(NULL){}
    void enqueue(int x){
        Node* n=new Node(x);
        if(!r) f=r=n;
        else r->next=n, r=n;
    }
    void dequeue(){
        if(f){ Node* t=f; f=f->next; delete t; if(!f) r=NULL; }
    }
};

int main(){ LQueue q; q.enqueue(5); q.dequeue(); }
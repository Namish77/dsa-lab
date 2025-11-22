// Program 16 - Doubly Linked List
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node{ int v; Node* next; Node* prev; Node(int x):v(x),next(NULL),prev(NULL){} };

class DList{
    Node* head;
public:
    DList():head(NULL){}
    void insertFront(int x){
        Node* n=new Node(x);
        n->next=head;
        if(head) head->prev=n;
        head=n;
    }
};

int main(){ DList L; L.insertFront(10); }
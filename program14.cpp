// Program 14 - Singly Linked List Insert
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node{ int v; Node* next; Node(int x):v(x),next(NULL){} };

class SList{
    Node* head;
public:
    SList():head(NULL){}
    void insertFront(int x){ Node* n=new Node(x); n->next=head; head=n; }
};

int main(){ SList L; L.insertFront(10); }
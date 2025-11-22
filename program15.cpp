// Program 15 - Delete from SLL
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node{ int v; Node* next; Node(int x):v(x),next(NULL){} };

class List{
    Node* head;
public:
    List():head(NULL){}
    void append(int x){
        Node* n=new Node(x);
        if(!head) head=n;
        else{
            Node* t=head;
            while(t->next) t=t->next;
            t->next=n;
        }
    }
};

int main(){ List L; L.append(1); }
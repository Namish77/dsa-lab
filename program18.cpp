// Program 18 - Circular Linked List
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node {
    int v;
    Node* next;
    Node(int x): v(x), next(nullptr) {}
};

class CList {
    Node* last;

public:
    CList(): last(nullptr) {}

    void insertEnd(int x) {
        Node* n = new Node(x);
        if (!last) {
            last = n;
            n->next = n;
        } else {
            n->next = last->next;
            last->next = n;
            last = n;
        }
        cout << x << " inserted\n";
    }

    void delFront() {
        if (!last) {
            cout << "Empty\n";
            return;
        }
        Node* f = last->next;
        if (f == last) {
            last = nullptr;
        } else {
            last->next = f->next;
        }
        cout << f->v << " deleted\n";
        delete f;
    }

    void display() {
        if (!last) {
            cout << "Empty\n";
            return;
        }
        cout << "CList: ";
        Node* t = last->next;
        do {
            cout << t->v << " ";
            t = t->next;
        } while (t != last->next);
        cout << "\n";
    }
};

int main() {
    CList C;
    C.insertEnd(10);
    C.insertEnd(20);
    C.insertEnd(30);
    C.display();
    C.delFront();
    C.display();
    return 0;
}

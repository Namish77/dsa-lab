// Program 14 - Singly Linked List Insert
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node {
    int v;
    Node* next;
    Node(int x): v(x), next(nullptr) {}
};

class SList {
    Node* head;

public:
    SList() : head(nullptr) {}

    void insertFront(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
        cout << x << " at front\n";
    }

    void insertEnd(int x) {
        Node* n = new Node(x);
        if (!head) {
            head = n;
        } else {
            Node* t = head;
            while (t->next) t = t->next;
            t->next = n;
        }
        cout << x << " at end\n";
    }

    void insertAt(int x, int pos) {
        if (pos <= 1) {
            insertFront(x);
            return;
        }

        Node* t = head;
        for (int i = 1; i < pos-1 && t; i++) t = t->next;

        if (!t) {
            cout << "Position out\n";
            return;
        }

        Node* n = new Node(x);
        n->next = t->next;
        t->next = n;
        cout << x << " at position " << pos << "\n";
    }

    void display() {
        Node* t = head;
        cout << "List: ";
        while (t) {
            cout << t->v << " ";
            t = t->next;
        }
        cout << "\n";
    }
};

int main() {
    SList L;
    L.insertFront(10);
    L.insertFront(20);
    L.insertEnd(5);
    L.insertAt(15, 2);
    L.display();
    return 0;
}

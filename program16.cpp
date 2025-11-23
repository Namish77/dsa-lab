// Program 16 - Doubly Linked List
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node {
    int v;
    Node* next;
    Node* prev;
    Node(int x): v(x), next(nullptr), prev(nullptr) {}
};

class DList {
    Node* head;

public:
    DList(): head(nullptr) {}

    void insertFront(int x) {
        Node* n = new Node(x);
        n->next = head;
        if (head) head->prev = n;
        head = n;
        cout << x << " inserted front\n";
    }

    void insertEnd(int x) {
        Node* n = new Node(x);
        if (!head) {
            head = n;
            return;
        }
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n;
        n->prev = t;
        cout << x << " inserted end\n";
    }

    void delFront() {
        if (!head) {
            cout << "Empty\n";
            return;
        }
        Node* t = head;
        head = head->next;
        if (head) head->prev = nullptr;
        cout << t->v << " removed front\n";
        delete t;
    }

    void delEnd() {
        if (!head) {
            cout << "Empty\n";
            return;
        }
        Node* t = head;
        while (t->next) t = t->next;
        cout << t->v << " removed end\n";
        if (t->prev) t->prev->next = nullptr;
        else head = nullptr;
        delete t;
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
    DList L;
    L.insertFront(10);
    L.insertEnd(20);
    L.insertEnd(30);
    L.display();
    L.delFront();
    L.display();
    L.delEnd();
    L.display();
    return 0;
}

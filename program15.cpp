// Program 15 - Delete from SLL
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node {
    int v;
    Node* next;
    Node(int x): v(x), next(nullptr) {}
};

class List {
    Node* head;

public:
    List(): head(nullptr) {}

    void append(int x) {
        Node* n = new Node(x);
        if (!head) head = n;
        else {
            Node* t = head;
            while (t->next) t = t->next;
            t->next = n;
        }
    }

    void delByVal(int x) {
        if (!head) {
            cout << "Empty\n";
            return;
        }

        if (head->v == x) {
            Node* t = head;
            head = head->next;
            delete t;
            cout << x << " deleted\n";
            return;
        }

        Node* t = head;
        while (t->next && t->next->v != x) t = t->next;

        if (!t->next) {
            cout << x << " not found\n";
            return;
        }

        Node* d = t->next;
        t->next = d->next;
        delete d;
        cout << x << " deleted\n";
    }

    void delByPos(int pos) {
        if (!head || pos <= 0) {
            cout << "Invalid\n";
            return;
        }

        if (pos == 1) {
            Node* t = head;
            head = head->next;
            delete t;
            cout << "Position 1 deleted\n";
            return;
        }

        Node* t = head;
        for (int i = 1; i < pos-1 && t; i++) t = t->next;

        if (!t || !t->next) {
            cout << "Out of range\n";
            return;
        }

        Node* d = t->next;
        t->next = d->next;
        delete d;
        cout << "Position " << pos << " deleted\n";
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
    List L;
    L.append(1);
    L.append(2);
    L.append(3);
    L.append(4);
    L.display();

    L.delByVal(3);
    L.display();

    L.delByPos(2);
    L.display();

    L.delByPos(10);

    return 0;
}

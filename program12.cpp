// Program 12 - Queue using Linked List
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node {
    int v;
    Node* next;
    Node(int x): v(x), next(nullptr) {}
};

class LQueue {
    Node* f;
    Node* r;

public:
    LQueue() : f(nullptr), r(nullptr) {}

    void enqueue(int x) {
        Node* n = new Node(x);
        if (!r) {
            f = r = n;
        } else {
            r->next = n;
            r = n;
        }
        cout << x << " enqueued\n";
    }

    void dequeue() {
        if (!f) {
            cout << "Empty\n";
            return;
        }
        Node* t = f;
        cout << t->v << " dequeued\n";
        f = f->next;
        delete t;
        if (!f) r = nullptr;
    }

    void display() {
        Node* cur = f;
        cout << "Queue: ";
        while (cur) {
            cout << cur->v << " ";
            cur = cur->next;
        }
        cout << "\n";
    }
};

int main() {
    LQueue q;

    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.display();

    q.dequeue();
    q.display();

    while (true) {
        if (!q.f) break;
        q.dequeue();
    }

    q.dequeue();
    return 0;
}

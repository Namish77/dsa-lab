// Program 10 - Stack using Linked List
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

class LStack {
    Node* top;

public:
    LStack() : top(nullptr) {}

    void push(int v) {
        Node* n = new Node(v);
        n->next = top;
        top = n;
        cout << v << " pushed\n";
    }

    void pop() {
        if (!top) {
            cout << "Empty\n";
            return;
        }
        Node* t = top;
        cout << t->val << " popped\n";
        top = top->next;
        delete t;
    }

    void display() {
        Node* cur = top;
        cout << "Stack: ";
        while (cur) {
            cout << cur->val << " ";
            cur = cur->next;
        }
        cout << "\n";
    }
};

int main() {
    LStack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.display();
    s.pop();
    s.display();
    return 0;
}

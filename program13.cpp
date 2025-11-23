// Program 13 - Queue using Two Stacks
// Author: Namish (Roll 241478)

#include <iostream>
#include <stack>
using namespace std;

class Q2S {
    stack<int> inS, outS;

    void transfer() {
        while (!inS.empty()) {
            outS.push(inS.top());
            inS.pop();
        }
    }

public:
    void enqueue(int x) {
        inS.push(x);
        cout << x << " enqueued\n";
    }

    void dequeue() {
        if (outS.empty()) {
            if (inS.empty()) {
                cout << "Empty\n";
                return;
            }
            transfer();
        }
        cout << outS.top() << " dequeued\n";
        outS.pop();
    }

    void display() {
        stack<int> t1 = inS, t2 = outS, rev;

        while (!t1.empty()) {
            rev.push(t1.top());
            t1.pop();
        }

        cout << "Queue: ";

        while (!t2.empty()) {
            cout << t2.top() << " ";
            t2.pop();
        }

        while (!rev.empty()) {
            cout << rev.top() << " ";
            rev.pop();
        }

        cout << "\n";
    }
};

int main() {
    Q2S q;
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(8);
    q.display();
    return 0;
}

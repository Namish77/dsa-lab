// Program 11 - Queue using Array
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

class ArrQueue {
    int Q[6];
    int f, r;

public:
    ArrQueue() : f(0), r(-1) {}

    void enqueue(int x) {
        if (r == 5) {
            cout << "Q Overflow\n";
            return;
        }
        Q[++r] = x;
        cout << x << " enqueued\n";
    }

    void dequeue() {
        if (f > r) {
            cout << "Q Underflow\n";
            return;
        }
        cout << Q[f++] << " dequeued\n";
    }

    void peek() {
        if (f > r)
            cout << "Empty\n";
        else
            cout << "Front: " << Q[f] << "\n";
    }

    void display() {
        if (f > r)
            cout << "Empty\n";
        else {
            cout << "Queue: ";
            for (int i = f; i <= r; i++) cout << Q[i] << " ";
            cout << "\n";
        }
    }
};

int main() {
    ArrQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    q.display();
    q.peek();
    q.dequeue();
    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}

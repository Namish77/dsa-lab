// Program 9 - Stack using Array
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

class ArrStack {
    int S[6];
    int top;
    const int cap = 6;

public:
    ArrStack() : top(-1) {}

    void push(int x) {
        if (top == cap-1) {
            cout << "Overflow: " << x << "\n";
            return;
        }
        S[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Underflow\n";
            return;
        }
        cout << S[top--] << " popped\n";
    }

    int peek() {
        if (top == -1) {
            cout << "Empty\n";
            return -1;
        }
        return S[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    ArrStack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66); // ok
    st.push(77); // overflow

    while (!st.empty()) st.pop();
    st.pop(); // underflow

    return 0;
}

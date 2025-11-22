// Program 1 - Fibonacci (Recursive)
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int fibo(int k) {
    if (k < 2) return k;
    return fibo(k-1) + fibo(k-2);
}

int main() {
    int terms;
    cout << "Enter terms: ";
    cin >> terms;
    cout << "Fibonacci: ";
    for (int i=0;i<terms;i++) cout << fibo(i) << " ";
    return 0;
}
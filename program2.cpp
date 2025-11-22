// Program 2 - Factorial (Recursive)
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n-1);
}

int main() {
    int v;
    cout << "Number: ";
    cin >> v;
    cout << "Factorial = " << fact(v);
    return 0;
}
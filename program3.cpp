// Program 3 - Array Insert/Delete
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int main() {
    int A[100], n, pos, val;
    cout << "Count: ";
    cin >> n;
    for (int i=0;i<n;i++) cin >> A[i];

    cin >> pos >> val;
    for (int i=n;i>pos;i--) A[i]=A[i-1];
    A[pos]=val; n--;

    cin >> pos;
    for (int i=pos;i<n-1;i++) A[i]=A[i+1];

    return 0;
}
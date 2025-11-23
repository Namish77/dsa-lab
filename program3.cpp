// Program 3 - Array Insert/Delete
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int main() {
    int A[100], n, pos, val;
    cout << "Count: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i=0;i<n;i++) cin >> A[i];

    cout << "Array: ";
    for (int i=0;i<n;i++) cout << A[i] << " ";
    cout << "\nInsert position (0-based): ";
    cin >> pos;
    cout << "Value to insert: ";
    cin >> val;

    for (int i=n;i>pos;i--) A[i]=A[i-1];
    A[pos]=val; n++;

    cout << "After insertion: ";
    for (int i=0;i<n;i++) cout << A[i] << " ";

    cout << "\nDelete position (0-based): ";
    cin >> pos;

    for (int i=pos;i<n-1;i++) A[i]=A[i+1];
    n--;

    cout << "\nAfter deletion: ";
    for (int i=0;i<n;i++) cout << A[i] << " ";
    cout << endl;
    return 0;
}

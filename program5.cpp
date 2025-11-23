// Program 5 - Bubble Sort
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cout << "N: "; cin >> n;
    cout << "Elements:\n";
    for (int i=0;i<n;i++) cin >> a[i];

    for (int p=0;p<n-1;p++) {
        cout << "Pass " << p+1 << ": ";
        for (int j=0;j<n-p-1;j++) {
            if (a[j] > a[j+1]) {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        for (int z=0;z<n;z++) cout << a[z] << " ";
        cout << "\n";
    }

    cout << "Sorted: ";
    for (int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}

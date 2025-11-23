// Program 6 - Insertion Sort
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Count: "; 
    cin >> n;

    cout << "Data:\n"; 
    for (int i=0;i<n;i++) cin >> arr[i];

    for (int i=1;i<n;i++) {
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j]; 
            j--;
        }

        arr[j+1] = key;
    }

    cout << "Sorted:\n"; 
    for (int i=0;i<n;i++) 
        cout << arr[i] << " ";

    cout << endl; 
    return 0;
}

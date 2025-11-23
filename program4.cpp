// Program 4 - Binary Search
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int key) {
    int lo=0, hi=n-1;
    while (lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if (arr[mid]==key) return mid;
        if (arr[mid]<key) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}

int main() {
    int n, k; int arr[100];
    cout << "Size: "; 
    cin >> n;
    cout << "Enter sorted values:\n";
    for (int i=0;i<n;i++) cin >> arr[i];
    cout << "Search element: ";
    cin >> k;

    int idx = binSearch(arr,n,k);
    if (idx!=-1) cout << "Found at index " << idx << endl;
    else cout << "Not found\n";
    return 0;
}

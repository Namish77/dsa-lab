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
    int arr[50], n, key;
    cin >> n;
    for (int i=0;i<n;i++) cin >> arr[i];
    cin >> key;
    cout << binSearch(arr,n,key);
}
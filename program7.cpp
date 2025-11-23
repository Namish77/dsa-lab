// Program 7 - Merge Sort
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

void mergeSeg(int a[], int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    int L[50], R[50];

    for (int i=0;i<n1;i++) L[i] = a[l+i];
    for (int j=0;j<n2;j++) R[j] = a[m+1+j];

    int i=0, j=0, k=l;

    while (i<n1 && j<n2) {
        if (L[i] <= R[j]) 
            a[k++] = L[i++];
        else 
            a[k++] = R[j++];
    }

    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = l + (r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        mergeSeg(a, l, m, r);
    }
}

int main() {
    int n, arr[100];
    cout << "Num: "; 
    cin >> n;

    cout << "Values:\n";
    for (int i=0;i<n;i++) cin >> arr[i];

    mergeSort(arr, 0, n-1);

    cout << "Sorted: ";
    for (int i=0;i<n;i++) cout << arr[i] << " ";

    cout << endl;
    return 0;
}

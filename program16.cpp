#include <iostream>
using namespace std;

int main() {
    int tree[100];
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> tree[i];

    cout << "Binary Tree (Array Representation): ";
    for (int i = 0; i < n; i++)
        cout << tree[i] << " ";

    cout << endl;
    return 0;
}

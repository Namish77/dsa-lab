// Program 8 - 2D Array Address Calculation
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int main() {
    int base, size, rows, cols, i, j;
    cout << "Base address: "; 
    cin >> base;

    cout << "Element size (bytes): "; 
    cin >> size;

    cout << "Rows: "; cin >> rows;
    cout << "Cols: "; cin >> cols;

    cout << "Index i j (0-based): "; 
    cin >> i >> j;

    int rowMajor = base + ((i*cols) + j) * size;
    int colMajor = base + ((j*rows) + i) * size;

    cout << "Row-major addr: " << rowMajor << "\n";
    cout << "Column-major addr: " << colMajor << "\n";

    return 0;
}

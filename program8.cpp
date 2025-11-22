// Program 8 - 2D Array Address Calculation
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

int main(){
    int base,size,rows,cols,i,j;
    cin>>base>>size>>rows>>cols>>i>>j;
    cout<< base + ((i*cols)+j)*size;
}
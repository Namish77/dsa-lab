// Program 9 - Stack using Array
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

class ArrStack {
    int S[6], top;
public:
    ArrStack(): top(-1){}
    void push(int x){ if(top<5) S[++top]=x; }
    void pop(){ if(top>=0) top--; }
};

int main(){ ArrStack s; s.push(1); s.pop(); }
// Program 11 - Queue using Array
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

class ArrQueue {
    int Q[6], f, r;
public:
    ArrQueue():f(0),r(-1){}
    void enqueue(int x){ if(r<5) Q[++r]=x; }
    void dequeue(){ if(f<=r) f++; }
};

int main(){ ArrQueue q; q.enqueue(1); q.dequeue(); }
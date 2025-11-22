// Program 13 - Queue using Two Stacks
// Author: Namish (Roll 241478)

#include <iostream>
#include <stack>
using namespace std;

class Q2S {
    stack<int> inS, outS;
    void transfer(){ while(!inS.empty()) outS.push(inS.top()), inS.pop(); }
public:
    void enqueue(int x){ inS.push(x); }
    void dequeue(){ if(outS.empty()) transfer(); if(!outS.empty()) outS.pop(); }
};

int main(){ Q2S q; q.enqueue(2); q.dequeue(); }
// Program 17 - Polynomial Addition
// Author: Namish (Roll 241478)

#include <iostream>
using namespace std;

struct Poly {
    int coef, pow;
    Poly* next;
    Poly(int c, int p): coef(c), pow(p), next(nullptr) {}
};

void insertTerm(Poly*& H, int c, int p) {
    Poly* n = new Poly(c,p);
    if (!H) H = n;
    else {
        Poly* t = H;
        while (t->next) t = t->next;
        t->next = n;
    }
}

Poly* addPoly(Poly* A, Poly* B) {
    Poly* R = nullptr;
    while (A && B) {
        if (A->pow == B->pow) {
            insertTerm(R, A->coef + B->coef, A->pow);
            A = A->next; B = B->next;
        } else if (A->pow > B->pow) {
            insertTerm(R, A->coef, A->pow);
            A = A->next;
        } else {
            insertTerm(R, B->coef, B->pow);
            B = B->next;
        }
    }
    while (A) { insertTerm(R, A->coef, A->pow); A = A->next; }
    while (B) { insertTerm(R, B->coef, B->pow); B = B->next; }
    return R;
}

void printPoly(Poly* P) {
    while (P) {
        cout << P->coef << "x^" << P->pow;
        if (P->next) cout << " + ";
        P = P->next;
    }
    cout << "\n";
}

int main() {
    Poly *A = nullptr, *B = nullptr;

    insertTerm(A, 3, 3);
    insertTerm(A, 2, 2);
    insertTerm(A, 1, 0);

    insertTerm(B, 4, 3);
    insertTerm(B, 2, 1);
    insertTerm(B, 5, 0);

    cout << "A: "; printPoly(A);
    cout << "B: "; printPoly(B);

    Poly* R = addPoly(A,B);

    cout << "Sum: ";
    printPoly(R);

    return 0;
}

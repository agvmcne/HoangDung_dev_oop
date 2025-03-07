#ifndef DATHUCBACBON_H
#define DATHUCBACBON_H

#include <iostream>
using namespace std;

class DaThucBac4 {
private:
    int a, b, c, d, e; // f(x) = ax^4 + bx^3 + cx^2 + dx + e

public:
    DaThucBac4();
    DaThucBac4(int a, int b, int c, int d, int e);

    void Xuat();
};

#endif

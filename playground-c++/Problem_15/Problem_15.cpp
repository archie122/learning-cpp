#include <iostream>

bool isTriangle(int a, int b, int c) {
    if (a+b>c && a+c> b && b+c > a) {
        return true;
    }
    
    return false;
}
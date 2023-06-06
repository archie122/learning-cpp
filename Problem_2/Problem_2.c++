#include <iostream>
#include <string>
using namespace std;

int sum_odd_digits(int n) {
    if (n == 0) {
        return 0;
    }

    int digit = n % 10;
    int sum = (digit % 2 != 0) ? digit : 0;

    return sum + sum_odd_digits(n / 10);
}


int main(){
    cout << sum_odd_digits(2223);
    return 0;
}
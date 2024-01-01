#include <iostream>
#include <math.h>
#include <cmath>

double square_area(double A) {
  return round(pow(((A*4)/(2*M_PI)),2)*100.0)/100.0;
};

int main() {
    std::cout << square_area(2) << std::endl;
}
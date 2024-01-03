#include <iostream>
#include <algorithm>

unsigned short expressionsMatter(unsigned short a, unsigned short b, unsigned short c) {
  return std::max(a + b + c, a * (b + c), (a + b) * c, a * b * c);
}

int main() {
  std::cout << expressionsMatter(2, 1, 2) << std::endl;
  std::cout << expressionsMatter(2, 1, 1) << std::endl;
  std::cout << expressionsMatter(1, 1, 1) << std::endl;
  std::cout << expressionsMatter(2, 2, 2) << std::endl;
}
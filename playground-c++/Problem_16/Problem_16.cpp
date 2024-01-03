#include <iostream>

int digits(uint64_t n) {
  int count = 0;
  while (n != 0) {
    n /= 10;
    ++count;
  }

  if (count == 0) {
    return 1;
  }

  return count;
}

int main() {
    std::cout << digits(0) << std::endl;
}
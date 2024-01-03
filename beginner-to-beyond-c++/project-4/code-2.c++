#include <iostream>
#include <string>
#define PI 3.14


int main () {
    const std::string something = "This is a constant string";
    const int num1 = 45;
    const double num2 = 3.14;
    const float num3 = 3.14f;
    const char middle_initial = 'J';
    
    std::cout << something << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << middle_initial << std::endl;
    std::cout << "This is a defined variable : " << PI << std::endl;
}
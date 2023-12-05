#include <iostream>

int main() {
  char middle_inital ('J');
  std::cout << "My middle initial is " << middle_inital << std::endl;
  
  unsigned short int shoe_size (43);
  std::cout << "My shoe size is " << shoe_size << std::endl;

  int account_balance (1000);
  std::cout << "My account balance is " << account_balance << std::endl;

  long int social_security_number (123456789);
  std::cout << "My social security number is " << social_security_number << std::endl;

  long long int bank_account_number (1234567890123456789);
  std::cout << "My bank account number is " << bank_account_number << std::endl;

  float height (5.11);
  std::cout << "My height is " << height << std::endl;

  double weight (180.5);
  std::cout << "My weight is " << weight << std::endl;

  long double bank_balance (1234567890123456789.0123456789);
  std::cout << "My bank balance is " << bank_balance << std::endl;


  // sizeof
  std::cout << "sizeof(char) : " << sizeof(char) << std::endl;
  std::cout << "sizeof(short) : " << sizeof(short) << std::endl;
  std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
  std::cout << "sizeof(long) : " << sizeof(long) << std::endl;
  std::cout << "sizeof(long long) : " << sizeof(long long) << std::endl;

  return 0;
}

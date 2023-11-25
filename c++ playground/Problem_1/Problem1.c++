#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int findSmallest(vector<int> list){
  auto min = *min_element(list.begin(), list.end());
  return min;
}

int main(){
  vector <int> numbers = {3,523,65,24,777};
  int smallest = findSmallest(numbers);
  cout << smallest << endl;
  return 0;
}
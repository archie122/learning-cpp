#include <iostream>
using namespace std;

string add_binary(uint64_t a, uint64_t b) {
    uint64_t result = a + b;
    bitset<64> binary(result); // convert result to binary string

    string binaryString = binary.to_string(); // get binary string representation
    size_t firstNonZero = binaryString.find_first_not_of('0'); // find first non-zero character

    if (firstNonZero != string::npos) {
        binaryString = binaryString.substr(firstNonZero); // remove leading zeros
    }

    return binaryString; // return shortened binary string
}
int main(){
    cout << add_binary(5,9);
}
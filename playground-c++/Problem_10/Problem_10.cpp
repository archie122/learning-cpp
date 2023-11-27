#include <iostream>
#include <string>
using namespace std;

bool solution(string const &str, string const &ending) {
    if (str.find(ending)){
        return true;
    }
    
    return false;
}

int main(){
    string str = "abc";
    string ending = "bc";
    solution(str, ending);
    return 0;
}
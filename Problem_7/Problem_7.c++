#include <iostream>
using namespace std;

int basicOp(char op, int val1, int val2){
    int result = 0;
    switch (op)
    {
    case '+':
        result = val1 + val2;
        break;

    case '-':
        result = val1 - val2;
        break;

    case '*':
        result = val1 * val2;
        break;

    case '/':
        result = val1 / val2;
        break;
    
    default:
        break;
    }

    return result;
}

int main(){
    
}
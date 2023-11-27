#include <iostream>
#include <vector>
using namespace std;

vector<int> countBy(int x, int n){
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        int value = x * i;
        result.push_back(value);
    }

    return result;
}

int main(){
    vector<int> myVector = countBy(2, 5);
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << ' ';
    }
    cout << endl;

    return 0; }

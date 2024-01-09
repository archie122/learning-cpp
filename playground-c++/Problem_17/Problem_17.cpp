#include <iostream>
#include <string>
#include <map>

/*
* Left side characters : w(4)p(3)b(2)s(1)
* Right side characters : m(4)q(3)d(2)z(1)
*/

std::string alphabetWar(std::string fight) {

    std::map <char, int> left;
    std::map <char, int> right;
    int lcounter = 0;
    int rcounter = 0;

    left['w'] = 4;
    left['p'] = 3;
    left['b'] = 2;
    left['s'] = 1;

    right['m'] = 4;
    right['q'] = 3;
    right['d'] = 2;
    right['z'] = 1;

    for (int i = 0; i < fight.length(); i++) {
        if(left.find(fight[i]) != left.end()) {
            lcounter += left[fight[i]];
        } else if(right.find(fight[i]) != right.end()) {
            rcounter += right[fight[i]];
        }
    }

    if (lcounter > rcounter) {
        return "Left side wins!";
    } else if (lcounter < rcounter) {
        return "Right side wins!";
    }

    return "Let's fight again!";
}

int main() {
    std::cout << alphabetWar("zdqmwpbs") << std::endl;
    return 0;
}


#include <vector>
#include <iostream>
#include <algorithm> 

class SqInRect
{
  public:
    static std::vector<int> sqInRect(int lng, int wdth){
        std::vector<int> result;

        while(lng > 0 && wdth > 0) {
            result.push_back(std::min(lng, wdth));
            if (lng > wdth) {
                lng -= wdth;
            } else {
                wdth -= lng;
            }
        }

        if(result.size() <= 1) {
            return std::vector<int>();
        } else {
            return result;
        }
            
    }
};


int main () {
    SqInRect obj1; 
    std::vector<int> result = obj1.sqInRect(20, 14);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
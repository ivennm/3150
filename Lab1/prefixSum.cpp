// Lab Week 1: Prefix Sums
// Description: Functions for checking prefix sum conditions

#include <iostream>
using namespace std;

int main() {
    std::cout << "Main" << std::endl;
    int lst[] = {1,-1,-1,1};
    int arrLength = sizeof(lst) / sizeof(lst[0]);

    int sum = 0;
    for (int i = 0; i < arrLength; i++) {
        if (sum < 0) {
            std::cout << "Prefix sum went below 0.\n";
            return 0;
        }
        sum += lst[i];
    } 
    std::cout << "Prefix sum stayed above 0.\n";
    return 1;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    
    vector<int> nums = {1,5,2,3,4,5};
    int quantity = 0;

    for(auto x : nums) {
        if(x == 5) {
            quantity += 1;
        }
    }
    cout << "There are " << quantity << " fives.";
    return 0;
}

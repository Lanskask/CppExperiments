#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {

    string s2 = "asdfgh";
    vector<int> s = {1,2,3,4,5};

    for(auto c : s) {
        cout << c << ", ";
    }
    
	return 0;
}

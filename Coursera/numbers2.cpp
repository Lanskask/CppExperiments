#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
	
    int x = 4;
    int y = 5;

    string a = "abc";
    string b = "x";

    if(x == y) {
        cout << "equal";
    } else {
        cout << "not equal";
    }
    cout << endl;
    
    if(a < b) {
        cout << "less";
    } else {
        cout << "not less";
    }
    cout << endl;
    
	return 0;
}

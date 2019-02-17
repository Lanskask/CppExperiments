#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	std::vector<int> nums = {1,2,3,4,5};

	int quality = 0;

	for (auto x : nums) {
		if (x == 5) {
			quality += 1;
		}
	}
	cout << "There are " 
		<< quality << " fives";

	return 0;
}

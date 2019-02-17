#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	// int n;
	// cin >> n;
	// vector <int> a(n);
	
	vector<int> b = {6,8,3,6,1};

	for(auto now : b) {
		cout << now << " ";
	}

	cout << endl;
	// for(int i = 0; i < 0; i++) {
	// 	cin >> a[i];
	// }

	sort(b.begin(), b.end());

	for(auto now : b) {
		cout << now << " ";
	}

	cout << endl;

	return 0;
}


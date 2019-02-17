#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct Person {
	string name;
	string surname;
	int age;
};

int main(int argc, char **argv) {
	cout << "Hello world" << endl;

	int x = -5;
	double pi = 3.14;
	bool log = false;
	char symb = 'Z';

	string hw = "some string";

	vector<int> vec = {1,2,3};
	cout << vec.size()  << endl;

	map<string, int> name_to_val;
	name_to_val["one"] = 1;
	name_to_val["two"] = 2;

	cout << "two is " << name_to_val["two"]  << endl;

	// -------
	vector<Person> staff;
	staff.push_back({"Ivan", "Ivanov", 25});
	staff.push_back({"Petr", "Petrov", 30});

	cout << staff[0].name << endl; 

	return 0;
}

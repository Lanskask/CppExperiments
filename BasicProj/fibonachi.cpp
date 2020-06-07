#include <iostream>
#include <cassert>
#include <unordered_map>
using namespace std;

class Fibonachi final {
public:
    static int get(int n) {
        assert(n >= 0);
        if (n == 0 || n == 1) {
            return n;
        }

//        return get(n - 2) + get(n - 1);
        static unordered_map<int, int> cache;
        auto &result = cache[n];
        if (result == 0) {
            result = get(n - 2) + get(n - 1);
        }
        return result;
    }
};

int main(void) {
    int n;
    cout << "Print n: " << endl;
    cin >> n;
    cout << Fibonachi::get(n) << endl;
}

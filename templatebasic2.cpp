#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool is_equal(T a, T b) {
    return a == b;
}

// Explicit specialization for string
template<>
bool is_equal<string>(string a, string b) {
    return a.compare(b) == 0;
}a

int main() {
    cout << is_equal(43, 12) << endl;             // false (0)
    cout << is_equal(3.14, 3.14) << endl;         // true (1)
    cout << is_equal(string("hello"), string("hello")) << endl; // true (1)
    cout << is_equal(string("hello"), string("world")) << endl; // false (0)
    
    return 0;
}

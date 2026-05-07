#include <iostream>
using namespace std;

template<typename T>
class myclass {
    T x, y;
public:
    myclass() : x(0), y(0) {} // default constructor
    myclass(T a, T b) : x(a), y(b) {}

    // operator+ as friend template
    friend myclass operator+(const myclass &obj1, const myclass &obj2) {
        return myclass(obj1.x + obj2.x, obj1.y + obj2.y);
    }

    // overload << for printing
    friend ostream& operator<<(ostream &out, const myclass &obj) {
        out << "(" << obj.x << ", " << obj.y << ")";
        return out;
    }
};

// generic add function
template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    myclass<int> obj1(12, 34);
    myclass<int> obj2(45, 67);

    cout << add(obj1, obj2) << endl; // prints (57, 101)

    return 0;
}

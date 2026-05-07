#include <iostream>
using namespace std;

template<class T>
class MyPair {
private:
    T a, b;
public:
    MyPair(T x, T y) {
        a = x;
        b = y;
    }

    T getmax() {
        if (a > b)
            return a;
        else
            return b;
    }

    void swapValues() {
        T temp = a;
        a = b;
        b = temp;
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    MyPair<double> p(45.12, 67.12);

    cout << "The maximum is: " << p.getmax() << endl;
    p.swapValues();


    MyPair<char>p2('a','b');
    p2.swapValues();
    cout << "The maximum is: " << p2.getmax() << endl;

    return 0;
}

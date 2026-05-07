#include<iostream>
using namespace std;

template<class T>
T max(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

template<class T>
T min(T a, T b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {

    cout << "The bigger number is " << max(3,5) << endl;
    cout << "The bigger number is " << max(3.5,5.6) << endl;

    cout << "The smaller number is " << min(3,5) << endl;
    cout << "The smaller number is " << min(3.5,5.6) << endl;

    return 0;
}
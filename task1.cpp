#include<iostream>
using namespace std;

template<class T>
T findMax(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {

    
    int cell1 = 120;
    int cell2 = 95;

    cout << "Max cell count = " << findMax(cell1, cell2) << endl;


    double rate1 = 3.75;
    double rate2 = 4.20;

    cout << "Max reaction rate = " << findMax(rate1, rate2) << endl;

    return 0;
}

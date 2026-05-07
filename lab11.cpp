#include<iostream>
using namespace std;

template<class T>
bool big(T a, T b){
    if (a > b)
        return a;
    else
        return b;
}

int main(){

    cout << "The bigger number is " << big(3,5) << endl;
    cout << "The bigger number is " << big(3.5,5.6) << endl;

    return 0;
}
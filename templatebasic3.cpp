#include <iostream>
#include <string>
using namespace std;
template<typename T,typename U>

T percentage( T a, U b) {
    return (a / b) * 100;
}
int main(){
    cout<<percentage(12,45.54)<<endl;
}

// #include<iostream>
// uisng namespace std;
// template<class T>
// T big(T a, T b){
//     if (a > b)
//         return a;
//     else
//         return b;
// }
// T multiply(T a, T b){
//     return a * b;
// }
// T divide(T a, T b){
//     return a / b;




// #include<iostream>
// using namespace std;

// template<class T>
// class AddAmount {
//     T amount;

// public:
//     // Default constructor
//     AddAmount() {
//         amount = 50;
//     }

//     // Parameterized constructor
//     AddAmount(T add) {
//         amount = 50 + add;
//     }

//     void display() {
//         cout << "Final Amount = $" << amount << endl;
//     }
// };

// int main() {
//     AddAmount<int> a1;
//     AddAmount<int> a2(30);

//     a1.display();
//     a2.display();

//     return 0;
// }


// #include<iostream>
// using nameespace std;
// <template<class T>


// T average(T a, T b, T n){
//     return (a+b+n)/3;

// }


// #include<iostream>
// using namespace std;

// template<class T>
// class AddAmount {
//     T amount;

// public:
//     AddAmount() {
//         amount = 50;
//     }

//     AddAmount(T add) {
//         amount = 50 + add;
//     }

//     void show() {
//         cout << "Final Amount = $" << amount << endl;
//     }
// };

// int main() {
//     AddAmount<int> obj1;
//     AddAmount<int> obj2(23.45);

//     obj1.show();
//     obj2.show();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// template<class T>
// T AddAmount(T add) {
//     return 50 + add;
// }

// int main() {
//     cout << "Final Amount = $" << AddAmount(0) << endl;
//     cout << "Final Amount = $" << AddAmount(30) << endl;

//     return 0;



#include<iostream>
using namespace std;

template<class T>
T AddAmount(T add = 0) {
    return 50 + add;
}

int main() {
    cout << "Case 1: No amount added" << endl;
    cout << "Final Amount = $" << AddAmount (0) << endl;

    cout << "\nCase 2: Added $30" << endl;
    cout << "Final Amount = $" << AddAmount(30) << endl;


    return 0;
}
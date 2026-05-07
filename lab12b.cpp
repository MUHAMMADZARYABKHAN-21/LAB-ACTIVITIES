// #include<iostream>
// using namespace std;
// //inserting differen data variables in array in usig template function
// template<class T>
// class Array{
//     public:
//     int size;
//     T arr[5];
//     Array(int s){
//         size = s;
//     }
//     void insert(int index, T value){
//         if(index >= 0 && index < size){
//             arr[index] = value;
//         }
//         else{
//             cout << "Index out of bounds" << endl;
//         }
//     }
//     void display(){
//         for(int i = 0; i < size; i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main(){
//     Array<int> intArray(5);
//     intArray.insert(0, 10);
//     intArray.insert(1, 20);
//     intArray.insert(2, 30);
//     intArray.insert(3, 40);
//     intArray.insert(4, 50);
//     cout << "Integer Array: ";
//     intArray.display();

//     Array<double> doubleArray(5);
//     doubleArray.insert(0, 1.1);
//     doubleArray.insert(1, 2.2);
//     doubleArray.insert(2, 3.3);
//     doubleArray.insert(3, 4.4);
//     doubleArray.insert(4, 5.5);
//     cout << "Double Array: ";
//     doubleArray.display();
//     Array<char> charArray(5);
//     charArray.insert(0, 'H');
//     charArray.insert(1, 'e');
//     charArray.insert(2, 'l');
//     charArray.insert(3, 'l');
//     charArray.insert(4, 'o');
//     cout << "Character Array: ";
//     charArray.display();



//     return 0;
// }

#include<iostream>
using namespace std;

template<class T>

class Array{
    public:
    int size;
    T arr[5];
    Array(int s){
        size =s;



    }
    void insert(int index,T value){
        if(index >= 0 && index < size){
            arr[index] = value;
        }
        else{
            cout << "Index out of bounds" << endl;
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }
};


int main(){

    Array<int> intArray(5);
    intArray.insert(0,10);
    intArray.insert(1,20);
    intArray.insert(2,30);
    intArray.insert(3,40);
    intArray.insert(4,50);
    cout<<"Integer Array: "<<endl;
    intArray.display();
    return 0;


    
}
#include <iostream>
using namespace std;

class Base {
protected:
    int *num1;

public:
    Base(int a = 0) {
        num1 = new int;
        *num1 = a;
    }

    Base(const Base &a) {
        num1 = new int;
        *num1 = *a.num1;
    }

    int get_num1() {
        return *num1;
    }

Base & operator=(const Base &b){

    num1=new int ;
    *num1=*b.num1;
    return *this;

}





    ~Base() {
        delete num1;
    }
};

class Child : public Base {
private:
    int *num2;

public:
    Child(int b = 0, int c = 0) : Base(c) {
        num2 = new int;
        *num2 = b;
    }

    Child(const Child &c) : Base(c) {
        num2 = new int;
        *num2 = *c.num2;

    }

    void display() {
        cout << "Num1: " << get_num1() << endl;
        cout << "Num2: " << *num2 << endl;
    }


    Child & operator=(Child &b){
        Base::operator=(b);
    num2=new int ;
    *num2=*b.num2;
    return *this;
    }

    ~Child() {
        delete num2;
    }
};

int main() {
    Child c1(12, 2);
    Child c2 = c1;
    

    cout << "Original Object:" << endl;
    c1.display();

    cout << "\nCopied Object:" << endl;
    c2.display();


    return 0;
}
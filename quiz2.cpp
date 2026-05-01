// // #include <iostream>
// // #include <cmath>   // for triangle area if needed
// // using namespace std;

// // // Base class
// // class Shape {
// // public:
// //     virtual double area() = 0; // pure virtual function
// //     virtual ~Shape() {}        // virtual destructor
// // };

// // // Derived class: Square
// // class Square : public Shape {
// //     double side;
// // public:
// //     Square(double s) : side(s) {}
// //     double area() override {
// //         return side * side;
// //     }
// // };

// // // Derived class: Triangle
// // class Triangle : public Shape {
// //     double base, height;
// // public:
// //     Triangle(double b, double h) : base(b), height(h) {}
// //     double area() override {
// //         return 0.5 * base * height;
// //     }
// // };

// // int main() {
// //     Shape* shapes[] = {
// //         new Square(4),
// //         new Triangle(4.6, 6.5),
// //         new Square(6.6),
// //         new Triangle(4, 3)
// //     };

// //     for (int i = 0; i < 4; i++) {
// //         cout << "Shape " << i << " area: " << shapes[i]->area() << endl;
// //         delete shapes[i]; // free memory
// //     }

// //     return 0;
// // }



// #include<iostream>
// using namespace std;



// class shape(){
//     public:
//     virtual double area()=0;
//      virtual ~shape(){};




// }

// class square(){
//     double side;


//     public:
//     square(double s):side(s):

//     double area()override{
//         retiurn side*side;
//     }
// }




#include <iostream>
using namespace std;


class Device {
public:
    virtual void showInfo() = 0; 
    virtual ~Device() {}
};


class Computer : public Device {
    int ram; 
public:
    Computer(int r) : ram(r) {}
    void showInfo() override {
        cout << "Computer with " << ram << " GB RAM" << endl;
    }
};


class Printer : public Device {
    int speed; 
public:
    Printer(int s) : speed(s) {}
    void showInfo() override {
        cout << "Printer with speed " << speed << " pages/minute" << endl;
    }
};


class Projector : public Device {
    int brightness;
public:
    Projector(int b) : brightness(b) {}
    void showInfo() override {
        cout << "Projector with brightness " << brightness << " lumens" << endl;
    }
};

int main() {
    
    Device* labDevices[] = {
        new Computer(16),
        new Printer(20),
        new Projector(3000),
        new Computer(8)
    };

    
    for (int i = 0; i < 4; i++) {
        cout << "Lab Device " << i << ": ";
        labDevices[i]->showInfo();
        delete labDevices[i]; // free memory





    }

    return 0;









}

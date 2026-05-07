#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual void display() = 0;
};

// Circle class
class Circle : public Shape {
private:
    int r;

public:
    Circle(int radius) {
        r = radius;
    }

    double area() {
        return 3.14 * r * r;
    }

    void display() {
        cout << "Shape: Circle" << endl;
        cout << "Area: " << area() << endl;
    }
};

// Triangle class
class Triangle : public Shape {
private:
    int base, width;

public:
    Triangle(int b, int w) {
        base = b;
        width = w;
    }

    double area() {
        return 0.5 * base * width;
    }

    void display() {
        cout << "Shape: Triangle" << endl;
        cout << "Area: " << area() << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }

    void display() {
        cout << "Shape: Rectangle" << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Triangle(10, 8);
    Shape* s3 = new Rectangle(6, 4);

    s1->display();
    s2->display();
    s3->display();

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
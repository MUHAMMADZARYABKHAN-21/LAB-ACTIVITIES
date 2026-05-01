#include <iostream>
using namespace std;

// Abstract Base Class
class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    virtual double calculateSalary() = 0;
    virtual void display() = 0;
};

// Full Time Employee
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
    FullTimeEmployee(string n, int i, double salary) : Employee(n, i) {
        monthlySalary = salary;
    }

    double calculateSalary() {
        return monthlySalary;
    }

    void display() {
        cout << "Employee Type: Full Time" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl << endl;
    }
};

// Part Time Employee
class PartTimeEmployee : public Employee {
private:
    int hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(string n, int i, int h, double r) : Employee(n, i) {
        hoursWorked = h;
        hourlyRate = r;
    }

    double calculateSalary() {
        return hoursWorked * hourlyRate;
    }

    void display() {
        cout << "Employee Type: Part Time" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl << endl;
    }
};

// Intern
class Intern : public Employee {
private:
    double stipend;

public:
    Intern(string n, int i, double s) : Employee(n, i) {
        stipend = s;
    }

    double calculateSalary() {
        return stipend;
    }

    void display() {
        cout << "Employee Type: Intern" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl << endl;
    }
};

int main() {
    Employee* e1 = new FullTimeEmployee("Ali", 101, 50000);
    Employee* e2 = new PartTimeEmployee("Ahmed", 102, 40, 300);
    Employee* e3 = new Intern("Sara", 103, 8000);

    e1->display();
    e2->display();
    e3->display();

    delete e1;
    delete e2;
    delete e3;

    return 0;
}
#include <iostream>
using namespace std;

// Abstract Base Class
class Device {
protected:
    string deviceName;
    int deviceID;

public:
    Device(string name, int id) {
        deviceName = name;
        deviceID = id;
        cout << "Device Constructor Called" << endl;
    }

    virtual void operate() = 0;
    virtual double powerConsumption() = 0;

    virtual void deviceInfo() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Device ID: " << deviceID << endl;
    }

    virtual ~Device() {
        cout << "Device Destructor Called" << endl;
    }
};

// SmartPhone Class
class SmartPhone : public Device {
private:
    int batteryCapacity;
    double screenSize;

public:
    SmartPhone(string name, int id, int battery, double screen)
        : Device(name, id) {
        batteryCapacity = battery;
        screenSize = screen;
        cout << "SmartPhone Constructor Called" << endl;
    }

    void operate() override {
        cout << deviceName << " is making calls." << endl;
    }

    double powerConsumption() override {
        return batteryCapacity * 0.05;
    }

    void deviceInfo() override {
        Device::deviceInfo();
        cout << "Battery: " << batteryCapacity << " mAh" << endl;
        cout << "Screen Size: " << screenSize << " inches" << endl;
        cout << "Power Consumption: " << powerConsumption() << endl;
    }

    ~SmartPhone() {
        cout << "SmartPhone Destructor Called" << endl;
    }
};

// Laptop Class
class Laptop : public Device {
private:
    int RAM;
    double processorSpeed;

public:
    Laptop(string name, int id, int ram, double speed)
        : Device(name, id) {
        RAM = ram;
        processorSpeed = speed;
        cout << "Laptop Constructor Called" << endl;
    }

    void operate() override {
        cout << deviceName << " is running software." << endl;
    }

    double powerConsumption() override {
        return RAM * processorSpeed * 2;
    }

    void deviceInfo() override {
        Device::deviceInfo();
        cout << "RAM: " << RAM << " GB" << endl;
        cout << "Processor Speed: " << processorSpeed << " GHz" << endl;
        cout << "Power Consumption: " << powerConsumption() << endl;
    }

    ~Laptop() {
        cout << "Laptop Destructor Called" << endl;
    }
};

// SmartWatch Class
class SmartWatch : public Device {
private:
    string strapType;
    bool heartRateSensor;

public:
    SmartWatch(string name, int id, string strap, bool sensor)
        : Device(name, id) {
        strapType = strap;
        heartRateSensor = sensor;
        cout << "SmartWatch Constructor Called" << endl;
    }

    void operate() override {
        cout << deviceName << " is tracking health data." << endl;
    }

    double powerConsumption() override {
        return heartRateSensor ? 15 : 10;
    }

    void deviceInfo() override {
        Device::deviceInfo();
        cout << "Strap Type: " << strapType << endl;
        cout << "Heart Rate Sensor: "
             << (heartRateSensor ? "Yes" : "No") << endl;
        cout << "Power Consumption: " << powerConsumption() << endl;
    }

    ~SmartWatch() {
        cout << "SmartWatch Destructor Called" << endl;
    }
};

int main() {

    cout << "\n--- Static Binding ---\n";
    SmartPhone s1("iPhone", 101, 5000, 6.5);
    Laptop l1("Dell", 102, 16, 3.2);

    s1.deviceInfo();
    l1.deviceInfo();

    cout << "\n--- Dynamic Binding ---\n";
    Device* d1 = new SmartPhone("Samsung", 201, 4500, 6.2);
    Device* d2 = new Laptop("HP", 202, 8, 2.8);
    Device* d3 = new SmartWatch("Apple Watch", 203, "Leather", true);

    d1->operate();
    d2->operate();
    d3->operate();

    cout << "\n--- Destructor Testing ---\n";
    delete d1;
    delete d2;
    delete d3;

    return 0;
}
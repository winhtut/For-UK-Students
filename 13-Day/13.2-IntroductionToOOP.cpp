//
// Created by winht on 3/3/2024.
//
#include <iostream>
using namespace std;

// Define a class named Vehicle
class Vehicle {
    // Private members can only be accessed within the class
private:
    string brand;

    // Protected members can be accessed within the class and its derived classes
protected:
    string model;

public:
    // Public members can be accessed from anywhere
    void setBrand(string b) {
        brand = b;
    }

    void setModel(string m) {
        model = m;
    }

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

// Define a derived class Car from the base class Vehicle
class Car : public Vehicle {
public:
    void displayCar() {
        // Accessing protected member from the base class
        cout << "Model: " << model << endl;
    }
};

int main() {
    // Create an object of class Vehicle
    Vehicle vehicle;

    // Accessing public member function to set values
    vehicle.setBrand("Toyota");
    vehicle.setModel("Corolla");

    // Accessing public member function to display values
    vehicle.display();

    // Create an object of class Car
    Car car;

    // Accessing protected member function to set value
    car.setModel("Camry");

    // Accessing public member function to display values
    car.display();

    // Accessing public member function of derived class
    car.displayCar();

    return 0;
}

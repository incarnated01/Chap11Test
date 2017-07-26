#include <iostream>
using namespace std;
//Declare
class Car {
private:
    int modelYear, speed;
    string make;
public:
    // Constructor
    Car(int modelYear, int speed, const string &make) :
            modelYear(modelYear), speed(speed), make(make) {}

    //Getters and setters
    int getModelYear() const {
        return modelYear;
    }

    void setModelYear(int modelYear) {
        Car::modelYear = modelYear;
    }

    int getSpeed() const {
        return speed;
    }

    void setSpeed(int speed) {
        Car::speed = speed;
    }

    const string &getMake() const {
        return make;
    }

    void setMake(const string &make) {
        Car::make = make;
    }

    //Other mutators
    void accelerate() {
        speed += 5;
    }

    void brake() {
        if (speed >= 5) {
            speed -= 5;
        } else {
            speed = 0;
        }
    };
};
//Demonstrate the class in a program that creates a Car object, and then calls the
//accelerate function five times. After each call to the accelerate function, get
//the current speed of the car and display it. Then, call the brake function five times.
//After each call to the brake function, get the current speed of the car and display it.

int main() {
    Car renegade(2016,0,"Jeep");

    for (int i = 1; i <= 5; i++){
        renegade.accelerate();
        cout << "Now traveling at " << renegade.getSpeed() << " speed units." << endl;
    }

    for (int i = 1; i <= 5; i++){
        renegade.brake();
        cout << "Now traveling at " << renegade.getSpeed() << " speed units." << endl;
    }

    return 0;
}
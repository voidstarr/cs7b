#include <string>

class Car {
    private:
        int year;
        std::string make;
        int speed;
    public:
        Car(int y, std::string m): year(y), make(m), speed(0) {}
        int getYear() {return year;}
        std::string getMake() {return make;}
        int getSpeed() {return speed;}
        void accelerate() {speed += 5;}
        void brake() {speed -= 5;}
};

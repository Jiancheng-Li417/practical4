#include "Car.h"  

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration(std::time_t currentTime) const {
    double durationInSeconds = difftime(currentTime, timeOfEntry);
    return static_cast<int>(durationInSeconds * 0.90);
}
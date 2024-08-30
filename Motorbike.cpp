#include "Motorbike.h"  

Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration(std::time_t currentTime) const {
    double durationInSeconds = difftime(currentTime, timeOfEntry);
    return static_cast<int>(durationInSeconds * 0.85);
}
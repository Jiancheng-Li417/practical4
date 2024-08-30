#include "Bus.h"  

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration(std::time_t currentTime) const {
    double durationInSeconds = difftime(currentTime, timeOfEntry);
    return static_cast<int>(durationInSeconds * 0.75);
}
#include "ParkingLot.h"
#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

//TODO: complete declaration of Bus
class Bus : public Vehicle
{
private:
    int num_passengers;

public:
    Bus(const string &plate_no, const int &num_passengers);
    void leave(ParkingLot *parking_lot);
    void print();
};
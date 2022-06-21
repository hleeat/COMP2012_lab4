#include "ParkingLot.h"
#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

//TODO: complete declaration of PrivateCar
class PrivateCar:public Vehicle{
    private:
    string brand;
    public:
    PrivateCar(const string& plate_no,const string& brand);
    void leave(ParkingLot* parking_lot);
    void print();
};
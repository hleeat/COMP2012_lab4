#include "Truck.h"

//TODO: complete the constructor and all member functions of Truck
Truck::Truck(const string &plate_no, const int &capacity) : Vehicle(plate_no) {this->capacity=capacity;}
void Truck::leave(ParkingLot *parking_lot) {
    if (is_parking == false)
    {
        cout << plate_no<<" is not parking so it cannot leave!" << endl;
        return;
    }
    double fee = 0;
    fee = parking_lot->reclaim_space(this, TRUCK);
    is_parking = false;
    total_fee += fee;
}
void Truck::print() {
    cout<<"The truck is "<<plate_no<<" with the capacity of "<<capacity;
    cout<<". It has paid totally "<<total_fee<<"."<<endl;

}
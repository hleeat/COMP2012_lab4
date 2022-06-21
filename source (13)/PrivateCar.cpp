#include "PrivateCar.h"

//TODO: complete the constructor and all member functions of PrivateCar
PrivateCar::PrivateCar(const string &plate_no, const string &brand):Vehicle(plate_no) {this->brand=brand;}
void PrivateCar::leave(ParkingLot *parking_lot) {
    if (is_parking == false)
    {
        cout << plate_no<<" is not parking so it cannot leave!" << endl;
        return;
    }
    double fee = 0;
    fee = parking_lot->reclaim_space(this, PRIVATE_CAR);
    is_parking = false;
    total_fee += fee;
}
void PrivateCar::print() {
    cout<<"The private car is "<<plate_no<<" with the brand of "<<brand;
    cout<<". It has paid totally "<<total_fee<<"."<<endl;

}
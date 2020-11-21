#include <iostream> 
using namespace std; 
  
// base class 
class Movable {
    private:
    int movable_id;
    protected:
    int velocity;
    public:
    Movable() {
        velocity=0;
        cout<<"Contruct Movable"<<endl;
    }
    int changeVel(int change) {
        velocity+=change;
        return velocity;
    }
    int changeMovId(int newid) {
        movable_id = newid;
        return newid;
    }
    ~Movable() {
        cout<<"Destruct Movable"<<endl;
    }
};
class Vehicle {
    // Only avallable in Vehicles Class, not even for inherited classes
    private:
     int vehicle_id;
    // similar to private but accessible to inherited classes
    protected:
     int vehicle_num;
    public: 
        Vehicle() 
        { 
            cout << "Construct Vehicle" << endl; 
        } 
        ~Vehicle() {
            cout<<"Destruct Vehicle"<<endl;
        }
}; 
  
// sub class derived from two base classes 
// public inheritance: public as public, protected as protected, private: inaccessible;
class Car: public Movable, public Vehicle{ 
    private:
        int car_id;
        
    protected:
        int car_colours;
        
    public:
    Car() {
        cout<<"Construct Car"<<endl;
    }
    ~Car() {
        cout<<"Destruct Car"<<endl;
    }

}; 
// sub sub class
class MiniCar: public Car {
    private:
        int mini_car_id;
    public:
    MiniCar() {
        cout<<"Construct Mini Car"<<endl;
    }
    ~MiniCar() {
        cout<<"Destruct Mini Car"<<endl;
    }
};
  
// main function 
int main() 
{    
    // creating object of sub class will 
    // invoke the constructor of base classes 
    {
        MiniCar mini1; 
        Car car1;
        Movable movobj1;
        cout<<"New velocity which is protected data in Super Class and accessed via a inherited func is: "<<mini1.changeVel(5)<<endl;
        cout<<"Change a private data in Super class, by using a public func" <<mini1.changeMovId(909)<<endl;
    }
    return 0; 
} 
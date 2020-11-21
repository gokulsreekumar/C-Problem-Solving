#include<iostream> 
  
using namespace std; 
  
 /* start of Enclosing class declaration */  
class Vehicle {       
   private:    
       int VehicleId; 
     
   /* start of Nested class declaration */ 
   public: 
   class Tires { 
      int y;    
      public:
      Tires() {
          cout<<"Tires in Vehicle Contructed\n";
      }
      void VehicleForTires(Vehicle *e) { 
        cout<<e->VehicleId;  // works fine: nested class can access              // private members of Enclosing class 
      }        
   }; // declaration Nested class ends here 
   public:
   Vehicle() {
       cout<<"Vehicle Constructed\n";
   }
}; // declaration Enclosing class ends here 

int some() {
    int t=5;
    return t<<0;
}  

int main() 
{      
    Vehicle veh1;
    Vehicle::Tires tyres_set1;
    cout<<some()<<endl;
} 
#include <iostream>
using namespace std;

class Car{
	friend class MotorCenter;
	private:
	bool statusOK = false;
	bool isClaen = false;
	public:
		void start(){
			 if ( this ->statusOK){
			 	cout << "The engine is started!! :-)" << endl;
			 	
			 }
			 
			 else {
			 	cout <<"The engine fails!! :-("<< endl;
			 	
			 }
		}
		
		void look(){
			if(this -> isClean){
				cout <<"The car is clean! :-)"<<endl;
				
			}else{
				cout <<"The car is dirty! :-("<<endl;
			}
					}
};

class MotorCenter{
	public:
		void repair (Car &car){
			if (car.statusOK == false)
			car.statusOK = true;
		}
		
		void wash(Car &car){
			
			if ( car.isClean == false)
			car.isClean = true;
		}
};

int main(){
	Car myCar;
	MotorCenter motor_center;
	
	myCar.start();
	motor_center.repair(myCar);
	myCar.start();
	
	myCar.look();
	motor_center.wash(myCar);
	myCar.look();
	
	return 0;
	
}

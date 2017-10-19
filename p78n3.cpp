#include <iostream>
using namespace std;
	int main ()
	{ 	
		//Получаем данные: литры и километры
		float litr, km;
		cout << "Kilometrov proehano _";
		cin >>km;
		cout << "Litrov benzina izrashodovano _";
		cin >>litr;
		
		//Вычисление расхода топлива  на 100 км
		float rashod=litr/(km/100);
		
		//Вывод расхода топлива
		cout << "Rashod topliva  "<<rashod<<"  l. na 100 kilometrov";
		
		
	
	return 0;
}

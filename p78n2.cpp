#include <iostream>
using namespace std;
	int main ()
	{   // Чтение роста и веса
		int foot, dume, foont;
		cout<<"Rost v footah i duimah _\n";
		cin >> foot>> dume;
		cout<<"Ves v foontah _\n";
		cin >> foont;
		
		//Вычисление роста в метрах
		float metr_in_dume=0.0254;
		float rost=(foot*12+dume)/metr_in_dume;
	
		//Вычисление веса в килограммах 
		float kg_in_foont=2.2;
		float ves=foont/kg_in_foont;
		
		//Вычисление ИМТ 
		float IMT=ves/(rost*rost);
		
		//Округление ИМТ до сотых
		
		
		//Отображение ИМТ
		cout <<"Vash index massi tela  " <<IMT;
		
		return 0;
}




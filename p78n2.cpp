#include <iostream>
using namespace std;
	int main ()
	{   // ������ ����� � ����
		int foot, dume, foont;
		cout<<"Rost v footah i duimah _\n";
		cin >> foot>> dume;
		cout<<"Ves v foontah _\n";
		cin >> foont;
		
		//���������� ����� � ������
		float metr_in_dume=0.0254;
		float rost=(foot*12+dume)/metr_in_dume;
	
		//���������� ���� � ����������� 
		float kg_in_foont=2.2;
		float ves=foont/kg_in_foont;
		
		//���������� ��� 
		float IMT=ves/(rost*rost);
		
		//���������� ��� �� �����
		
		
		//����������� ���
		cout <<"Vash index massi tela  " <<IMT;
		
		return 0;
}




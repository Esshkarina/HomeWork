#include <iostream>
using namespace std;
	int main ()
	{ 	
		//�������� ������: ����� � ���������
		float litr, km;
		cout << "Kilometrov proehano _";
		cin >>km;
		cout << "Litrov benzina izrashodovano _";
		cin >>litr;
		
		//���������� ������� �������  �� 100 ��
		float rashod=litr/(km/100);
		
		//����� ������� �������
		cout << "Rashod topliva  "<<rashod<<"  l. na 100 kilometrov";
		
		
	
	return 0;
}

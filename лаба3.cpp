#include <iostream>
using namespace std;

int main ()
{
	unsigned int n;
	cout << "Vvedite razmernoct n _ kvadratnoi matrizhi ";
	cin >> n;
 	int D2[n][n];
 	//������� ���������� ������� D2 �� n.
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++){
            cout<<"Vvedite el-t matrizhi["<<i+1<<"]["<<j+1<<"] ";
            cin>>D2[i][j];
	    }
 	// ��������� ���������� �������
 	int summ=0;
 	for (int i=0; i<n; i++) {
 		bool plus=true;
 		for (int j=0; j<n; j++) {
 			if (D2[i][j] < 0) plus=false;
 			summ+=D2[i][j];
		 }
		if (plus==true) {
			cout << "Str "<<i+1<<"  bez el-ov < 0"<< "\tSumma ="<<summ<<endl;
			summ=0;
		} 
		else {
			summ=0;
			plus=true;
		}
	 }
 	// ���������� ����� � ��� �������, ������� �� ����� ������������� ��.
	int minSUMMA=10000000;
	unsigned int k=n; //��� ���������� �������� i � ������ ����� ������
	for (int j=0; j<n-1; j++){		
		int summa=0; //����� ��. � ���������
		for (int i=0;i<k-1;i++){
			summa +=D2[j+i][j];
			if (summa<minSUMMA) minSUMMA=summa;
			k--;
		}
	}	
 	//������� ������� ��� ���������� ����� � ���������� ���� �������
 	for (int j=0; j<n-1;j++){		
		int summa=0; //����� ��. � ���������
		for (int i=0;i<k-1;i++){
			summa +=D2[j][j+i];
			if (summa<minSUMMA) minSUMMA=summa;
			k--;
		}
	}
	//������� �������� ��� ���������� ����� � ���������� ���� �������
	for (int j=0; j<n-1; j++){		
		int summa=0; //����� ��. � ���������
		summa +=D2[j][j];
		if (summa<minSUMMA) minSUMMA=summa;
	}
 	//������� �������� ��� ���������� ����� � ������� ���������
 	cout << "Minimal SUMMA el-ov diagonalei =" << minSUMMA;
 	// ������� ����� ���� ��������� ����������, || ������� ��������� �������
 	
 


return 0;
}

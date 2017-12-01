#include <iostream>
using namespace std;

int main ()
{
	unsigned int n;
	cout << "Vvedite razmernoct n _ kvadratnoi matrizhi ";
	cin >> n;
 	int D2[n][n];
 	//Создана квадратная матрица D2 от n.
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++){
            cout<<"Vvedite el-t matrizhi["<<i+1<<"]["<<j+1<<"] ";
            cin>>D2[i][j];
	    }
 	// Заполнена квадратная матрица
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
 	// Напечатаны суммы в тех строках, которые не имеют отрицательных эл.
	int minSUMMA=10000000;
	unsigned int k=n; //для уменьшения счетчика i с каждым новым циклом
	for (int j=0; j<n-1; j++){		
		int summa=0; //сумма эл. в диагонали
		for (int i=0;i<k-1;i++){
			summa +=D2[j+i][j];
			if (summa<minSUMMA) minSUMMA=summa;
			k--;
		}
	}	
 	//Написан алгорим для нахождения суммы в диагоналях ниже главной
 	for (int j=0; j<n-1;j++){		
		int summa=0; //сумма эл. в диагонали
		for (int i=0;i<k-1;i++){
			summa +=D2[j][j+i];
			if (summa<minSUMMA) minSUMMA=summa;
			k--;
		}
	}
	//Написан алгоритм для нахождения суммы в диагоналях выше главной
	for (int j=0; j<n-1; j++){		
		int summa=0; //сумма эл. в диагонали
		summa +=D2[j][j];
		if (summa<minSUMMA) minSUMMA=summa;
	}
 	//Написан алгоритм для нахождения суммы в главной диагонали
 	cout << "Minimal SUMMA el-ov diagonalei =" << minSUMMA;
 	// Минимум среди сумм элементов диагоналей, || главной диагонали матрицы
 	
 


return 0;
}

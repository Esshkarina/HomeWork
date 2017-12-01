#include <iostream>
using namespace std;

int main ()
{
	unsigned int n;
	cout << "Vvedite razmernoct n _ kvadratnoi matrizhi ";
	cin >> n;
 	int D2[n][n];
 	//Ñîçäàíà êâàäðàòíàÿ ìàòðèöà D2 îò n.
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++){
            cout<<"Vvedite el-t matrizhi["<<i+1<<"]["<<j+1<<"] ";
            cin>>D2[i][j];
	    }
 	// Çàïîëíåíà êâàäðàòíàÿ ìàòðèöà
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
 	// Íàïå÷àòàíû ñóììû â òåõ ñòðîêàõ, êîòîðûå íå èìåþò îòðèöàòåëüíûõ ýë.
	int minSUMMA=10000000;
	int summa=0;
	unsigned int k=n; //äëÿ óìåíüøåíèÿ ñ÷åò÷èêà i ñ êàæäûì íîâûì öèêëîì
	for (int j=0; j<n-1; j++){		
		
		for (int i=0;i<k-1;i++){
			summa =summa +D2[j][j];
			if (summa<minSUMMA) minSUMMA=summa;
			k--;
		}
		summa=0;
	}	
 	//Íàïèñàí àëãîðèì äëÿ íàõîæäåíèÿ ñóììû â äèàãîíàëÿõ íèæå ãëàâíîé
 	for (int j=0; j<n-1;j++){		
		
		for (int i=0;i<k-1;i++){
			summa =summa +D2[j][j];
			if (summa<minSUMMA) minSUMMA=summa;
			k--;
		}
		summa=0;
	}
	//Íàïèñàí àëãîðèòì äëÿ íàõîæäåíèÿ ñóììû â äèàãîíàëÿõ âûøå ãëàâíîé
	
	for (int j=0; j<n-1; j++){		
		
		summa =summa +D2[j][j];
		if (summa<minSUMMA) minSUMMA=summa;
	}
 	//Íàïèñàí àëãîðèòì äëÿ íàõîæäåíèÿ ñóììû â ãëàâíîé äèàãîíàëè
 	cout << "Minimal SUMMA el-ov diagonalei =" << minSUMMA;
 	// Ìèíèìóì ñðåäè ñóìì ýëåìåíòîâ äèàãîíàëåé, || ãëàâíîé äèàãîíàëè ìàòðèöû
 	
 


return 0;
}

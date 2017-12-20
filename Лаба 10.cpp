#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
 
 
template <typename T>
T func1(const T* arri) {
	
	int maxi = -1;
	unsigned int n;	
	T p2=0;
	T p1=1;
	T max;
		
 	for (int i=0; i<n; i++){
		
		if (arri[i] > max) {
			max = arri[i];
			maxi = i;
		} 
	}  
	cout << "max =" << max << endl;
	cout << "maxi ="<< maxi+1 << endl;
	
	for (int i = 0; i<n; i++) {
		if (arri[i] < 0) {
			p1=p1*(arri[i]);
		}
		else if(i<maxi){
			p2=p2+arri[i];
			
		}
	}
	
	cout << "p1 = " << p1 << "p2 =" << p2 ;
	for (int i = 0; i<n; i++) {
		cout << "arri [" << i+1 << "] ="<< arri[n-i-1];
		cout << endl;
		
	}
	
	return (0);
}
	// —читаетс€ и выводитс€ произведение отриц. и сумма полож.


int main() {
	srand ( time(NULL) );
	
	int n;
	cout << "Vvedite  n _ ";
	cin >> n ;
	double arr[100];
	for (int i=0; i<n; i++){
		arr[i] = rand ()%15-10;
		cout << arr[i] << endl;
	}
	func1(arr);
		
	

return 0;
}

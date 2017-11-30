#include <iostream>
using namespace std;
 
int main() {

	int maxi = -1;
	unsigned int n;
	int cash;	
	double p1=1;
	double p2=0;
	double max=-1;
	
	cout << "Vvedite  n _ ";
	cin >> n ;
	double arri[n];	
	
 	for (int i=0; i<n; i++){
		cout << "arri [" << i+1 << "] =";
		cin >> arri[i];
		
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
	
	cout << "p1 = " << p1  << "p2 =" << p2 ;
	// —читаетс€ и выводитс€ произведение отриц. и сумма полож.
	

	for (int i = 0; i<n; i++) {
		cout << "arri [" << i+1 << "] ="<< arri[n-i-1];
		cout << endl;
		
	}
	
	
	

return 0;
}

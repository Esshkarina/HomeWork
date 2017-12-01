#include <iostream>
using namespace std;

int main () {
	double xn, xk, dx;
	double a, b, c, d;
	cout << "Posledovatelno vvedite Xn, Xk, dX, a, b, c, d" << endl;
	cin >> xn >> xk >> dx >> a >> b >> c >> d;
	if ((int (a) ^ int (b)) | (int (a) ^ int (c)) != 0) {
		for (double x = xn; x <= xk; x +=dx) {
			double f;
			if (x < 5 && b != 0) f= (a*(x+7)*(x+7)) - b;
			else if (x > 5 && b == 0) f = (x -c*d)/(a*x);
			else f = x/c;
			cout << "x=" << x <<"\tf = " << f << endl;
		}
	}
	else {
		for (double x = xn; x <= xk; x +=dx) {
			int f;
			if (x < 5 && b != 0) f= (a*(x+7)*(x+7)) - b;
			else if (x > 5 && b == 0) f = (x -c*d)/(a*x);
			else f = x/c;
			cout << "x=" << x <<"\tf = " << f << endl;
		}
	}
}

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int  main () {

	int ax, bx, c;

	cout << " Ingrese valor x ^ 2: ";
	cin >> ax;
	cout << " \nIngrese valor x: " ;
	cin >> bx;
	cout << " \nIngrese valor c:   ";
	cin >> c;

	double x1 = 0 , x2 = 0 ;

	if (ax == 0 ) {

		cout << " \n**********NO cumple los requisiftos para usar cuadratica********* " << endl;

		float vx;

		vx = - c / bx;

		cout << " valor de x: " << vx << " o tambien: " << -c << "/" << bx << endl;

	}
	else {
			if (( pow (bx, 2 ) - 4 * ax * c) >= 0 ) {

				x1 = (- (bx) + ( sqrt ( pow (bx, 2 ) - 4 * ax * c))) / ( 2 * ax);
				x2 = (- (bx) - ( sqrt ( pow (bx, 2 ) - 4 * ax * c))) / ( 2 * ax);

				if (x1 == x2) {
					cout << " \nraices doble: " << x1 << endl;
				}
				else {
					cout << " \nvalor de x1: " << x1 << endl;
					cout << " valor de x2: " << x2 << endl;
				}
			}
			else{

				float numc;
				numc = sqrt ( abs (( pow (bx, 2 ) - 4 * ax * c)));

				cout << " \nx1: " << -bx << " + raiz ( " << numc << " i) / " << 2 * ax << endl;
				cout << " x2: " << -bx << " - raiz ( " << numc << " i) / " << 2 * ax << endl;
			}
	}
	return  0 ;
}

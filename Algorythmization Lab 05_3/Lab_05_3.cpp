#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;double h(const double x);int fact(int v);int main(){	double gp, gk, z;	int n;	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;	cout << fixed;	double dg = (gk - gp) / n;	double g = gp;	cout << fixed;	cout << "----------------------------------\n";	cout << "|" << "z" << setw(10) <<		"|" << "g" << setw(10) << "|";	cout << "\n----------------------------------\n";	while (g <= gk) {		cout << fixed;		z = h(pow(g, 2) + 1) + h(g + h(1)) + 1;		cout << "|" << setprecision(3) << z << setw(10) <<			"|" << setprecision(3) << g << setw(10) << "|" << endl;		g += dg;	}	return 0;}double h(const double x) {	if (fabs(x) >= 1) 		return (sin(x) + 1) / (1 + cos(x));	else if (fabs(x) < 1) {		double sum = 0;		for (int i = 0; i < 5; i++) {			sum += (pow(x, i)) / fact((2 * i)); 		}		return sum;	}}int fact(int v) {	if (v > 1) {		return v * fact(v - 1);	}	else{		return 1;	}}
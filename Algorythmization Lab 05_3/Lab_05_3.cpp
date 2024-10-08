#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;double h(const double x);int fact(int v);int main(){	double gp, gk, z;	int n;	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;	cout << fixed;	double dg = (gk - gp) / n;	double g = gp;	cout << fixed;
	cout << "----------------------------------------\n";
	cout << "|" << setw(10) << "z" << setw(10) << "|"
		<< setw(10) << "g" << setw(10) << "|\n";
	cout << "----------------------------------------\n";	while (g <= gk) {		cout << fixed;		z = h(pow(g, 2) + 1) + h(g + h(1)) + 1;		cout << "|" << setw(10) << setprecision(3) << z << setw(10)
			<< "|" << setw(10) << setprecision(3) << g << setw(10) << "|\n";		cout << "----------------------------------------\n";		g += dg;	}	return 0;}double h(const double x) {	if (fabs(x) >= 1) 		return (sin(x) + 1) / (1 + cos(x));	else if (fabs(x) < 1) {		double sum = 0;		int i = 0;		int a = 1;		do {			i++;			a *= x/((2*i + 2)*(2*i + 1));			sum += a;		} while (i <= 5); 		return sum;	}}
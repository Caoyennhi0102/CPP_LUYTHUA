#include<iostream>
using namespace std;

double tinhluythua(double a, double b);
int main() {
	double so, somu, luythua = 1;
	cout << "Nhap so: "; cin >> so;
	cout << "nhap so mu: "; cin >> somu;

	cout << "Luy Thua = " << pow(so, somu) << endl;
	cout << "luy thua = " << tinhluythua(so, somu) << endl;
	
	return 0;
}


double tinhluythua(double a, double b) {
	double giatri = 1;
	for (int i = 0; i < b; i++) {
		giatri = giatri * a;
	}
	return giatri;
}
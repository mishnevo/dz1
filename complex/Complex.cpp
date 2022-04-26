#include "Complex.h"
complex complex::sum(complex n) {
	complex n2;
	n2.Re = Re + n.Re;
	n2.Im = Im + n.Im;
	n2.print();
	return n2;
}
complex complex::min(complex n) {
	complex n2;
	n2.Re = Re - n.Re;
	n2.Im = Im - n.Im;
	n2.print();
	return n2;
}
complex complex::mult(complex n) {
	complex n2;
	n2.Re = (Re * n.Re - Im * n.Im);
	n2.Im = (Re * n.Im + Im * n.Re);
	n2.print();
	return n2;
}
complex complex::div(complex n) {
	complex n2;
	n2.Re = (Re * n.Re + Im * n.Im) / (pow(n.Re, 2) + pow(n.Im, 2));
	n2.Im = (n.Re * Im - Re * n.Im) / (pow(n.Re, 2) + pow(n.Im, 2));
	n2.print();
	return n2;
}
double complex::module() {
	double mod = sqrt(pow(Re, 2) + pow(Im, 2));
	return mod;
}
int quantity() {
	ifstream numb("numbers.txt");
	int n;
	numb >> n;
	return n;

}
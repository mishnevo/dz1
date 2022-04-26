#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class complex
{
public:
	complex sum(complex n1);
	complex min(complex n1);
	complex mult(complex n1);
	complex div(complex n1);
	double module();
	double getRe() {
		return Re;
	}
	double getIm() {
		return Im;
	}
	void setIm(double Im) {
		this->Im = Im;
	}
	void setRe(double Re) {
		this->Re = Re;
	}
	void Init() {
		double n, k;
		cin >> n;
		setRe(n);
		cin >> k;
		setIm(k);
	}
	void print() {
		cout << getRe() << " " << getIm() << endl;

	}


private:
	double Re, Im;
};
int quantity();

#endif


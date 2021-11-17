#include <iostream>
#include <stdio.h>
using namespace std;

// wzema cifrite ot endo chislo i syzdawa wyzmovno naj golqmoto i malkoto chislo s tqh

int main()
{
	system ("chcp 1251");
	int i, a, b, c;
	int d, p, s;
	cout << "Въведете трицифрено число :"; cin >> i;
	if (i>=100 && i<1000){
		c = i % 10;
		b = (i / 10) % 10;
		a = (i / 100) % 10;
		d = 0;
		p = 0; 
		if (a >= b && b >= c && a >= c) {
			d = a * 100 + b * 10 + c;
			p = c * 100 + b * 10 + a;
		}
		else if (a >= b && c >= b && a >= c) { 
			d = a * 100 + c * 10 + b; 
			p = b * 100 + c * 10 + a;
		}
		else if (b >= a && a >= c && b >= c) {
			d = b * 100 + a * 10 + c;
			p = c * 100 + a * 10 + b;
		}
		else if (b >= a && c >= a && b >= c) {
			d = b * 100 + c * 10 + a;
			p = a * 100 + c * 10 + b;
		}
		else if (c >= a && a >= b && c >= b) {
			d = c * 100 + a * 10 + b;
			p = b * 100 + a * 10 + c;
		}
		else if (c >= a && b >= a && c >= b) {
			d = c * 100 + b * 10 + a;
			p = a * 100 + b * 10 + c;
		}
		s = d - p;

		cout << "Първа цифра :" << a << endl;
		cout << "Втора цифра :" << b << endl;
		cout << "Трета цифра :" << c << endl;
		cout << "Най-голямо число :" << d << endl;
		cout << "Най-малко число :" << p << endl;
		cout << "Разлика :" << s << endl;
	}
	else
	{
		cout << "Въведеното число не е трицифрено!"<<endl;
	}
	return 0;
}
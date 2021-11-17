#include <iostream>
#include <stdlib.h>

using namespace std;


//sybira wsichki polojitelni, chetni chisla dokato ne prewishat 1000 i sled towa izkarwa sumata im

int main() {
	int a=0,sum=0;
	while (true) {
		cout << "Wywedete chislo:";
		cin >> a;
		if (a % 2 == 0 && a>0)
			sum += a;
		cout << "Sumata na chislata e: " << sum << endl;
		if (sum > 999)
			break;
	}
	
	cout << "Sumata e chetiricifreno chislo: " << sum<<endl;

	system("pause");
	return 0;

}

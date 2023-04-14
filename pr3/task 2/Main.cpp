#include "Rational.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int numm, a, b;
	cout << "vvedite kol-vo elementov: " << '\n';
	cout << "___________________________" << '\n';
	cin >> numm;
	Rational** arr = new Rational * [numm];
	for (int i = 0; i < numm; i++) {
		cout << "vvedite elementi drobi N" << i + 1 << '\n';
		
		cin >> a >> b;
		arr[i] = new Rational(a, b);
		if (not arr[i]->valid_prove) {
			i--;			
			continue;
		}
		arr[i]->show();
	}
	delete[] arr;
	return 0;
}
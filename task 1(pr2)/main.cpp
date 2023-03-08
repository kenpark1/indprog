#include <iostream>
#include "triangle.h"
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите стороны: ";
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (not mas[i].exst_tr()) {
			cout << '\n' << "Треугольника с такими сторонами нет" << '\n';
			--i;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Треугольник № " << i + 1 << '\n';
		cout << "Периметр: " << mas[i].perimetr() << '\n';
		cout << "Площадь: " << mas[i].square() << '\n';
	}
	return 0;
}

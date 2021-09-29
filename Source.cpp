// Lab_03_3.cpp
// < Перун Уляни >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
    double R1; // вхідний параметр
	double R2; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R1 = "; cin >> R1;
	cout << "x = "; cin >> x;
	cout << "R2 = "; cin >> R2;

	// розгалуження в повній формі
	if (x <= R1)
		y = (-R1) / 2 - R1;
	else
		if (-R1 < x && x <= 0)
			y = sqrt(R1 * R1 - x * x) - R1;
		else
			if (0 < x && x <= R1)
				y = R2 - sqrt(R2 * R2 - x * x);
			else
				if (R2 < x && x <= 4)
					y = -R1;
				else
					y = (R1 * (x - 4) / 2) / 2 - R1;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
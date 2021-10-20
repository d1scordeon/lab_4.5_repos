// Lab_04_5.cpp
// Бахмат Катерина
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру.
// Варіант 1

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R{};

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((x * x) + (y * y) < (R * R) && y < x && x < 0 && y < 0)
			|| (y > x && (x * x) + (y * y) > (R * R) && x > 0 && y > 0))

			cout << "yes" << endl;
		else
			cout << "no" << endl;

		cout << endl << fixed;


		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - 3;
			y = 6. * rand() / RAND_MAX - 3;

			if (((x * x) + (y * y) < (R * R) && y < x && x < 0 && y < 0)
				|| (y > x && (x * x) + (y * y) > R * R && x > 0 && y > 0))
				
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;

			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}

		return 0;
	}

}
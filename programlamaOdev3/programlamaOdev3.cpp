#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a, b, c;
	double D, x1, x2;

	cout << "katsayiyi giriniz..: ";
	cin >> a;

	cout << "katsayiyi giriniz..: ";
	cin >> b;

	cout << "katsayiyi giriniz..: ";
	cin >> c;

	D = b*b - 4 * a*c;

	if (D == 0)
	{
		x1 = -b / (2 * a);
		cout << "x1..: " << x1;
	}
	else if (D < 0)
		cout << "Reel kök yoktur";
	else
	{
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1..: " << x1;
		cout << "x2..: " << x2;
	}

	
    return 0;
}


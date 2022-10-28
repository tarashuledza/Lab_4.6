#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int k, i;

	P = 1;
	k = 1;
	while (k <= 15)
	{
		S = 0;
		i = 1;
		while (i <= k)
		{
			S += cos(i + k);
			i++;
		}
		P *= pow(1 + S, 2);
		k++;
	}
	cout << "1) P = " << P << endl;

	P = 1;
	k = 1;
	do 
	{
		S = 0;
		i = 1;
		do {
			S += cos(i + k);
			i++;
		} while (i <= k);
		P *= pow(1 + S, 2);
		k++;
	} while (k <= 15);
	cout << "2) P = " << P << endl;

	P = 1;
	for (int k = 1; k <= 15; k++)
	{
		S = 0;
		for (int i = 1; i <= k; i++)
		{
			S += cos(i + k);
		};
		P *= pow(1 + S, 2);
	};
	cout << "3) P = " << P << endl;

	P = 1;
	for (k = 15; k >= 1; k--)
	{
		S = 0;
		for (i = k; i >= 1; i--)
		{
			S += cos(i + k);
		}
		P *= pow(1 + S, 2);
	}
	cout << "4) P = " << P << endl;

	return 0;
}

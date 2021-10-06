// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 13

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double S1, S2;
	int k, i;

	k = 1;
	S1 = 0;
	while (k <= 20)
	{
		i = k;
		S2 = 0;
		while (i <= (40 - k))
		{
			S2 += i * i;
			i++;
		}
		S1 += (1 + sqrt(S2)) / (k * k);
		k++;
	}
	cout << S1 << endl;

	k = 1;
	S1 = 0;
	do
	{
		i = k;
		S2 = 0;
		do
		{
			S2 += i * i;
			i++;
		} while (i <= (40 - k));
		S1 += (1 + sqrt(S2)) / (k * k);
		k++;
	} while (k <= 20);
	cout << S1 << endl;

	S1 = 0;
	for(k = 1; k <= 20; k++)
	{
		S2 = 0;
		for(i = k; i <= (40 - k); i++)
		{
			S2 += i * i;
		}
		S1 += (1 + sqrt(S2)) / (k * k);
	}
	cout << S1 << endl;

	S1 = 0;
	for (k = 20; k >= 1; k--)
	{
		S2 = 0;
		for (i = (40 - k); i >= k; i--)
		{
			S2 += i * i;
		}
		S1 += (1 + sqrt(S2)) / (k * k);
	}
	cout << S1 << endl;

	return 0;
}
#include<iostream>
using namespace std;



int main()
{
	int i, j, liczenie = 1, x = 0, ilosc = 0;

	cout << "Podaj ilość liczb pierwszych jaka chcesz poznać ";
	cin >> ilosc;

	cout << "Liczby pierwsze to ";

	for (i = 3; i > 0; ++i)
	{
		for (j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0) {
				x = 1;
				break;
			}
		}
		if (x == 0)
		{
			cout << i;
			cout << " ";
			liczenie = liczenie + 1;
		}
		x = 0;
		if (liczenie == ilosc + 1)
			break;
	}
	return 0;
}
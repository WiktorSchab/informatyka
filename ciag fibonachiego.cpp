// ciag fibonachiego.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int wartosc, cyfra1, cyfra2, cyfra3;

	cout << "Ile chcesz cyfr z ciagu fibonaciego: ";
	cin >> wartosc;

	cyfra1 = 0;
	cyfra2 = 1;

	if (wartosc == 1) {
		cout << cyfra1 << endl;
	}
	if (wartosc == 2) {
		cout << cyfra1 << endl;
		cout << cyfra2 << endl;
	}

	if (wartosc > 2) {
		cout << cyfra1 << endl;
		cout << cyfra2 << endl;
		
		wartosc = wartosc - 2;
		while (wartosc > 0) {
			cyfra3 = cyfra2;
			cyfra2 = cyfra2 + cyfra1;
			cyfra1 = cyfra3;

			cout << cyfra2 << endl;

			wartosc = wartosc - 1;
		}
	}
	
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

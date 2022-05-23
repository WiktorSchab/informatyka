// ConsoleApplication5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int bin(int table[],int szukana) {
    int l=0, p=15, sr=(l+p)/2;

    while (l <= p) {
        if (table[sr] == szukana) {
            return sr;
        }
        if (table[sr] > szukana){
            p = sr - 1;
        }else{
            l = sr + 1;
        }
        sr = (l + p) / 2;
        
    }

    return -1;
}

int main()
{
    int szukana;
    int table[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

    cout << "Podaj cyfre do wyszukania na liście: ";
    cin >> szukana;
    
    if (bin(table, szukana) == -1){
        cout << "Nie znaleziono cyfry" << endl;
    }
    else {
        cout << "Pozycja cyfry " << szukana << " to: " << bin(table, szukana);
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

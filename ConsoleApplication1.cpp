#include <iostream>
using namespace std;
void funckja_szyfr(char table[], int klucz) {
    int word_lenght;
    word_lenght = strlen(table);
    if (!(klucz >= -26 && klucz <= 26)) {
        return;
    }
    else if (klucz >= 0) {
        for (int i = 0; i < word_lenght; i++) {
            if (table[i] + klucz <= 'x') {
                table[i] += klucz;
            }
            else {
                table[i] = table[i] + klucz - 26;
            }
        }
    }
}
int main() {
    string slowo;
    int klucz;
    char table[1000];

    cout << "Podaj swoj klucz: ";
    cin >> klucz;

    cout << "Podaj slowo: ";
    cin >> table;

    slowo = table;

    funckja_szyfr(table, klucz);
    cout << "Po zaszyfrowaniu: " << table << endl;
    cout << "Po rozszyfrowaniu: " << slowo << endl;
}
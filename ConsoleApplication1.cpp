#include <iostream>
#include <cstring>
using namespace std;
void funckja_szyfr(char table[], int klucz) {
    int word_lenght;
    word_lenght = strlen(table);
    if (!(klucz >= -26 && klucz <= 26)) {
        return;
    }
    if (klucz >= 0) {
        for (int i = 0; i < word_lenght; i++) {
            if (table[i] + klucz <= 'z') {
                table[i] += klucz;
            }
            else {
                table[i] = table[i] + klucz - 26;
            }
        }
    }
    else {
        for (int i = 0; i < word_lenght; i++) {
            if (table[i] + klucz >= 'a') {
                table[i] += klucz;
            }
            else {
                table[i] = table[i] + klucz + 26;
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


    funckja_szyfr(table, klucz);
    cout << "Po zaszyfrowaniu: " << table << endl;
    funckja_szyfr(table, -klucz);
    cout << "Po rozszyfrowaniu: " << table << endl;
}

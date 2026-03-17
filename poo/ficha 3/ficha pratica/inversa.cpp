#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char palavra[100];
    cout << "Insira uma palavra: ";
    cin >> palavra;

    cout << palavra << " – ";

    int tamanho = strlen(palavra);

    char inversa[100];
    for (int i = 0; i < tamanho; i++) {
        inversa[i] = palavra[tamanho - 1 - i];
    }
    inversa[tamanho] = '\0';

    cout << inversa << endl;


    cin.get();
    cin.get();
    return 0;
}
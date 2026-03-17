#include <iostream>
using namespace std;

char fruta1[50];
char fruta2[50];
char frase[100];

void criarFrase(char f1[], char f2[], char result[]) {
    int i = 0, j = 0;

    // Copia fruta1 para result
    while(f1[i] != '\0') {
        result[i] = f1[i];
        i++;
    }

    result[i] = ' '; // espaço entre frutas
    i++;

    // Copia fruta2 para result
    while(f2[j] != '\0') {
        result[i] = f2[j];
        i++;
        j++;
    }

    result[i] = '\0'; // finaliza string
}

int main() {
    cout << "Digite o nome da primeira fruta: ";
    cin >> fruta1;

    cout << "Digite o nome da segunda fruta: ";
    cin >> fruta2;

    criarFrase(fruta1, fruta2, frase);

    cout << "Frase combinada: " << frase << endl;

    return 0;
}
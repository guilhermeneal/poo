#include <iostream>
#include <cstring>  // Necessário para strcat
using namespace std;

// Protótipo da função
void Frutas(char *fruta1, char *fruta2);
char FrutasEscolhidas[40];  // Variável global para armazenar a frase final

int main() {
    char fruta1[20], fruta2[20];

    cout << "Digite o nome da primeira fruta: ";
    cin >> fruta1;

    cout << "Digite o nome da segunda fruta: ";
    cin >> fruta2;

    Frutas(fruta1, fruta2);

    cout << "Frase combinada: " << FrutasEscolhidas << endl;

    return 0;
}

// Função que recebe dois ponteiros e concatena usando strcat
void Frutas(char *fruta1, char *fruta2) {
    strcpy(FrutasEscolhidas, fruta1);  // Copia fruta1 para FrutasEscolhidas
    strcat(FrutasEscolhidas, " ");     // Adiciona espaço
    strcat(FrutasEscolhidas, fruta2);  // Concatena fruta2
}
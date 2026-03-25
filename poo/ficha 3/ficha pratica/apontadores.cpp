#include <iostream>
using namespace std;

void adicionarUm(int* notas, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        *(notas + i) += 1; // Usando aritmética de ponteiros
    }
}

int main() {
    int notas[6];

    cout << "Digite 6 notas: ";
    for(int i = 0; i < 6; i++) {
        cin >> notas[i];
    }

    adicionarUm(notas, 6);

    cout << "Notas atualizadas: ";
    for(int i = 0; i < 6; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;

    return 0;
}
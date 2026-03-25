#include <iostream>
#include <stdio.h>
using namespace std;

main() {
    int nota = 0;

    cout << "Digite a nota que o aluno obteve: ";
    cin >> nota;

    switch (nota)
    {
    case 0 ... 10:
        cout << "Reprovado!" << endl;
        break;
    case 11 ... 14:
        cout << "Suficiente!" << endl;
        break;
    case 15 ... 19:
        cout << "Bom!" << endl;
        break;
    case 20:
        cout << "Muito Bom!" << endl;
        break;
    default:
        break;
    }
}
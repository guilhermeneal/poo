#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2;
    char op;

    cout << "Digite o primeiro número: ";
    cin >> nota1;

    cout << "Digite o segundo número: ";
    cin >> nota2;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << nota1 + nota2 << endl;
        break;

    case '-':
        cout << nota1 - nota2 << endl;
        break;

    case '*':
        cout << nota1 * nota2 << endl;
        break;

    case '/':
        if (nota2 == 0)
        {
            cout << "Não é possível dividir por zero." << endl;
        }
        else
        {
            cout << nota1 / nota2 << endl;
        }
        break;

    default:
        cout << "Operação inválida!" << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
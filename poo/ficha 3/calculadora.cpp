#include <iostream>
using namespace std;

void dados(float &nota1, float &nota2, char &op){
    cout << "Digite o primeiro número: ";
    cin >> nota1;

    cout << "Digite o segundo número: ";
    cin >> nota2;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> op;
}

float soma(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mult(float a, float b){
    return a * b;
}

float divi(float a, float b){
    if(b == 0){
        cout << "Não é possível dividir por zero." << endl;
        return 0;
    }
    return a / b;
}

int main(){
    float nota1, nota2;
    char op;

    dados(nota1, nota2, op);

    switch(op){
        case '+':
            cout <<"O resultado da sua soma e " << soma(nota1, nota2) << endl;
            break;

        case '-':
            cout << "O resultado da sua subtracao e " <<sub(nota1, nota2) << endl;
            break;

        case '*':
            cout << "O resultado da sua multiplicacao e " << mult(nota1, nota2) << endl;
            break;

        case '/':
            cout << "O resultado da sua divisao e " << divi(nota1, nota2) << endl;
            break;

        default:
            cout << "Operação inválida!" << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
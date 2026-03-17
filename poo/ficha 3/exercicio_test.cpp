#include <iostream>
using namespace std;

void dados(int &comprimento, int &largura)
{
    cout << "Digite o comprimento: ";
    cin >> comprimento;

    cout << "Digite a largura: ";
    cin >> largura;
}

int calcularArea(int comprimento, int largura)
{
    return comprimento * largura;
}

int main()
{
    int comprimento, largura;

    dados(comprimento, largura);

    int area = calcularArea(comprimento, largura);

    cout << "Area do rectangulo = " << area << endl;

    cin.get();
    cin.get();
    return 0;
}
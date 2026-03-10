#include <iostream>
using namespace std;

int main()
{
    int num1, num2, produto;

    do
    {
        cout << "Digite o primeiro numero inteiro: ";
        cin >> num1;

        cout << "Digite o segundo numero inteiro: ";
        cin >> num2;

        produto = num1 * num2;

        cout << "O produto dos numeros e: " << produto << endl;

    } while (produto >= 10 && produto <= 1000);

    cin.get();
    cin.get();
    return 0;
}
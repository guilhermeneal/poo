#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    do
    {   
        cout << "Digite um numero inteiro entre 1 e 15: ";
        cin >> num;
    } while (num < 1 || num > 15);

    while (num <= 15)
    {
        cout << num << " ";
        sum += num;
        num++;
    }
    cout << "\n A soma de todos os numeros inteiros apresentados e   : " << sum << endl;
    cin.get();
    cin.get();
    return 0;
}   
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Digite um numero inteiro entre 1 e 15: ";
    cin >> num;
    while (num <= 15)
    {
        cout << num << " ";
        num++;
    }
    cin.get();
    cin.get();
    return 0;
}
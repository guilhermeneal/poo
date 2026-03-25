#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    cout << "Numeros pares menores que " << n << ":\n";

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  
            cout << i << " ";
        }
    }

    cout << endl;
    cin.get();
    cin.get();
    return 0;
}
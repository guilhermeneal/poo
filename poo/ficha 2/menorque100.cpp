#include <iostream>
using namespace std;

int main() {
    int num;      
    int sum = 0;  
    int count = 0;
    float media= 0;

    
    while (sum < 500) {
        cout << "Introduza um numero menor que 100: ";
        cin >> num;

        if (num < 100) {
            sum += num;
            count++;
            cout << "Somatorio atual: " << sum << endl;
        } else {
            cout << "Numero invalido! Deve ser menor que 100." << endl;
        }
    }

    media= sum / count;
    cout << "A media dos valores validos introduzidos e: " << media << endl;

    cin.get(); 
    cin.get();
    return 0;
}
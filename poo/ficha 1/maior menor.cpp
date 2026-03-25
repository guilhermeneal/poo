#include <iostream>
using namespace std;
   main() {
        float a;
        cout << "Introduza o valor de A: ";
        cin >> a;

        float b;
        cout << "Introduza o valor de B: ";
        cin >> b;
        
        if (a > b){
         cout<< "O valor de " << a << " é maior que o valor de " << b << endl;}
        else if (a < b){
         cout<< "O valor de " << a << " é menor que o valor de " << b << endl;}
        else{
         cout<< "O valor de " << a << " é igual ao valor de " << b << endl;}
        return 0;
    }
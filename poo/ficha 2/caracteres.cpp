#include <iostream>
using namespace std;


int main() {
    char c;
    cout << "Introduza o primeiro caracter: ";
    cin >> c;

    if ((c >= 'a' and c <= 'z') or (c >= 'A' and c<= 'Z') ){
        cout << "o caracter que escreveu e uma letra." << endl;
    }
    else if ((c >= '0' and c <= '9')){
        cout << "O caracter que escreveu e um numero." << endl;
    }
    else{
        cout << "O caracter que escreveu e um simbolo." << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
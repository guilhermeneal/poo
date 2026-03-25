#include <iostream>
using namespace std;
int main() {
    int escolha1;
    cout << "Menu de opções:\n";
    cout << "1 - Opção 1\n";
    cout << "2 - Converter graus centígrados/fahrenheit\n";
    cout << "3 - Converter metros/quilómetros\n";
    cout << "4 - Sair\n";
    cin >> escolha1;
    switch (escolha1) {
        case 1:{
            cout << "Opção 1 selecionada.\n";
            cout << "sssdfg"<< endl;
            break;
        }
        case 2:{
            int temperatura;
            int fahrenheit;
            cout << "Introduza a temperatura em graus centígrados: ";
            cin >> temperatura;
            fahrenheit = (temperatura * 9 / 5) + 32;
            cout << "A temperatura em Fahrenheit é: " << fahrenheit << "°F\n";
            break;}
        case 3:{
            int metros;
            int kilometros;
            cout << "Introduza a distância em metros: ";
            cin >> metros;
            kilometros = metros / 1000;
            cout << "A distância em quilômetros é: " << kilometros << " km\n";
            break;}
        case 4:{
            cout << "A sair do programa.\n";
            break;
        }
        default:
            cout << "Opção inválida. Por favor, escolha uma opção válida.\n";
    }
    cin.get();
    cin.get();
    return 0;
}
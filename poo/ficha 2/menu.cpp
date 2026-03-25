#include <iostream>
using namespace std;
int main() {
    int escolha1;
    cout << "Menu de opcoes:\n";
    cout << "1 - Opcao 1\n";
    cout << "2 - Converter graus centigrados/fahrenheit\n";
    cout << "3 - Converter metros/quilometros\n";
    cout << "4 - Sair\n";
    cin >> escolha1;
    switch (escolha1) {
        case 1:{
            cout << "Opcao 1 selecionada.\n";
            cout << "sssdfg"<< endl;
            break;
        }
        case 2:{
            int temperatura;
            int fahrenheit;
            cout << "Introduza a temperatura em graus centigrados: ";
            cin >> temperatura;
            fahrenheit = (temperatura * 9 / 5) + 32;
            cout << "A temperatura em Fahrenheit e: " << fahrenheit << "°F\n";
            break;}
        case 3:{
            int metros;
            int kilometros;
            cout << "Introduza a distancia em metros: ";
            cin >> metros;
            kilometros = metros / 1000;
            cout << "A distancia em quilometros e: " << kilometros << " km\n";
            break;}
        case 4:{
            cout << "A sair do programa.\n";
            break;
        }
        default:
            cout << "Opcao invalida. Por favor, escolha uma opcao valida.\n";
    }
    cin.get();
    cin.get();
    return 0;
}
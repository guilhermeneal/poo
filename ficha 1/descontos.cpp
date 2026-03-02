#include <iostream>
using namespace std;

int main()
{

    string produto;
    float preco, desconto = 0, precoFinal;

    cout << "Digite o nome do produto: ";
    getline(cin, produto);

    cout << "Digite o preco: ";
    cin >> preco;

    // verificar o produto e definir o desconto
    if (produto == "Cereais Nestum")
        desconto = 20;
    else if (produto == "Sumo Tropical")
        desconto = 15;
    else if (produto == "Geleia Morango")
        desconto = 20;
    else if (produto == "Massa Italiana")
        desconto = 10;
    else if (produto == "Arroz Amarelo")
        desconto = 10;
    else if (produto == "Leite de Soja")
        desconto = 20;
    else if (produto == "Coca Cola Zero")
        desconto = 15;
    else if (produto == "Couve de Bruxelas")
        desconto = 5;
    else
    {
        cout << "Produto sem desconto." << endl;
    }

    precoFinal = preco - (preco * desconto / 100);

    cout << "Desconto: " << desconto << "%" << endl;
    cout << "Preco final: " << precoFinal << endl;

    cin.get();
    cin.get();
    return 0;
}
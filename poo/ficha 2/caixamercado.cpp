    #include <iostream>
    using namespace std;
    int main() {
        int quantidade;
        int preco;
        float precofinalsemdesconto;
        float precofinal;
        float desconto1 = 0.05;
        float desconto2 = 0.08;
        cout << "Digite a quantidade de produtos: ";
        cin >> quantidade;
        cout << "Digite o preço do produto: ";
        cin >> preco;
        if (quantidade >= 500 and quantidade < 1000) {
            precofinalsemdesconto = preco * quantidade;
            precofinal = precofinalsemdesconto * (1 - desconto1);
            cout << "O preco final sem desconto foi " << precofinalsemdesconto << " e o preco final com desconto foi " << precofinal << " tendo um desconto de 5%"<< endl;
    }else if (quantidade >= 1000) {
            precofinalsemdesconto = preco * quantidade;
            precofinal = precofinalsemdesconto * (1 - desconto2);
            cout << "O preco final sem desconto foi " << precofinalsemdesconto << " e o preco final com desconto foi " << precofinal << " tendo um desconto de 8%"<< endl;
    } else {
            precofinalsemdesconto = preco * quantidade;
            precofinal = precofinalsemdesconto;
            cout << "O preco final sem desconto foi " << precofinalsemdesconto << " e nao obteve desconto"<< endl;
    }
        cin.get();
        cin.get();
        return 0;
    }
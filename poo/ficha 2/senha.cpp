#include <iostream>
#include <string>
using namespace std;

int main()
{
    string senha = "password";
    string tentativa;
    cout << "Digite a senha: ";
    cin >> tentativa;
    if (tentativa == senha)
    {
        cout << "Acesso concedido!" << endl;
    }
    else
    {
        cout << "Acesso negado!" << endl;
        cout << "Uma dica para a sua senha e que ela tem " << senha.length() << " caracteres " << "e a sua primeira letra e a letra: " << senha[0] << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string vectors[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter vector " << i + 1 << ": ";
        cin >> vectors[i];
    }

    cout << "\nVectors ao contrario:\n";
    for (int i = 4; i >= 0; i--)
    {
        cout << vectors[i] << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
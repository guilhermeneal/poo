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
    cin.get();
    cin.get();
    return 0;
}
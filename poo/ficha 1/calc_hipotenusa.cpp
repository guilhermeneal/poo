#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main()
{
    float c1;

    cout << "Introduza o valor do primeiro cateto: " << endl;
    cin >> c1;

    float c2;
    cout << "Introduza o valor do segundo cateto: " << endl;
    cin >> c2;

    float h;
    h = sqrt((c1 * c1) + (c2 * c2));
    cout << "O valor da sua hipotenusa é: " << h << endl;
    cin.get();
    cin.get();
    return 0;
}
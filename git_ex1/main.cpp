#include <iostream>
#include "librairieSNIR.h"

using namespace std;

int main()
{
    int nombre;
    cout << "Entrez un nombre" << endl;
    cin>> nombre;
    int resultat = carrer ( nombre );
    cout<< resultat << endl;
    return 0;
}

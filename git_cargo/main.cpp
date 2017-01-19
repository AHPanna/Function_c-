#include <iostream>
#include "lib.h"
#include <cstring>



using namespace std;



int main()
{
        int A=1,B=2,C=3;
        int d;

        cout <<" \n Bonjour bienvenue au service Cargo P&M.\n Choisissez a votre choix : \n 1 = Particulier 100kg  pour EUR 300 fixe partout dans le monde.";
        cout <<"\n 2 = professionnel 1000kgs pour EUR 2500 fixe partout dans le monde. \n 3 = entreprise illimitée (5 euros/kg)+frais de transport + 20% de taxe."<<endl;

        cin >> d;

        if (d == 3){
        choix(d);
        }else if(d == 1 || d == 2) {
        choix2(d);
        }else {
        cout << "Erreur!!"<< endl;
        }




}

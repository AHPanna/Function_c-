#include <iostream>
#include "librerieSNIR.h"
using namespace std;

int main()
{
int a,b,c ;
  cout<< "entrez d\'abord l\'heures puis minutes puis secondes "<< endl;
  cin>> a;
  cin>> b;
  cin>> c;

    if(a>=0 && b>=0 && c>=0 && b<=60 && c<=60) {

        int d = sec1(a,b,c);
        cout << "le nombre en secondes est : "<< d << endl;


    }else {
    cout<< "Erreur Heures ou minutes ou secondes  ne sont pas correcte "<< endl;
    }


  return 0;
}

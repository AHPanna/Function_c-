#include <iostream>
#include "librairieSNIR.h"
using namespace std;

int main()
{
  float a,b;
  char c;
  cout<< " Entrer deux valeurs + le carctere de type d\'operation [/,*,-,+]"<< endl;
  cin >> a >> b >> c;

  if (c=='+'){
            cout << addition(a,b) << endl;
  }else if(c=='-'){
            cout << soustraction(a,b) << endl;
  }else if(c=='*'){
      cout << multiplication(a,b) << endl;
  }else if(c=='/'){

      cout << division(a,b) << endl;
  }else {
    cout<< "Erreur !!!"<< endl;
  }



  return 0;
}

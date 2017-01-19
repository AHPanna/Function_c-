
#include <iostream>
#include "librairieSNIR.h"

using namespace std;
double multiple (int a){

  if (a % 3 == 0 ){
    cout << "le nombre : "<< a << " est une multiple de 3" <<endl;


  }else {
    cout << "le nombre : "<< a << " n\'est pas une multiple de 3" <<endl;
  }
  if (  a % 6 == 0){

  cout << "le nombre : "<< a << " est divisible par  6" <<endl;
  cout << "Il est pair." << endl;

  }else {
  cout <<"le nombre :"<< a << "n\'est pas divisible par 6"<< endl;
  }

}

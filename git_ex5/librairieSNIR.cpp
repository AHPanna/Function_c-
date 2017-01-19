#include "librairieSNIR.h"
#include <iostream>
using namespace std;

void triangle(int rang){

 for (int j=0;j<rang;++j){
	 for(int k=rang-j;k>0;--k){
		 cout<<" ";}
	 for (int m=0;m<j;++m){{
	      cout<<"*"<<" ";}}
	 cout<<"   "<<endl<<"   ";}

}

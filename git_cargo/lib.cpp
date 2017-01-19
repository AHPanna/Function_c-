#include <iostream>
#include <cstring>
#include "lib.h"

using namespace std;

void choix(int d){
    int A=1,B=2,C=3,kilo,achat,e;


    if (d>3 || d<1 ){
        cout<< "Veuillez entrez 1 pour Particulier, 2 pour Professionel et 3 pour Entreprise."<< endl;



    }else if(d == C) { //entreprise
            cout<< "Vous etes Entreprise donc votre forfait est est de (EUR 5 / KG + Frais de Transport + 20% de taxe."<< endl;

            //demande combien de kilogramme
            cout<<"Combien de Kgs voulez-vous ? Rappel plus de 1000Kgs (EUR 5 /kg) !"<< endl;
            do {
            cin >> kilo;
            }while(1000>kilo);

            achat = kilo*5;
            cout << "\n Votre prix est de : "<< achat <<" EUR ."<< endl;
            cout << "Votre Destination : N'oublier pas nous sommes a DUBAI !\n"<< endl;
            cout<< " 1 = Miami = 20000 \n 2 = Hong Kong = 15000 \n 3 = Sydney = 30000 \n 4 = Agadir = 15000 \n 5 = Korea = 22000 \n 6 = Rotterdam = 25000 \n 7 = Los Angeles = 50000 \n 8 = Valencia = 15000 \n 9 = Singapoure = 10000"<< endl;
            cin>> e;
            if(e<1 || e>9)
            {
             cout<< "veuillez choisir votre destination de 1 a 9 \n  1 = Miami = 20000 \n 2 = Hong Kong = 15000 \n 3 = Sydney = 30000 \n 4 = Agadir = 15000 \n 5 = Korea = 22000 \n 6 = Rotterdam = 25000 \n 7 = Los Angeles = 50000 \n 8 = Valencia = 15000 \n 9 = Singapoure = 10000"<<endl;
            }else if (e == 1){

            //Pour Miami
            cout<< "vous avez choisit: Miami."<<endl;
            int tot1= (achat+ 20000)*0.2;
            int tot_1=tot1+(achat+20000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_1<< endl;

            //Pour Hong Kong
            }else if (e == 2){


            cout<< "vous avez choisit: Hong Kong."<<endl;
            int tot2= (achat+ 15000)*0.2;
            int tot_2=tot2+(achat+15000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_2<< endl;


            //Pour Sydney
            }else if (e == 3){

            cout<< "vous avez choisit: Sydney."<<endl;
            int tot3= (achat+ 30000)*0.2;
            int tot_3=tot3+(achat+30000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_3<< endl;

            //Pour Agadir
            }else if (e == 4){


            cout<< "vous avez choisit: Agadir."<<endl;
            int tot4= (achat+ 15000)*0.2;
            int tot_4=tot4+(achat+15000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_4<< endl;


            //Korea
            }else if (e == 5){


            cout<< "vous avez choisit: Korea."<<endl;
            int tot5= (achat+ 22000)*0.2;
            int tot_5=tot5+(achat+22000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_5<< endl;


            //Pour Rotterdam
            }else if (e == 6){

            cout<< "vous avez choisit: Rotterdam."<<endl;
            int tot6= (achat+ 25000)*0.2;
            int tot_6=tot6+(achat+25000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_6<< endl;


            //Pour Los Angeles
            }else if (e == 7){


             cout<< "vous avez choisit: Los Angeles."<<endl;
            int tot7= (achat+ 50000)*0.2;
            int tot_7=tot7+(achat+50000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_7<< endl;


            //Pour Valencia
            }else if (e == 8){


            cout<< "vous avez choisit: Valencia."<<endl;
            int tot8= (achat+ 15000)*0.2;
            int tot_8=tot8+(achat+15000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_8<< endl;

            //Pour Singapore
            }else if (e == 9) {

            cout<< "vous avez choisit: Hong Kong."<<endl;
            int tot9= (achat+ 10000)*0.2;
            int tot_9=tot9+(achat+10000);
            cout<< "votre prix total avec le taxe comprise est de :" <<tot_9<< endl;


            }else{
            cout<<"Vous n\'avez rien choisie."<< endl;
    }

}

}



void choix2(int d){
            int A=1,B=2,C=3,kilo,achat,e,tap,tap2;

            if (d>3 || d<1 ){
            cout<< "Veuillez entrez 1 pour Particulier, 2 pour Professionel et 3 pour Entreprise."<< endl;



            }else if(d == A) { // particulier
            cout<< "Vous etes Particulier donc votre forfait est EUR 300."<< endl;
            cout<< "\n |||||||||| Choissisez votre destination : |||||||||| \n"<<endl;
            cout<< " 1 = Miami  \n 2 = Hong Kong  \n 3 = Sydney \n 4 = Agadir \n 5 = Korea  \n 6 = Rotterdam  \n 7 = Los Angeles \n 8 = Valencia  \n 9 = Singapoure "<< endl;
            cin >> tap;
            int tot_1=300*0.2;
            int tot=tot_1+300;
            cout << "le prix avec le taxe est de : "<<tot<<endl;


            }else if(d == B) { //professionel
            cout<< "Vous etes Professionnel donc votre forfait est EUR 2500."<< endl;
            cout<< "\n |||||||||| Choissisez votre destination : |||||||||| \n"<<endl;
            cout<< " 1 = Miami  \n 2 = Hong Kong  \n 3 = Sydney \n 4 = Agadir \n 5 = Korea  \n 6 = Rotterdam  \n 7 = Los Angeles \n 8 = Valencia  \n 9 = Singapoure "<< endl;
            cin>>tap2;
            int tot_2=2500*0.2;
            int tot2=tot_2+2500;
            cout << "le prix avec le taxe est de : "<< tot2 <<endl;
            }else {
            cout<< "||||||||||  |||||||||| Erreur !!! ||||||||||  |||||||||| "<<endl;

}
}






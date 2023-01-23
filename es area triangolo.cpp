/*
    Name: Triangolo 
    Copyright: Colamonico-Chiarulli
    Author:Balenzano Fabio
    Date: 18/10/22 10:23
    Description: dati base e altezza del triangolo, calcola l'area del trinagolo
*/


//1. includo le librerie
#include<iostream>

//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili

float b=0;
float h=0;
float A=0;

//4. input
cout<<"inserisci la base";
cin>>b;
cout<<"inserisci l'altezza";
cin>>h;

//5. logica - operazioni - algoritmo
A=(b*h)/2;

//6. output
cout<<"il risultato dell'area è"<<A;

//7. ritorno al sistema operativo
return 0;

//8. fine del programma
}

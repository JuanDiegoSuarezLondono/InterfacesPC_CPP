#include<iostream>
#include<string>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
using namespace std;
int main()
{
int i=0, numerospares[49], acumulador=0, k=0;
char salir;
float modulo=0;
cout<<"Un cordial saludo señor usuario, este progama tiene el fin de realizar una sumatoria de todos los numeros pares, entre los intervalos [1,100]."<<endl<<"Por favor, Precione cualquier tecla para continuar.";
getch();
for(i=2;i<101;i++)
{
modulo=i%2;
if(modulo==0)
{
numerospares[k]=i;
k=k+1,
acumulador=acumulador+i;
}
}
system("cls");
cout<<"La sumatoria es "<<acumulador<<endl;
cout<<"Si desea saber cuales fueron los numeros presione (s) de lo contrario presione cualquier tecla para salir"<<endl;
cin>>salir;
if(salir=='s')
{
system("cls");
cout<<"Los numeros fueron: "<<endl;
i=0;
for(i=0;i<50;i++)
{
cout<<i+1<<") "<<numerospares[i]<<endl;
}
cout<<"Presione cualquier tecla para salir";
getch();
}
system("cls");
cout<<"Gracias por usar JDLondon progams.";
getch();
}

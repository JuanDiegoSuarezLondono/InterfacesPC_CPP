#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
int i, ventas[12], mayor=0, menor=0, r=0;
float promt=0, promedio=0;
char salir;
string mayorm, menorm, meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Dicembre"};
cout<<"Bienvenido señor empleado."<<endl<<"Por favor ingrese sus ventas en el mes correspondiente."<<endl;
for(i=0;i<=11;i++)
{
cout<<"Ventas del mes "<<meses[i]<<": ";
cin>>ventas[i];  
if(menor==0 && i==0)
{
menor=ventas[i];
menorm=meses[i];
}  
          
if(ventas[i]>mayor)
          {
          mayor=ventas[i];
          mayorm=meses[i];
          }
if(ventas[i]<menor)
          {
          
          menor=ventas[i];
          menorm=meses[i];
          } 
 
    
promedio=promedio+ventas[i];                 
}
do
{
system("cls");
promt=promedio/12;
for(i=0;i<=11;i++)
{
cout<<i+1<<") "<<meses[i]<<": "<<ventas[i];
cout<<endl;       
}
cout<<"El promedio de ventas es de "<<promt<<endl;
cout<<"El mayor mes de ventas es "<<mayorm<<" con:"<<mayor<<endl; 
cout<<"El menor mes de ventas es "<<menorm<<" con:"<<menor<<endl;
cout<<"Desea cambiar algun valor(v) o desea salir(s): ";
cin>>salir;
if (salir=='v')
{
cout<<"De cual mes desea cambiar (1-12):";
cin>>i;
if(i<1 || i>12)
{
cout<<"Error el caracter ingresado no es valido";
}
else
{promedio=promedio-ventas[i-1];
cout<<"Digite el nuevo valor: ";
cin>>ventas[i-1];
promedio=promedio+ventas[i-1];
menor=0;
for(i=0;i<=11;i++)
{ 
if(menor==0 && i==0)
{
menor=ventas[i];
menorm=meses[i];
}  
          
if(ventas[i]>mayor)
          {
          mayor=ventas[i];
          mayorm=meses[i];
          }
if(ventas[i]<menor)
          {
          
          menor=ventas[i];
          menorm=meses[i];
          } 
                 
}   
}
}
else
{
if(salir!='s')
{
cout<<"Error el caracter ingresado no es valido";
}
}
}
while(salir!='s');
cout<<"Gracias por usar JDLondon progams";
getch();
}

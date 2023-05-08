#include<iostream>
#include<string>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
using namespace std;
int main()
{
int ejes=0, placa[19], i=0, acumulado=0, numcarros=0, k=0;
char salir;
float modulo=0, precioeje=0, preciocarros[19];
do
{
acumulado=0;
numcarros=numcarros+1;
do
{
ejes=0;
system("cls");
cout<<"Por favor ingrese el numero de ejes de su vehiculo (2,3,4)."<<endl;
cin>>ejes;
if (ejes<2 || ejes>4)
{
system("cls");
cout<<"Error al ingresar el numero de ejes";
getch();
}
}
while(ejes<2 || ejes>4);
cout<<"Por favor ingrese el numero de la placa de su vehiculo"<<endl;
cin>>placa[i];
switch (ejes)
{
         case 2: precioeje=5000;
         break;
         
         case 3: precioeje=16000;
         break;
         
         case 4: precioeje=25000;
         break;
}
modulo=placa[i]%2;
if(modulo==0)
{
precioeje=precioeje-(precioeje*0.05);
 }
else
{
precioeje=precioeje-(precioeje*0.1);
}
preciocarros[i]=precioeje;
i=i+1,
cout<<"Ud debe pagar "<<precioeje<<", gracias por su preferencia."<<endl;
cout<<"Si desea saber el precio acumulado de los carros hasta ahora presione (c) o presione (n) para salir"<<endl;
cin>>salir;
system("cls");
if(salir=='c')
{
for(k=0;k<numcarros;k++)
{
cout<<k+1<<") "<<placa[k]<<": "<<preciocarros[k]<<endl;
acumulado=acumulado+preciocarros[k];
}
cout<<"Total: "<<acumulado;
getch();
}
}
while(salir!='n');
}

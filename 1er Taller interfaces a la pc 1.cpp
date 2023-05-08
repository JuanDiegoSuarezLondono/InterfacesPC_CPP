#include<iostream>
#include<string>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
using namespace std;
int main()
{
char seguir;
do
{
int digito=0, contador=0, contador2=0, i=1;
cout<<"Bienvenido, ingrese un digito"<<endl;
cin>>digito;
do
{
contador=digito%i;
if(contador==0)
{
contador2=contador2+1;
i=i+1;
}
else
{
i=i+1;
}
}
while ( contador2<3 && digito!=1 && digito>i );
system ("cls");
if(contador2>=3)
{
cout<<"El numero "<<digito<<" no es primo"<<endl;
}
else
{
cout<<"El numero "<<digito<<" es primo"<<endl;
}
cout<<"Desea seguir? si(s)/ no(n)"<<endl;
cin>>seguir;
system ("cls");
if(seguir!='s' && seguir!='n')
{
cout<<"Error de sintaxis";
seguir='s';
getch();
system ("cls");
}
}
while (seguir=='s');
system ("cls");
cout<<"Gracias por usar JDLondon progam";
getch();
}


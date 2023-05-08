#include<math.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;
void error( )
{
cout<<"!Error! Caracter ingresado no valido."<<endl; 
getch(); 
system("cls"); 
}

void mostrarnotas( int j, string nombre1[500], float notas[500])
{
int m=0, r=0;
float promedio=0;
for(m=0;m<j;m++)
{
cout<<m+1<<") "<<nombre1[r]<<" "<<nombre1[r+1]<<" "<<nombre1[r+2]<<endl;
cout<<"Prinera nota: "<<notas[r]<<endl;
cout<<"Segunda nota: "<<notas[r+1]<<endl;
cout<<"Tercera nota: "<<notas[r+2]<<endl;
promedio=(notas[r]+notas[r+1]+notas[r+2])/3;
cout<<"El promedio del estudiante es: "<<promedio<<endl<<endl;
r=r+3;
}
}

void aprobadosoreprobados( int j, string nombre1[500], float notas[500])
{
int m=0, r=0,k=0,a=0,s=0,h=0;
float promedio[500];
string aprobado[500],reprobado[500];
for(m=0;m<j;m++)
{
promedio[m]=(notas[r]+notas[r+1]+notas[r+2])/3;
if(promedio[m]<3)
{
for(s=0;s<3;s++)
{
reprobado[a]=nombre1[h];  
a++;
h++;
}
}
else
{
for(s=0;s<3;s++)
{
aprobado[k]=nombre1[h];  
h++;
k++;
}
}
r=r+3;
}
cout<<"Estudiantes que aprobaron la materia: "<<endl;
s=0;
for(m=0; m<k; m++)
{
s++;
cout<<s<<") "<<aprobado[m]<<" "<<aprobado[m+1]<<" "<<aprobado[m+2]<<endl;         
m=m+2;
}
cout<<endl;
cout<<"Estudiantes que reprobaron la materia: "<<endl;
s=0;
for(m=0; m<a; m++)
{
s++;
cout<<s<<") "<<reprobado[m]<<" "<<reprobado[m+1]<<" "<<reprobado[m+2]<<endl;         
m=m+2;
}
}




int main()
{
int i=0, k=0,j=0,p, numeroe=0, numeron=0;
char salir;
string nombre1[500];
float notas[500];
cout<<"Un corial saludo señor usuario"<<endl;
do
{

j++;
cout<<"Ingrese el primer nombre del estudiante: "<<endl;
cin>>nombre1[i];
i++;
cout<<"Ingrese el segundo nombre del estudiante: "<<endl;
cin>>nombre1[i];
i++;
cout<<"Ingrese el primer apellido del estudiante: "<<endl;
cin>>nombre1[i];
i++;
system("cls");
cout<<"Le recordamos que las notas son desde 0 hasta 5: "<<endl;
do
{
cout<<"Ingrese la primera nota del estudiante: "<<endl;
cin>>notas[k];
if(notas[k]<0 || notas[k]>5)
{
error();
}
}
while(notas[k]<0 || notas[k]>5);
k++;
do
{
cout<<"Ingrese la segunda nota del estudiante: "<<endl;
cin>>notas[k];
if(notas[k]<0 || notas[k]>5)
{
error();
}
}
while(notas[k]<0 || notas[k]>5);
k++;
do
{
cout<<"Ingrese la tercera nota del estudiante: "<<endl;
cin>>notas[k];
if(notas[k]<0 || notas[k]>5)
{
error();
}
}
while(notas[k]<0 || notas[k]>5);
system("cls"); 
k++;
notas[k]=(notas[k-1]+notas[k-2]+notas[k-3])/3;
do
{
do
{
numeroe=0;
numeron=0;
cout<<"Desea ingresar otro estudiante, consultar los datos hasta ahora o modificar alguna nota? si(s) / no(n)/ consultar(c) / nota(m)"<<endl;
cin>>salir;
if(salir!='n'&& salir!='s'&& salir!='c' && salir!='m')
{
 error();        
}
 system("cls"); 
}
while(salir!='n'&& salir!='s'&& salir!='c' &&  salir!='m' );
if(salir=='c')
{
mostrarnotas(j, nombre1, notas);
aprobadosoreprobados(j, nombre1, notas);
getch();
 system("cls"); 
}
if(salir=='m')
{
do
{
do
{
mostrarnotas(j, nombre1, notas);
cout<<"Ingrese el numero del estudiante: "<<endl;
cin>>numeroe;
if(numeroe<=0 || numeroe>j)
{
error();
}
}
while(numeroe<=0 || numeroe>j);
cout<<"Que nota desea modificar: "<<endl;
cin>>numeron;
if(numeron<=0 || numeron>3)
{
error();
}
}
while(numeron<=0 || numeron>3);
p=numeron;
numeroe=(numeroe-1)*3;
numeron=numeroe+(numeron-1);
do
{
system("cls");
cout<<"Estudiante: "<<nombre1[numeroe]<<" "<<nombre1[numeroe+1]<<" "<<nombre1[numeroe+2]<<endl;
cout<<"Nota numero "<<p<<": "<<notas[numeron]<<endl;
cout<<"Ingrese la nueva nota: "<<endl;
cin>>notas[numeron];
system("cls");
if(notas[numeron]<0 || notas[numeron]>5)
{
error();
}
else
{
mostrarnotas(j, nombre1, notas);
getch();
system("cls");
}
}
while(notas[numeron]<0 || notas[numeron]>5);
}
}
while(salir!='n'&& salir!='s');
}
while(salir!='n');
cout<<"Gracias por usar JDLondon progams ";

getch();  
}

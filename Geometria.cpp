#include<math.h>
#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
using namespace std;

long double areacirculo(char radodiam[],int j, long double rod[], int r)
{
long double arc=0;
if(radodiam[j]=='r')
{
arc=(pow(rod[r],2))*(3.14159265);
}
else
{
arc=((pow(rod[r],2))*(3.14159265))/4;
}
return(arc);
}


long double perimetrocirculo(char radodiam[],int j, long double rod[], int r)
{
long double perc=0;
if(radodiam[j]=='r')
{
perc=2*rod[r]*(3,14159265);
}
else
{
perc=rod[r]*(3,14159265);
}
return(perc);
}


long double trianga(long double altura[], long double ladost[], int k, int m)
{
long double arc=0;
m=m-1;
arc=(ladost[m]*altura[k])/2;
return(arc);
}


long double perimetro( long double ladost[], int m, int lados[], int i)
{
long double perc=0;
if(lados[i]==3)
{
m=m-3;
}
else
{
m=m-1;
}
int j;
for(j=0;j<lados[i];j++)
{
perc=perc+ladost[m];
if(lados[i]==3)
{
m++;
}
}
return(perc);
}

int main()
{
int lados[100], i=0,j=0, k, for1, m=0, for2,r=0,p,z,q,l, men, may;
char radodiam[100], salir;
long double rod[100], arc[100], perc[100], ladost[200], base[200], altura[200], mayor, menor;
cout<<"Un cordial saludo señor usuario"<<endl;
do
{
men=0;
may=0;
mayor=0;
menor=0;
l=0;
z=0;
p=0;
for2=0;
for1=0;
do
{
 cout<<"Por favor, ingrese el numero de lados de la figura gometrica."<<endl;
 cin>>lados[i];
 if(lados[i]<0 || lados[i]>5 || lados[i]==1 || lados[i]==2)
{
system("cls");
cout<<"''Error''.Lo sentimos, el numero de lados que ingreso no es valido.";
getch();
system("cls");
}
}
while(lados[i]<0 || lados[i]>5 || lados[i]==1 || lados[i]==2);
system("cls");
switch (lados[i])
{
         case 0:
do
{
cout<<"Desea ingresar el radio(r) o el diametro(d)?"<<endl;
cin>>radodiam[j];
if(radodiam[j]!='r' && radodiam[j]!='d')
{
system("cls");
cout<<"''Error''. Lo sentimos la opcion no es valida. Presione una tecla e intente de nuevo";
getch();
system("cls");
}
}
while(radodiam[j]!='r' && radodiam[j]!='d');
cout<<"Ingrese el valor"<<endl;
cin>>rod[r];

arc[j]=areacirculo(radodiam,j,rod,r);
perc[j]=perimetrocirculo(radodiam,j,rod,r);
cout<<"Circulo "<<endl;
cout<<"El area es: "<<arc[j]<<endl;
cout<<"El perimetro es: "<<perc[j];
getch();
r++;
system("cls");
         break;

         case 3: 
 cout<<"Ingrese el valor de la altura: ";
 cin>>altura[k];
 for(for1=1;for1<=3;for1++)
 {
 if(for1==1 || for1==2)
 {
 cout<<endl<<"Ingrese valor del lado "<<for1<<" : ";
 cin>>ladost[m];
 }
 else
 {
 cout<<endl<<"Ingrese valor de la base: ";
 cin>>ladost[m];
 }
 m++;
  }
arc[j]=trianga(altura,ladost,k,m);
perc[j]=perimetro( ladost, m, lados,i);
system("cls");
cout<<"Triangulo "<<endl;
cout<<"El area es: "<<arc[j]<<endl;
cout<<"El perimetro es: "<<perc[j];
getch();
system("cls");
k++;
         break;

         case 4: 
 
 cout<<"Ingrese valor de 1 lado : ";
 cin>>ladost[m];
 m++;
 arc[j]=pow(ladost[m-1],2);
 perc[j]=perimetro(ladost, m, lados,i);
system("cls");
cout<<"Cuadrado "<<endl;
cout<<"El area es: "<<arc[j]<<endl;
cout<<"El perimetro es: "<<perc[j];
getch();
system("cls");
         break;
         
         case 5:;
 cout<<"Ingrese valor de 1 lado : ";
 cin>>ladost[m];
  cout<<"Ingrese el valor de el apotema: ";
 cin>>altura[k];
 m++;
 perc[j]=perimetro(ladost, m, lados,i);
 arc[j]=(perc[j]*altura[k])/2;
system("cls");
cout<<"Pentagono regular "<<endl;
cout<<"El area es: "<<arc[j]<<endl;
cout<<"El perimetro es: "<<perc[j];
getch();
system("cls");
k++;
         break;
}
do
{
cout<<endl<<"Si desea agregar otra figura presione s(si) o n(no), si quiere consultar el total(t): ";
cin>>salir;
system("cls");
if(salir!='s' && salir!='n' && salir!='t')
{
cout<<"''Error''. Lo sentimos la opcion no es valida. Presione una tecla e intente de nuevo";
getch();
system("cls");
}
}
while(salir!='s' && salir!='n' && salir!='t');
if(salir=='t')
{
for(for2=0;for2<=i;for2++)                 
{
switch (lados[for2])
{
         case 0: 
              cout<<for2+1<<") "<<"Circulo "<<endl;
              if(radodiam[j]=='r')
              {
              cout<<"Diametro: "<<rod[p]*2<<endl;
              cout<<"Radio: "<<rod[p]<<endl;
              }
              else
              {
              cout<<"Diametro: "<<rod[p]<<endl;
              cout<<"Radio: "<<rod[p]/2<<endl;
              }
              cout<<"El area es: "<<arc[for2]<<endl;
              cout<<"El perimetro es: "<<perc[for2]<<endl<<endl;
              p++;
         break;
         
         case 3:
              cout<<for2+1<<") "<<"Triangulo "<<endl;
              cout<<"Altura: "<<altura[z]<<endl;
              for(q=0;q<3;q++)
              {
              if(q==1 || q==2)
              {
              cout<<"El lado "<<q+1<<" : "<<ladost[l]<<endl;
              l++;
               }
               else
               {
               cout<<"La base: "<<ladost[l]<<endl;
               l++;
               }
              }
              cout<<"El area es: "<<arc[for2]<<endl;
              cout<<"El perimetro es: "<<perc[for2]<<endl<<endl;
              z++;
         break;

         case 4:
         cout<<for2+1<<") "<<"Cuadrado "<<endl;
         cout<<"Los lados son: "<<ladost[l]<<endl;    
         cout<<"El area es: "<<arc[for2]<<endl;
         cout<<"El perimetro es: "<<perc[for2]<<endl<<endl;
         l++;
         break;

         case 5: 
         cout<<for2+1<<") "<<"Pentagono regular "<<endl;
         cout<<"El apotema es: "<<altura[z]<<endl;    
         cout<<"Los lados son: "<<ladost[l]<<endl;
         cout<<"El area es: "<<arc[for2]<<endl;
         cout<<"El perimetro es: "<<perc[for2]<<endl<<endl;
         z++;
         l++;
         break;
}
if(mayor<arc[for2])
{
may=for2+1;
mayor=arc[for2];
}
if(menor>arc[for2])
{
men=for2+1;
menor=arc[for2];
}
cout<<"El area mayor es: "<<mayor<<"   De la figura # "<<may<<endl;
cout<<"El area menor es: "<<mayor<<"   De la figura # "<<men<<endl;
getch();
system("cls");
}             
}
i++;
}
while(salir!='n');
    
}

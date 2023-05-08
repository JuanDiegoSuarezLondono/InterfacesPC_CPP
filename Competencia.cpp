#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<time.h>
using namespace std;

void mostrar(string deporte[5], string pais[25],string participante[25],string premio[25],int puesto[25])
{
int z=0,i=0,b=0,total[5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
system("cls");
for(z=0;z<5;z++)
{
cout<<"----------"<<deporte[z]<<"----------"<<endl;
for(i=0;i<5;i++)
{
cout<<i+1<<")"<<pais[b]<<endl;
cout<<"  "<<participante[b]<<endl;
cout<<"  "<<premio[b]<<endl;
cout<<"  Puesto "<<puesto[b]<<endl<<endl;
switch(puesto[b])
       {
       case 1:
            total[0][i]=total[0][i]+1;
       break;
       
       case 2:
            total[1][i]=total[1][i]+1;
       break;
       
       case 3:
            total[2][i]=total[2][i]+1;
       break;
       
       case 4:
            total[3][i]=total[3][i]+1;
       break;
       case 5:
            total[4][i]=total[4][i]+1;
       break;
       }
b++;

}
}
cout<<"***************************Total de medallas************************************"<<endl;
i=0;
for(i=0;i<5;i++)
{
cout<<i+1<<")"<<pais[i]<<endl;
cout<<"Oro: "<<total[0][i]<<endl;
cout<<"Plata:  "<<total[1][i]<<endl;
cout<<"Bronce: "<<total[2][i]<<endl;
cout<<"Rozas: "<<total[3][i]<<endl;
cout<<"Premio de consolacion: "<<total[4][i]<<endl<<endl;
}
cout<<"********************************************************************************"<<endl<<endl;
}







int main()
{

srand(time(NULL)); 

string nombres[4][5]={"Colombia","Alemania","USA","Japon","Tierra media",
              "Juan","Hitler","Lincoln","Kawabata","Frodo",
              "Oro","Plata","Bronce","Rozas","Premio de consolacion",
              "Pesas","Natacion","Atletismo","BMX","Esgrima"
              };
int puestos[5]={1,2,3,4,5},i,j[5],m=0,r[5],z=0,l=0,puesto[25],num=0,d=0,b=0,nuv;
char choise;
string deporte[5],pais[25],participante[25],premio[25],nuevo,guars;
do
{
system("cls");
r[m]=rand()%5;
i=0;
int f[5]={10,9,8,7,6};
if(r[0]!=r[1] && r[0]!=r[2] && r[0]!=r[3] && r[0]!=r[4] && r[1]!=r[2] && r[1]!=r[3] && r[1]!=r[4] && r[2]!=r[3] && r[2]!=r[4] && r[3]!=r[4])
{
cout<<"En el deporte "<<nombres[3][r[m]]<<" estos fueron los resultados: "<<endl;
deporte[m]=nombres[3][r[m]];
do
{
z=0;
j[i]=rand()%5;
if(j[0]!=j[1] && j[0]!=j[2] && j[0]!=j[3] && j[0]!=j[4] && j[1]!=j[2] && j[1]!=j[3] && j[1]!=j[4] && j[2]!=j[3] && j[2]!=j[4] && j[3]!=j[4])
{
cout<<"*) Pais "<<i+1<<":"<<nombres[0][j[i]]<<endl;
cout<<"   Participante:"<<nombres[1][j[i]]<<endl;
pais[l]=nombres[0][j[i]];
participante[l]=nombres[1][j[i]];
do
{
f[i]=rand()%5;
if(f[0]!=f[1] && f[0]!=f[2] && f[0]!=f[3] && f[0]!=f[4] && f[1]!=f[2] && f[1]!=f[3] && f[1]!=f[4] && f[2]!=f[3] && f[2]!=f[4] && f[3]!=f[4])
{
cout<<"   Ha ganado "<<nombres[2][f[i]]<<" en la posicion "<<puestos[f[i]]<<endl<<endl;
premio[l]=nombres[2][f[i]];
puesto[l]=puestos[f[i]];
l++;
z++;
i++;
}
}
while(z<1);
}
}
while(i<5);
m++;
getch();
}
}
while(m<5);
do
{
mostrar(deporte, pais,participante, premio,puesto);
cout<<"Desea cambiar de (a)concursante, (b)pais, (c)puesto o si desea salir(s)"<<endl;
cin>>choise;
switch(choise)
{
    case 'a':
    system("cls");
    for(m=0;m<5;m++)
    {
    cout<<m+1<<")"<<nombres[1][m]<<endl;
    }
    cout<<endl<<"Seleccione el concursante"<<endl;
    cin>>num;
    cout<<endl<<"Introdusca el nuevo nombre del concursante"<<endl;
    cin>>nuevo;
    for(z=0;z<25;z++)
    {
    if(nombres[1][num-1]==participante[z])
    {
    participante[z]=nuevo;
    }
    }
    nombres[1][num-1]=nuevo;
    break;
    
   case 'b':
   system("cls");
        for(m=0;m<5;m++)
    {
    cout<<m+1<<")"<<nombres[0][m]<<endl;
    }
      cout<<endl<<"Seleccione el pais"<<endl;
    cin>>num;
    cout<<endl<<"Introdusca el nuevo nombre del pais"<<endl;
    cin>>nuevo;
    for(z=0;z<25;z++)
    {
    if(nombres[0][num-1]==pais[z])
    {
    pais[z]=nuevo;
    }
    }
    nombres[0][num-1]=nuevo;
    break;
    
    case 'c':
    system("cls");
    for(m=0;m<5;m++)
    {
    cout<<m+1<<")"<<nombres[3][m]<<endl;
    }
    cout<<endl<<"Seleccione Deporte"<<endl;
    cin>>d;
   cout<<"----------"<<nombres[3][d-1]<<"----------"<<endl;
   i=0;
while(nombres[3][d-1]!=deporte[i])
{
i++;
}

 for(m=0;m<5;m++)
{
cout<<m+1<<")"<<pais[m+(i*5)]<<endl;
cout<<"  "<<participante[m+(i*5)]<<endl;
cout<<"  "<<premio[m+(i*5)]<<endl;
cout<<"  Puesto "<<puesto[m+(i*5)]<<endl<<endl;

}
    cout<<endl<<"Seleccione la posicion del pais"<<endl;
    cin>>num;
    cout<<"El nuevo puesto es? (recuerde que al ingresar el nuevo puesto, este y la anerior se intercambiaran automaticamente)"<<endl;
    cin>>nuv;
    z=-1;
    do
    {
    z++;
   if(nuv==puesto[(z)+(i*5)])
   {
   guars=premio[(z)+(i*5)];
   }
   }
   while(nuv!=puesto[(z)+(i*5)]);
   puesto[(z)+(i*5)]=puesto[(num-1)+(i*5)];
   premio[(z)+(i*5)]=premio[(num-1)+(i*5)];
   puesto[(num-1)+(i*5)]=nuv;
   premio[(num-1)+(i*5)]=guars;   
   
    break;
    
    case 's':
    system("cls");
    cout<<"Gracias por usar JDLondon progams.";
    break;
    default:
    system("cls");
    cout<<"Error el caracter ingresado no es valido";
    getch();
}
}
while(choise!='s');

getch();
}


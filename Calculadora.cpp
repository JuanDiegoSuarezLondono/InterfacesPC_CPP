#include<iostream>
#include<string>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
using namespace std;

void pantallainicio(int t)
{
system("CLS");
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"| JDLondon                                 |"<<endl;
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"|          ___   _   ___   __              |"<<endl;
 cout<<"|         |x^2| |^| |2v-| |v-|             |"<<endl;
 cout<<"|      ___   __   ___   ___   ___          |"<<endl;
 cout<<"|     |log| |In| |sin| |cos| |tan|         |"<<endl;
 cout<<"|    ____   ___   _____   _____   _____    |"<<endl;
 cout<<"|   |10^x| |e^x| |sin-1| |cos-1| |tan-1|   |"<<endl;
 cout<<"|           ___   ___   ____               |"<<endl; 
 cout<<"|          |d/c| |3v-| |x^-1|              |"<<endl;
 cout<<"|                                          |"<<endl;
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"|      _   _   _         ___   ______      |"<<endl;
 cout<<"|     |7| |8| |9|       |Off| |seguir|     |"<<endl;
 cout<<"|      _   _   _      _   _   _   _    _   |"<<endl;
 cout<<"|     |4| |5| |6|    |+| |-| |/| |*|  |%|  |"<<endl;
 cout<<"|      _   _   _      ___   __   ___   _   |"<<endl;
 cout<<"|     |1| |2| |3|    |(-)| |Pi| |ans| |.|  |"<<endl;
 cout<<"|                                          |"<<endl;
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"|                                          |"<<endl;
 if(t==0)
 {
 cout<<"  Presione cualquier tecla para iniciar"<<endl;        
 }
 else
 cout<<"  Desea realizar otra operacion?"<<endl; 
 }
void calculadora()
{
system("CLS");
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"| JDLondon                                 |"<<endl;
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"|           Z    X    C     V              |"<<endl;
 cout<<"|          ___   _   ___   __              |"<<endl;
 cout<<"|         |x^2| |^| |2v-| |v-|             |"<<endl;
 cout<<"|       B     N    M     L     K           |"<<endl;
 cout<<"|      ___   __   ___   ___   ___          |"<<endl;
 cout<<"|     |log| |In| |sin| |cos| |tan|         |"<<endl;
 cout<<"|      J     H      G       F       D      |"<<endl;
 cout<<"|    ____   ___   _____   _____   _____    |"<<endl;
 cout<<"|   |10^x| |e^x| |sin-1| |cos-1| |tan-1|   |"<<endl;
 cout<<"|            S     A      Q                |"<<endl;
 cout<<"|           ___   ___   ____               |"<<endl; 
 cout<<"|          |d/c| |3v-| |x^-1|              |"<<endl;
 cout<<"|                                          |"<<endl;
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"|                         O    Letra       |"<<endl;
 cout<<"|      _   _   _         ___   ______      |"<<endl;
 cout<<"|     |7| |8| |9|       |Off| |seguir|     |"<<endl;
 cout<<"|                     +   -   /   *    %   |"<<endl;
 cout<<"|      _   _   _      _   _   _   _    _   |"<<endl;
 cout<<"|     |4| |5| |6|    |+| |-| |/| |*|  |%|  |"<<endl;
 cout<<"|                      R   3.14   T    .   |"<<endl;
 cout<<"|      _   _   _      ___   __   ___   _   |"<<endl;
 cout<<"|     |1| |2| |3|    |(-)| |Pi| |ans| |.|  |"<<endl;
 cout<<"|                                          |"<<endl;
 cout<< " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
 cout<<"|                                          |"<<endl;
}

float segundo()
{
float y;
cout<<"  Digito2: ";
cin>>y;
calculadora();
return (y);
}

bool entero(float a, float i)
{
float n,m;
bool k;
k=false;
m=1;
n=a/i;
do
   {
   if(n==m)
     {
     k=true;
     }
    m=m+1; 
   }
while(k==false && m<a);
return(k);
}

float alados (float x)
{
x=pow(x,2);
calculadora();
return (x);
}

float elevado(float x)
{
float y;
y=segundo();
x=pow(x,y);
calculadora();
return(x);
}

float raizdos(float x)
{
x=sqrt(x);
calculadora();
return(x);
}

float raiz(float x)
{
float y;
y=segundo();
x=pow(x,(1/y));
calculadora();
return(x);
}

float log(float x)
{
x=log(x);
calculadora();
return(x);
}

float lognat(float x)
{
float m,e,l;
m=0;
l=0;
do
{
m=m+0.000001;
e=pow(2.71828182845904523536028747135266249775724709369995,m);
if(l==0)
  {
  cout<<"  Esta operacion puede tomar unos segundos favor esperar..."<<endl;
  }
l=1;
}
while(e<x);
calculadora();
return(m);
}

float seno(int x, float p)
{
x=sin(x*p/180);
calculadora();
return(x);
}

float coseno(int x, float p)
{
x=cos(x*p/180);
calculadora();
return(x);
}

float tangente(int x, float p)
{
x=tan(x*p/180);
calculadora();
return(x);
}

int expodies(int x)
{
x=pow(10,x);
calculadora();
return(x);
}

float expoe(float x)
{
x=pow( 2.71828182845904523536028747135266249775724709369995,x);
calculadora();
return(x);
}

float aseno(int x, float p)
{
x=asin(x*p/180);
calculadora();
return(x);
}

float acoseno(int x, float p)
{
x=acos(x*p/180);
calculadora();
return(x);
}

float atangente(int x, float p)
{
x=atan(x*p/180);
calculadora();
return(x);
}

float fraccion(float x)
{

float y,i,k,l;
i=2;
y=segundo();
do
{
k=entero(x,i);
l=entero(y,i);
if(k==true && l==true)
{
x=x/i;
y=y/i;
i=1;
}
i=i+1;
}
while(i<x && i<y);
calculadora();
cout<<"    "<<x<<endl;
cout<<"  _____"<<endl;
cout<<"    "<<y<<endl<<endl;
y=(x/y);
return(y);
}

float raiztres(float x)
{
x=pow(x,(0.3333333333));
calculadora();
return(x);
}

float elevadomenos(float x)
{
x=pow(x,(-1));
calculadora();
return(x);
}

float suma(float x)
{
float y;
y=segundo();
x=x+y;
calculadora();
return(x);
}

float resta(float x)
{
float y;
y=segundo();
x=x-y;
calculadora();
return(x);
}

float divicion(float x)
{
float y;
y=segundo();
x=(x/y);
calculadora();
return(x);
}

float multiplicacion(float x)
{
float y;
y=segundo();
x=x*y;
calculadora();
return(x);
}

float modulo(float x)
{
int y;
y=segundo();
x=((x/100)*y);
calculadora();
return(x);
}

float menos(float x)
{
float y;
y=x*(-1);
calculadora();
return(y);
}

float ansf(float ansn[],int i, float p)
{
float h,y;
char z;
int r;
system("cls");
cout<<"Lista de ans: "<<endl;
r=0;
for(h=0;h<i;h++)
{
cout<<"Digito "<<r+1<<" : "<<ansn[r]<<endl;
r=r+1;
}
h=i=0;
cout<<"Ingrese el numero del digito que desea"<<endl;
cin>>i;
h=ansn[i-1];
system("cls");
calculadora();
cout<<"  Digito "<<h<<endl;
cout<<"  Operacion: ";
cin>>z;
switch (z)
{
         case 'z': y=alados (h);
         break;

         case 'x': y=elevado(h);
         break;

         case 'c': y=raizdos(h);
         break;

         case 'v': y=raiz(h);
         break;

         case 'b': y=log(h);
         break;

         case 'n': y=lognat(h);
         break;

         case 'm': y=seno(h,p);
         break;
       
         case 'l': y=coseno(h,p);
         break;

         case 'k': y=tangente(h,p);
         break;
       
         case 'j': y=expodies(h);
         break;

         case 'h': y=expoe(h);
         break;

         case 'g': y=aseno(h,p);
         break;

         case 'f': y=acoseno(h,p);
         break;

         case 'd': y=atangente(h,p);
         break;

         case 's': y=fraccion(h);
         break;

         case 'a': y=raiztres(h);
         break;

         case 'q': y=elevadomenos(h);
         break;
       
         case '+': y=suma(h);
         break;
       
         case '-': y=resta(h);
         break;
       
         case '/': y=divicion(h);
         break;
       
         case '*': y=multiplicacion(h);
         break;
       
         case '%': y=modulo(h);
         break;
}
calculadora();
return(y);
}



float operacion(float x, float p,int i, float ansn[])
{
char u;
float y;
cout<<"  Operacion: ";
cin>>u;
switch (u)
{
         case 'z': y=alados (x);
         break;

         case 'x': y=elevado(x);
         break;

         case 'c': y=raizdos(x);
         break;

         case 'v': y=raiz(x);
         break;

         case 'b': y=log(x);
         break;

         case 'n': y=lognat(x);
         break;

         case 'm': y=seno(x,p);
         break;
       
         case 'l': y=coseno(x,p);
         break;

         case 'k': y=tangente(x,p);
         break;
       
         case 'j': y=expodies(x);
         break;

         case 'h': y=expoe(x);
         break;

         case 'g': y=aseno(x,p);
         break;

         case 'f': y=acoseno(x,p);
         break;

         case 'd': y=atangente(x,p);
         break;

         case 's': y=fraccion(x);
         break;

         case 'a': y=raiztres(x);
         break;

         case 'q': y=elevadomenos(x);
         break;
       
         case '+': y=suma(x);
         break;
       
         case '-': y=resta(x);
         break;
       
         case '/': y=divicion(x);
         break;
       
         case '*': y=multiplicacion(x);
         break;
       
         case '%': y=modulo(x);
         break;
       
         case 'r': y=menos(x);
         break;

         case 't': y=ansf(ansn,i,p);
         break;
}
return(y);
}

int main()
{
 cout<<"Cargando...";
 int i;
 float ansn[100];
 float x,y,t;
 const float p=3.14159265358979323846;
 char off;
 bool salir;
 salir=true;
 t=y=i=0;
 pantallainicio(t);
 getch();
 do
 {
t=1;
calculadora();
cout<<"  Digito: ";
cin>>x;
if(x<3.141 && x>=3.14)
{
x=p;
}
y=operacion(x,p,i,ansn);
if(y==(x*(-1)))
{
calculadora();
cout<<"  Digito: "<<y<<endl;
y=operacion(x,p,i,ansn);
}
cout<<y<<endl;
getch();
calculadora();
cout<<"Desea seguir? ";
cin>>off;
if(off=='o')
{
salir=false;
}
ansn[i]=y;
i=i+1;
}
while (salir==true);
system("cls");
cout<<"  #################      ############                 "<<endl;
cout<<"  #################      ###############              "<<endl;
cout<<"        #####            #####       #####            "<<endl;
cout<<"        #####            #####        #####           "<<endl;
cout<<"        #####            #####         #####          "<<endl;
cout<<"        #####            #####         #####          "<<endl;
cout<<"        #####            #####         #####          "<<endl;
cout<<"        #####            #####        #####           "<<endl;
cout<<"        #####            #####       #####            "<<endl;
cout<<"  ###########     ###    ###############              "<<endl;
cout<<"  ###########     ###    ############london           "<<endl;
cout<<"                                                      "<<endl;
cout<<"            Productions :3                            "<<endl;
getch();
 }

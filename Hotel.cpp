#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

using namespace std;


int llenasnum(int q, bool disponibilidad[4][90])
{
bool vacio; 
int i=0;
do
{
if(disponibilidad[0][i+q]!=false)
{
vacio=true;
}
else
{
vacio=false;
i++;
}
}
while (i<30 && vacio!= true);
return(i);
}

bool llenas(int q, bool disponibilidad[4][90])
{
bool vacio; 
int i=0;
do
{
if(disponibilidad[0][i+q]!=false)
{
vacio=true;
}
else
{
vacio=false;
i++;
}
}
while (i<30 && vacio!= true);
return(vacio);
}



int main()
{
string nombre [1][90], basenom[5][500]; // calificacion de la habitacion y nombre de quien la ocupa
string servicios[3]={"Servicio a la habitacion","Consumo de elementos", "Papper View"};//vector de servicios prestados
int matri[6][90],basematri[6][500],z,q,abitacion,g=0,i,o,m=0;// matriz de documento, acomodacion,numero de habitacio,costo por dia y costo total por cada habitacion disponible;variables extra
char salir,servicio;// caracter guardado
bool disponibilidad [4][90],respuesta;//condicion si o no de disponibilidad de habitacion
for(i=0;i<90;i++)
{
nombre[0][i]="Vacante";
basematri[4][i]=0;
disponibilidad[0][i]=true;
}
for(i=0;i<500;i++)
{
basenom[0][i]="Vacante";
}


do
{
system("cls");
z=0;

if(nombre[0][g]=="Vacante")
{
cout<<"---------------------------Costos--------------------------- "<<endl;
cout<<"*) Acomodacion:"<<endl;
cout<<"  Simple: 350.000"<<endl;
cout<<"  Doble: 600.000"<<endl;
cout<<"  Triple: 750.000"<<endl;
cout<<"*) Servicios:"<<endl;
cout<<"  Servicio a la habitacion: 20.000"<<endl;
cout<<"  Consumo de elementos: 35.000"<<endl;
cout<<"  Papper View: 10.000"<<endl;
cout<<"------------------------------------------------------------ "<<endl;
cout<<"Ingrese el nombre del inquilino: ";
cin>>nombre[0][g];
basenom[0][m]=nombre[0][g];
cout<<"Ingrese el documento: ";
cin>>matri[0][g];
basematri[0][m]=matri[0][g];
cout<<"Que clase de habitacion desea simple(1), doble(2), triple(3): ";
do
{                       
cin>>matri[1][g];
basematri[1][m]=matri[1][g];
if(matri[1][g]==1 || matri[1][g]==2  || matri[1][g]==3 )
{
z++;
}
else
{
 cout<<"Error, ingrese un dato que sea valido: ";
}
}
while(z==0);

switch(matri[1][g])
{
case 1 : 
q=0;

abitacion=llenasnum(q,disponibilidad);
respuesta=llenas(q,disponibilidad);
if(respuesta==true)
{
cout<<"La habitacion numero "<<abitacion+1<<" esta disponible."<<endl;
disponibilidad[0][abitacion]=false;
matri[2][g]=abitacion+1;
basematri[2][m]=matri[2][g];
matri[3][g]=350000;
}
else
{
cout<<"Lo sentimos. No hay habitaciones disponibles"<<endl;
getch();
}
break;

case 2:
q=30;
abitacion=llenasnum(q,disponibilidad);
respuesta=llenas(q,disponibilidad);
if(respuesta==true)
{
cout<<"La habitacion numero "<<abitacion+30<<" esta disponible."<<endl;
disponibilidad[0][abitacion+30]=false;
matri[2][g]=abitacion+30;
basematri[2][m]=matri[2][g];
matri[3][g]=600000;
}
else
{
cout<<"Lo sentimos. No hay habitaciones disponibles"<<endl;
getch();
}
break;

case 3:
q=60;
for(o=0;o<29;o++)
{
disponibilidad[0][o+60]=false;
}
abitacion=llenasnum(q,disponibilidad);
respuesta=llenas(q,disponibilidad);
if(respuesta==true)
{
cout<<endl<<"La habitacion numero "<<abitacion+61<<" esta disponible."<<endl;
disponibilidad[0][abitacion+60]=false; 
matri[2][g]=abitacion+61; 
basematri[2][m]=matri[2][g];
matri[3][g]=750000;
}
else
{
cout<<endl<<"Lo sentimos. No hay habitaciones disponibles"<<endl;
getch();
} 
break;

}
if(respuesta==true)
{
cout<<endl<<"Desea servicio a la habitacion si(s) o no(cualquier caracter)?"<<endl;
cin>>servicio;
if(servicio=='s')
{
disponibilidad [1][g]=true;
basenom[2][m]=servicios[0];
matri[3][g]=matri[3][g]+20000;
}
else
{
disponibilidad [1][g]=false;
basenom[2][m]="No ordeno servicio a la habitacion";
}
cout<<endl<<"Desea consumir los elementos predispuestos en la habitacion si(s) o no(cualquier caracter)?"<<endl;
cin>>servicio;
if(servicio=='s')
{
disponibilidad [2][g]=true;
basenom[3][m]=servicios[1];
matri[3][g]=matri[3][g]+35000;
}
else
{
disponibilidad [2][g]=false;
basenom[3][m]="No ordeno consumir los elementos predispuestos en la habitacion";
}
cout<<endl<<"Desea papper view si(s) o no(cualquier caracter)?"<<endl;
cin>>servicio;
if(servicio=='s')
{
disponibilidad [3][g]=true;
basenom[4][m]=servicios[2];
matri[3][g]=matri[3][g]+10000;
}
else
{
disponibilidad [3][g]=false;
basenom[4][m]="No ordeno papper view";
}

}
cout<<"El total por dia es: "<<matri[3][g]<<endl;
getch();
basematri[3][m]=matri[3][g];
m++;
g=0;
}

if(g==89 && nombre [0][89]!="Vacante")
{
cout<<"Lo sentimos el hotel no tiene cupo";
getch();
g=0;
}
g++;
do
{
system("cls");
cout<<"Desea agregar otro inquilino(a),si se va uno (b) o si desea finalizar(s)?"<<endl;
cin>>salir;
if(salir!='b' && salir!='a' && salir!='s')
{
system("cls");
cout<<"Lo sentimos. Caracter ingresado incorrecto.";
getch();
}
if(salir=='b')
{
for(i=0;i<90;i++)
{
if(nombre[0][i]!="Vacante")
{
cout<<i+1<<") "<<nombre[0][i]<<" se hospeda en la habitacion "<<matri[2][i]<<endl;
}
}
getch();
cout<<"Ingrese el numero del inquilino: ";
cin>>o;
o=o-1;
cout<<"Ingrese el numero de dias que se ha hospedado: ";
cin>>matri[4][o];
basematri[4][m-1]=matri[4][o];
matri[5][o]=matri[4][o]*matri[3][o];
basematri[5][m-1]=matri[5][o];
cout<<"El total a pagar es de: "<<matri[5][o]<<endl;
cout<<"Como califica el servicio (excelente,bueno,normal,malo,pesimo)?";
cin>>basenom[1][m-1];
disponibilidad [0][matri[2][o]]=true;
nombre[0][o]="Vacante";
matri[0][o]=0;
matri[1][o]=0;
matri[2][o]=0;
matri[5][o]=0;
getch();
}
}
while(salir!='a' && salir!='s');
}
while(salir!='s');
system("cls");
cout<<"El historial de huespedes es."<<endl;
for(i=0;i<m;i++)
{
cout<<1+i<<") "<<basenom[0][i]<<" con el documento "<<basematri[0][i];
if(basematri[4][i]==0)
{
cout<<" aun se sigue hospedado en la habitacion ";
}
else
{
cout<<" se hospedo "<<matri[4][i]<<" dias en la habitacion ";
}
switch(basematri[1][i])
{
case 1 : 
cout<<"simple ";
break;
case 2 : 
cout<<"doble ";
break;
case 3: 
cout<<"triple ";
break;
}
cout<<basematri[2][i]<<endl;
if(basematri[4][i]==0)
{
cout<<"Su total a pagar por dia fue "<<basematri[3][i]<<endl;
}
else
{
cout<<"Su total a pagar por dia fue "<<basematri[3][i]<<" y el total fue "<<basematri[5][i]<<endl;
}
cout<<"Los servicios fueron:"<<endl;
cout<<basenom[2][i]<<endl;
cout<<basenom[3][i]<<endl;
cout<<basenom[4][i]<<endl;
cout<<"Le dio una calificacion de "<<basenom[1][i]<<"."<<endl<<endl;
}
getch();
system("cls");
cout<<"Gracias por su preferensia."<<endl;
getch();
   
}

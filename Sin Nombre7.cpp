
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define H 100
int main(){


char contr[H],vec2[H];
int a;
char c;

printf("\nDime cual quieres q sea tu contraseña: ");
gets(contr);
system("cls");
a=1;
do {

system("cls");
printf("\n\t...:::Dame la contraseña:::...\n\n ");
a=0;

do
{
c=getch();
printf("*");
vec2[a]=c;
a++;
}
while(c!=13);

vec2[a-1]='\0';

if(strcmp(contr,vec2)==0)
{
printf("\n\n\tContraseña Correcta");
a=1;
}
else
{
printf("\n\n\tContraseña invalida");
a=0;
}
printf("\n\n");
system("pause");
}
while (a!=1);


}

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#define H 100
using namespace std;
int main()
{
srand(time(NULL));
int i=0;
unsigned long m;
m=time(NULL);
cout<<time(NULL)<<endl;
do
{
if(time(NULL)!=m)
{
cout<<time(NULL)<<endl;
m=time(NULL);
}
}
while(i==0);
getch();    
    
}

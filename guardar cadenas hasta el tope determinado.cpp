#include <stdio.h>
#include <conio.h>

int main()
{
char C[50];

fgets(C,50,stdin);
printf("%s", C);
getch();
return 0;
}

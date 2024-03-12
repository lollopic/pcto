#include <stdio.h>

int main()
{
int a;
int b;
printf("inserisci la tua etá\n");
scanf("%d", &a);
printf("inserisci etá minima per prendere la patente\n");
scanf("%d", &b);
if(a>=b)
{
printf("puoi prendere la patente\n");
}
else
{
printf("non puoi prendere la patente/n");
}
}
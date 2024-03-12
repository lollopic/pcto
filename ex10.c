#include <stdio.h>

int main()
{
int a;
int b;
printf("scegli due numeri\n");
scanf("%d %d", &a, &b);
if(a%b == 0)
{
printf("il primo é multiplo del secondo\n");
}
else
{
printf("non sono multipli\n");
}
}
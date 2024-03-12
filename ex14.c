#include <stdio.h>

int main()
{
int a;
int b;
int c;
printf("scegli le misure dei tre lati\n");
scanf("%d %d %d", &a, &b, &c);
if((a + b > c) && (b + c > a) && (a + c > b))
printf("possono essere le misure dei tre lati di un triangolo\n");
else
{
printf("non vanno bene come misure\n");
}
}
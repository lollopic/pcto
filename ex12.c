#include <stdio.h>

int main()
{
int a;
int b;
int c;
printf("scegli tre numeri\n");
scanf("%d %d %d", &a, &b, &c);
if (b - a == c - b)
{
printf("é una successione");
}
else
{
printf("non é una successione");
}
}
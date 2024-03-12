#include <stdio.h>

int main()
{
int a;
int b = 1969;
int c;
int d;
printf("dimmi la tua data di nascita\n");
scanf("%d", &a);
c = a - b;
d = b - a;
if(a == b)
{
printf("sei nato lo stesso anno\n");
}
else if(a > b)
{
printf("sei nato %d anni dopo\n", c);
}
else
{
printf("sei nato %d anni prima\n", d);
}
}
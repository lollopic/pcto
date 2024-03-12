#include <stdio.h>

int main()
{
int a;
int b;
int c;
printf("scegli le tre misure\n");
scanf("%d %d %d", &a, &b, &c);
if((a + b > c) && (b + c > a) && (a + c > b))
{
printf("il tuo é un triangolo\n");
if(a == b && a == c)
{
printf("é equilatero");
}
else if((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
{
printf("é isoscele\n");
}
else
{
printf("é scaleno\n");
}
}
else
{
printf("il tuo non puó essere un triangolo\n");
}
}
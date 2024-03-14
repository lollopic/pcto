#include <stdio.h>

int main()
{
int a;
int b;
printf("dimmi le coordinate del punto e ti diró a quale quadrante appartengono\n");
scanf("%d %d", &a, &b);
if((a > 0) && (b > 0))
{
    printf("appartiene al primo quadrante\n");
}
else if((a < 0) && (b > 0))
{
    printf("appartiene al secondo quadrante\n");
}
else if((a < 0) && (b < 0))
{
    printf("appartiene al terzo quadrante\n");
}
else if((a > 0) && (b < 0))
{
    printf("appartiene al quarto quadrante\n");
}
else if((a == 0) && (b == 0))
{
    printf("il punto é l'origine/n");
}
else if((a == 0) && (b != 0))
{
    printf("il punto appartiene all'asse y\n");
}
else if((a != 0) && (b == 0))
{
    printf("il punto appartiene all'asse x\n");
}
}
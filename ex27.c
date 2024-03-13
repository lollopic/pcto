#include <stdio.h>
void saluto()
{
    printf("ciao bro\n");
    printf("come stai\n");
}


int somma(int a, int b)
{
    return a + b;
}
int main()
{
int num1;
int num2;
int risultato;

saluto();
printf("dimmi due numeri e ti restituiró la somma\n");
scanf("%d %d", &num1, &num2);
risultato = somma(num1, num2);
printf("la somma é %d\n", risultato);
}
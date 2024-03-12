#include <stdio.h>

int main()
{
int num = 1;
int n_numeri = 0;
int somma = 0;
while(num >= 0)
{
    printf("inserisci un numero\n");
    scanf("%d", &num);
    n_numeri = n_numeri + 1;
    somma = somma + num;
    if(num >= 0)
    {
        printf("%f", (float)somma / n_numeri);
    }
}
}
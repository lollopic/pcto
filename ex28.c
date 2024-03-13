#include <stdio.h>
int somma(int a, int b)
{
    return a + b;
}

int moltiplicazione(int a, int b)
{
    return a * b;
}

int sottrazione(int a, int b)
{
    return a - b;
}

int main()
{
    int num1;
    int num2;
    int risultato1;
    int risultato2;
    int risultato3;
    printf("dammi i due numeri e ti daró la somma sottrazione e differenza\n");
    scanf("%d %d", &num1, &num2);
    risultato1 = somma(num1, num2); 
    risultato2 = moltiplicazione(num1, num2);
    risultato3 = sottrazione(num1, num2);
    printf("la somma é %d\n", risultato1);
    printf("la moltiplicazione é %d\n", risultato2);
    printf("la sottrazione é %d\n", risultato3);
}
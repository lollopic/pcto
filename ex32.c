#include <stdio.h>

float divisione(float a, float b)
{
    return a / b;
}

float moltiplicazione(float a, float b )
{
    return a * b;
}

float differenza(float a, float b)
{
    return a - b;
}

float addizione(float a, float b)
{
    return a + b;
}

int main()
{
    float a;
    float b;
    printf("dimmi due numeri\n");
    scanf("%f %f", &a, &b);
    int c[4] = {1, 2, 3, 4};
    int d;
    printf("scegli quale operazione eseguire\n0 addizione\n1 sottrazione\n2 moltiplicazione\n3 divisione\n");
    scanf("%d", &d);
    float risultato1 = addizione(a, b);
    float risultato2 = differenza(a, b);
    float risultato3 = moltiplicazione(a, b);
    float risultato4 = divisione(a, b);
    if(c[d] == 1)
        {
            printf("%f\n", risultato1);
        }
    else if(c[d] == 2)
        {
            printf("%f\n", risultato2);
        }
    else if(c[d] == 3)
        {
            printf("%f\n", risultato3);
        }
    else if(c[d == 4])
        {
            printf("%f\n", risultato4);
        }
}
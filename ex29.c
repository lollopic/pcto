#include <stdio.h>

int perimetro(int a, int b, int c)
{
    return a + b + c;
}

double sqrt(double x)
{
    if(x <= 0)
    {
        printf("errore\n");
    }
    else if((x == 0) || (x ==1))
    {
        return x;
    }
    else 
    {
        double a = 0.00001;
        while(x >= a * a)
        {
        a += 0.00001;
        }
        return a;
    }
}

int main()
{
int a;
int b;
int c;
int risultato1;
printf("dimmi tre lati di un triangolo e calcoleró perimetro ed area\n");
scanf("%d %d %d", &a, &b, &c);
risultato1 = perimetro(a, b, c);
int ris_perimetro = ((perimetro(a, b, c) / 2) * (perimetro(a, b, c) - a) * (perimetro(a, b, c) - b) * (perimetro(a, b, c) - c));
double risultato2 = sqrt(ris_perimetro);
printf("il perimetro é %d\n", risultato1);
printf("l'area é %f\n", risultato2);
}
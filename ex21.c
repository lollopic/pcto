#include <stdio.h>

int main()
{
int pezzi;
while(pezzi > 0)
{
    printf("inserisci il numero di pezzi\n");
    scanf("%d", &pezzi);
    if(pezzi > 0)
    {
        if(pezzi > 50)
        {
            printf("il prezzo é %f\n", (float)pezzi * 5 * 0.85);
        }
        else if(pezzi > 30)
        {
            printf("il prezzo é %f\n", (float)pezzi * 5 * 0.90);
        }
        else
        {
            printf("il prezzo é %d\n", 5 * pezzi);
        }
}
}
}
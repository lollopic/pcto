#include <stdio.h>

int main()
{
    int a[8];
    scanf("\n%d", &a[0]);
    scanf("\n%d", &a[1]);
    scanf("\n%d", &a[2]);
    scanf("\n%d", &a[3]);
    scanf("\n%d", &a[4]);
    scanf("\n%d", &a[5]);
    scanf("\n%d", &a[6]);
    scanf("\n%d", &a[7]);

    int b = 0;
    int tmp;
    int c;
    while(b <= 7)
    {
        c = b + 1;
        while(c <= 7)
        {
            if(a[b] > a[c])
            {
                tmp = a[c];
                a[c] = a[b];
                a[b] = tmp;
            }
            c++;
        }
        b++;
    }
    b = 0;
    printf("l'ordine é\n");
    while(b <= 7)
    {
        printf("%d\n", a[b]);
        b++;
    }
}
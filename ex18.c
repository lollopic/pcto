#include <stdio.h>

int main()
{
    int a;
    printf("scegli un numero\n");
    scanf("%d", &a);
    int f = 1;
    int n = a - 1;
    while(n > 1 && f == 1)
    {
        if(a%n == 0)
        {
            f = 0;
        }
        n--;
    }
    if(f==1)
    {
        printf("é un numero primo\n");
    }
    else
    {
        printf("non é un numero primo\n");
    }
}
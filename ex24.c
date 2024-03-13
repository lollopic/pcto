#include <stdio.h>

int main()
{
    int a[8] = {12, 65, 3, 98, 52, 658, 8, 61};
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
    while(b <= 7)
    {
        printf("%d\n", a[b]);
        b++;
    }
}
#include <stdio.h>

int main()
{
char a[4] = {56, 43, 9, 23};
int b = 0;
int c;
int temp;
while(b <= 3)
{
    c = b + 1;
    while(c <= 3)
    {
        if(a[b] > a[c])
        {
            a[b] = temp;
            a[c] = a[b];
            a[c] = temp;
            c++;
        }
    }
    b++;
}
}
#include <stdio.h>

int main()
{
int a;
printf("scegli un anno\n");
scanf("%d", &a);
if(a%400 == 0)
{
printf("é bisestile");
}
else if((a%4 == 0) && (a%100 != 0))
{
printf("é bisestile\n");
}
else
{
printf("non é bisestile");
}
}
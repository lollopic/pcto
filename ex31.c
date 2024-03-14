#include <stdio.h>

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

}
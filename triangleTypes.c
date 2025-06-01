#include<stdio.h>
int main()
{
    double a, b, c, swap;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(b>a && b>c)
    {
        swap = b;
        b=a;
        a = swap;
    }
    else if(c>b && c>a)
    {
        swap = c;
        c=a;
        a =swap;
    }
    if(a>0 && b>0 && c>0)
    {
        if(a>= b+c)
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else
        {
                if((a*a)== (b*b)+(c*c))
            {
            printf("TRIANGULO RETANGULO\n");
            }
            else if((a*a)> (b*b)+(c*c))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else if((a*a)< (b*b)+(c*c))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }

            if (a==b && b


                ==c)
            {
                printf("TRIANGULO EQUILATERO\n");
            }
            else if (a==b || b==c || a==c)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }

    return 0;
}

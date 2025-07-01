#include<stdio.h>

int main()
{
    int n,N, i;
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &n);
            if(n == 0)
        {
            printf("NULL\n");
        }
         else if(n%2 == 0 && n>0)
        {
            printf("EVEN POSITIVE\n");
        }
         else if(n%2 == 0 && n<0)
        {
            printf("EVEN NEGATIVE\n");
        }
         else if(n%2 != 0 && n>0)
        {
            printf("ODD POSITIVE\n");
        }
         else if(n%2 != 0 && n<0)
        {
            printf("ODD NEGATIVE\n");
        }
    }


    return 0;
}

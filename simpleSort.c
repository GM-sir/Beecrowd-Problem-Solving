#include<stdio.h>
int main()
{
    int n1, n2,n3, Small, medium, large;
    scanf("%d %d %d", &n1, &n2,&n3);

    if(n1<n2 && n1<n3 )
    {
        Small = n1;
        if(n2<n3)
        {
            medium = n2;
            large = n3;
        }
        else if(n3<n2)
        {
            medium = n3;
            large = n2;
        }

    }
    else if(n2<n1 && n2<n3 )
    {
        Small = n2;
        if(n1<n3)
        {
            medium = n1;
            large = n3;
        }
        else if(n3<n1)
        {

            medium = n3;
            large = n1;
        }
    }
    else if(n3<n1 && n3<n2 )
    {
        Small = n3;
        if(n1<n2)
        {
            medium = n1;
            large = n2;
        }
        else if(n2<n1)
        {
            medium = n2;
            large = n1;
        }
    }
    printf("%d\n",Small);
    printf("%d\n", medium);
    printf("%d\n\n", large);


    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;

}

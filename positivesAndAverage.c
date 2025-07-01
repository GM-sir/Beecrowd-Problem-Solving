#include<stdio.h>
int main()
{
    float x, ave, y = 0;
    int pos=0, i;
    for( i=0; i<6; i++)
    {
        scanf("%f", &x);

        if(x>0)
        {
            pos = pos + 1;
            y = y+x;
        }

    }
    ave = y / pos;

    printf("%d valores positivos\n", pos);
    printf("%.1f\n", ave);

    return 0;
}

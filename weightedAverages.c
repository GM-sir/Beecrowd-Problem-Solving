#include<stdio.h>
int main()
{
   int n,  i;
   float a, b, c, ave;
   scanf("%d", &n);

   for(i=0; i<n; i++)
   {
       scanf("%f %f %f", &a, &b, &c);
       ave = (2*a)+(3*b)+(5*c);

       printf("%.1f\n", ave);
   }
   return 0;
}


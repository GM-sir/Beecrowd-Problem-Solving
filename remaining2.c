#include<stdio.h>
int main()
{
   int n, N, i;
   scanf("%d", &n);

   for(i=2; i<100000; i = i+n)
   {
       printf("%d\n", i);
   }
   return 0;
}

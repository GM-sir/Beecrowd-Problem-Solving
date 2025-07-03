
#include<stdio.h>
int main()
{
   int n, N, i;
   scanf("%d", &n);

   for(i=1; i<=10; i++)
   {
       N = i*n;
       printf("%d x %d = %d\n", i, n,N);
   }
   return 0;
}

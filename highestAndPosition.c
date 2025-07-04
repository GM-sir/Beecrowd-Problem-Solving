
#include <stdio.h>

int main() {

   int n,i, y=1,z;

   for(i=1; i<=5; i++)
   {
       scanf("%d", &n);
       if(n>y)
       {
            y=n;
            z=i;

       }
   }

   printf("%d\n", y);
   printf("%d\n", z);

    return 0;
}

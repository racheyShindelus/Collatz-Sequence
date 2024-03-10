#include <stdio.h>

int getStart()  {
   int x = 0;
   while(x <= 0)  {
      printf("Enter the starting number: ");
      scanf("%ld, &x);
      if (x <= 0) {
         printf("The number should be a positive integer.");
      }
      else {  }
   }
   return x;
}

int nextCollatz(int x)  {
   if(x%2 == 0)   {  // EVEN
      return (x/2);
   )
   else  {
      return (3*x + 1);   // ODD
   }
}

int main()  {
   int x = getStart();
   int length = 1;
   printf("Collatz sequence: ");
   while(x != 1)  {
      printf(" %ld", x);
      x = nextCollatz(x);
      length++;
   }
   printf(" %ld\n", x);
   printf("Length: %ld", length);
   return 0;
}
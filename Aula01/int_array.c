#include <stdio.h>

int main(int argc, char const *argv[])
{
   int i;
   int primes[] = {2, 3, 5, 7, 11};
   printf("%lu, %lu\n", sizeof(primes), sizeof(int));

   for (i = 0; i < sizeof(primes)/sizeof(int); ++i)
   {
      printf("%d <--> %d\n", primes[i], *(primes + i));
   }
   return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_SIZE 64

void strlower(char* s, int len) {
   int i = 0;
   while(s[i] != '\n' && i<len) {
      if (s[i] >= 'A' && s[i] <= 'Z')
         s[i] -= 'A' - 'a';
      i++;
   }
}

int main(int argc, char const *argv[])
{
   char* p1 = (char*)malloc(MAX_STR_SIZE);

   strcpy(p1, argv[1]);
   strlower(p1, MAX_STR_SIZE);
   printf("p1 holds:%s\n", p1);

   return 0;
}
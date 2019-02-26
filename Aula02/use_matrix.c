#include <stdio.h>

#include "matrix.h"

int main(int argc, char const *argv[])
{
   matrix* u = matrix_new_random(4, 4, 1, 9);
   matrix* v = matrix_new_random(4, 4, 1, 9);
   matrix* g = matrix_add(u, v);
   matrix* h = matrix_sub(u, v);
   matrix* o = matrix_mul(u, v);
   matrix* p = matrix_trans(u);

   printf("u:\n");
   matrix_print(u);
   printf("v:\n");
   matrix_print(v);
   printf("u+v:\n");
   matrix_print(g);
   printf("u-v:\n");
   matrix_print(h);
   printf("u*v:\n");
   matrix_print(o);
   printf("u^-1:\n");
   matrix_print(p);

   return 0;
}

#include <stdio.h>

#include "list.h"

int main(int argc, char const *argv[])
{
   list* l = list_new_random(5, 10);
   list_print(l);
   printf("first: %d\tlast: %d\n", list_get_first(l), list_get_last(l));
   list_remove_first(l);
   list_remove_last(l);
   list_add_first(11, l);
   list_add_last(101, l);
   list_print(l);
   printf("size: %d\n", list_size(l));
   return 0;
}

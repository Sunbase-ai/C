#include <stdio.h>
#include <stdlib.h>

void reset_to_98(int *n){
   *n =98;
}

int main () {
   int n = 23;
   printf("n = %d\n", n);
   reset_to_98(&n);
   printf("n = %d", n);
   return 0;
}
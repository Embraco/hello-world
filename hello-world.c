#include <stdio.h>

int main(int argc, char *argv[]) {
   int i;
   
   printf("Oi, Mundo!\n\n");
   
   /* Loops and prints the parameters passed */
   printf("argc: %d\n", argc);
   
   for (i=0; i<argc; i++) {
      printf("argv[%d] valor: %s\n", i, argv[i]);
      printf("argv[%d] endereço: %d\n", i, *argv[i]);
   }      
   
   return 0;
}

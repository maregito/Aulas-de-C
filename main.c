/*
#include <stdio.h>

int main(void) {
  printf("=======\n\n\nHello World\n\n\n=======");
  return 0;
}*/

#include <stdio.h>
 int square (int x) /* Calcula o quadrado de x */
 {
 printf ("O quadrado e %d",(x*x));
 return(0);
 }
 int main ()
 {
 int num;
 printf ("Entre com um numero: ");
 scanf ("%d",&num);
 printf ("\n\n");
 square(num);
 return(0);
 }

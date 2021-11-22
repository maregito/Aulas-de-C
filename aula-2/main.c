#include <stdio.h>

int apela(){
printf ("Tome 5\n");
return (0);
}

int egilton(){
printf ("Peguei corona\n");
return (0);
}

int mago(){
printf ("Blu (o.O')\n");
return (0);
}

int mdm(){
printf ("Vem pro x1 otário\n");
return (0);
}

int lulivis(){
printf ("To dormindo cumpaça\n");
return (0);
}

int main ()
{
 int num;
 printf ("Escolha um programador de 0 a 4: ");
 scanf ("%d",&num);
 if (num==0)
 {
 printf ("\nVocê escolheu o programador Jeancion\n\n");
 apela();
 }
 if (num==1)
 {
 printf ("\nVocê escolheu o programador Egilton\n\n");
 egilton();
 }
 if (num==2)
 {
 printf ("\nVocê escolheu o programador Mago\n\n");
 mago();
 }
 if (num==3)
 {
 printf ("\nVocê escolheu o programador MDM\n\n");
 mdm();
 }
 if (num==4)
 {
 printf ("\nVocê escolheu o programador lulivis\n\n");
 lulivis();
 }
 if (num>4)
 {
 printf ("\nopção não encontrada.\n");
 main();
 }
 if (num<0)
 {
 printf ("\nopção não encontrada.\n");
 main();
 }
 return (0);
} 
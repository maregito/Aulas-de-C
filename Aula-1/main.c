// Ponteiros de Ponteiros
#include < stdio.h >
int a;
int *ptr_a1 = NULL; // declaração do ponteiro da variável (a)
int **ptr_a2 = NULL; // declaração do ponteiro para o ponteiro da variável (a)
int ***ptr_a3 = NULL; // declaração do ponteiro para o ponteiro para o ponteiro da variável (a)
void tecle_anything(); // protótipo da função
main()
{
while(1)
{
system("cls || clear");
printf("PONTEIROS DE PONTEIROS: 3 niveis de Ponteiros\n");
printf("Observe como os (*) mudam o conteudo apontado pelos Ponteiros.\n");
printf("Nao ha um limite pre-determinado para o uso de niveis, atraves dos (*).\n\n");
printf("Declaracoes de variaveis feitas nesse programa:\n");
printf("int a;\n");
printf("int *ptr_a1 = NULL;\n");
printf("int **ptr_a2 = NULL;\n");
printf("int ***ptr_a3 = NULL;\n");
printf("Vamos atribuir um valor para a variavel (a): ");scanf("%d", &a);
printf("Variavel (a): %d\n", a);
printf("Endereco de memoria da variavel (a): &a = %d\n", &a);
tecle_anything();
printf("\rE agora, escrevendo: ptr_a1 = &a; ... como fica ?\n");
ptr_a1 = &a; // // ponteiro para a variável (a)
tecle_anything();
printf("\nPRIMEIRO NIVEL DE PONTEIRO:\n");
printf("\rConteudo do Ponteiro = endereco de memoria da variavel (a): ptr_a1 = %d\n", ptr_a1);
printf("Conteudo da variavel apontada = variavel (a): *ptr_a1 = %d\n", *ptr_a1);
printf("O Ponteiro tambem tem o seu proprio endereco: &ptr_a1 = %d\n\n", &ptr_a1);
tecle_anything();
printf("\rE agora, escrevendo: ptr_a2 = &ptr_a1; ... como fica ?\n");
ptr_a2 = &ptr_a1; // // ponteiro para ponteiro para a variável (a)
tecle_anything();
printf("\nSEGUNDO NIVEL DE PONTEIRO:\n");
printf("\rConteudo do Ponteiro = endereco de memoria do Ponteiro ptr_a1: ptr_a2 = %d\n", ptr_a2);
printf("Observe o conteudo que \x82 apontado pelo Ponteiro = *ptr_a2 = %d\n", *ptr_a2);
printf("Observe o conteudo que \x82 apontado pelo Ponteiro = **ptr_a2 = %d\n", **ptr_a2);
printf("O Ponteiro tambem tem o seu proprio endereco: &ptr_a2 = %d\n\n", &ptr_a2);
tecle_anything();
printf("\rE agora, escrevendo: ptr_a3 = &ptr_a2; ... como fica ?\n");
ptr_a3 = &ptr_a2; // // ponteiro para ponteiro para ponteiro para a variável (a)
tecle_anything();
printf("\nTERCEIRO NIVEL DE PONTEIRO:\n");
printf("\rConteudo do Ponteiro = endereco de memoria do Ponteiro ptr_a2: ptr_a3 = %d\n", ptr_a3);
printf("Observe o conteudo que \x82 apontado pelo Ponteiro = *ptr_a3 = %d\n", *ptr_a3);
printf("Observe o conteudo que \x82 apontado pelo Ponteiro = **ptr_a3 = %d\n", **ptr_a3);
printf("Observe o conteudo que \x82 apontado pelo Ponteiro = ***ptr_a3 = %d\n", ***ptr_a3);
printf("O Ponteiro tambem tem o seu proprio endereco: &ptr_a3 = %d\n\n", &ptr_a3);
system("pause");
}
}
// função tecle_anything
void tecle_anything()
{
printf("Digite qualquer tecla para continuar...");getch();
printf("\r \r");
}
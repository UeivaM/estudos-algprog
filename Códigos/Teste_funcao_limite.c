#include <stdio.h>
void flimite()
{ // FUNÇÃO flimite
int limite;
int i;
scanf("%d", &limite);
for (i = limite; i; i--) // sai quando i é 0
printf("i = %d\n", i);
printf("Acabou agora que i = %d\n", i);
}
main()
{ // FUNÇÃO main (principal)

printf("Entre com o valor de inicio para a contagem regressiva: ");

flimite(); // chamada da FUNÇÃO flimite

}
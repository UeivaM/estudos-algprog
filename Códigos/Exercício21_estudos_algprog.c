#include <stdio.h>
int main ()
{
int tabuada;
int i;
int result;

printf ("\n Selecione uma tabuada para ver os resultados: ");
scanf("%d", &tabuada);

for (i = 1; i<=10; i++) 
{
    result = tabuada * i;

  printf("%d X %d = %d\n", tabuada, i, result);
  
}

printf ("\n FIM ");
return 0;

}

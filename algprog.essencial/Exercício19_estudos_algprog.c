#include <stdio.h>

int main()
{
  float maior;
  float menor; 
  float media; 
  float num; 
  float iteracao;
    
    iteracao = 1;
    maior = 0;
    menor = 1000;
    
    for (iteracao = 1; iteracao<=10; iteracao++)
    {
        printf("Entre com um valor: ");
        scanf ("%f", &num);
        
        if(num > maior)
        {
            maior = num;
        }
        
        if( num < menor)
        {
            menor = num;
        }
    }
    
    printf ("\n O maior número é %.2f", maior);
    printf ("\n O menor número é %.2f", menor);
    
    media = (maior + menor)/2;
    
    printf ("\n A média entre eles é de %.2f", media);

    return 0;
}


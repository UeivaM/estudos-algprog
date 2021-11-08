#include <stdio.h>

int main (){
    
    int numero, p, i;
    
    printf ("Insira um número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0){
        
        p = numero;
        
        printf("O numero %d é par", p);
    
    }
    
    else {
        
        i = numero;
        
        printf("O número %d é impar", i);
    }
    
    return 0;
}
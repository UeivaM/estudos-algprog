#include <stdio.h>

int main(){
    
    int a;
    float b, num;
    
    printf("Insira um número qualquer: ");
    scanf("%f", &num);
    
    if (num > 0){
        
        a = num;
        
        printf("O número %d é positivo", a);
        
    }
    
    else{
        b = num;
        
        printf("O número %.2f é negativo", b);
    }
    
    
    return 0;
    
}
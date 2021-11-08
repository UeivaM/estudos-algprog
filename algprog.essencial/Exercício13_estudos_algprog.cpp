#include <stdio.h>
#include <math.h>

int main (){
    float n1, n2, n3, n4, q1, q2, q3, q4;
    
    printf("Entre com um número: ");
    scanf("%f", &n1);
    
    printf("\nEntre com um número: ");
    scanf("%f", &n2);
    
    printf("\nEntre com um número: ");
    scanf("%f", &n3);
    
    printf("\nEntre com um número: ");
    scanf("%f", &n4);
    
    q1 = pow(n1,2);
    q2 = pow(n2,2);
    q3 = pow(n3,2);
    q4 = pow(n4,2);
    
    if (q3 >= 1000){
        
        printf("O quadrado de %.2f é %.2f", n3, q3);
    }
    
    else {
        
        printf("O quadrado de %.2f é %.2f", n1, q1);
        printf("O quadrado de %.2f é %.2f", n2, q2);
        printf("O quadrado de %.2f é %.2f", n3, q3);
        printf("O quadrado de %.2f é %.2f", n4, q4);
        
    }
    
    return 0;
}

#include <stdio.h>

int main()
{
    float altura, peso_ideal;
    char sexo;
    
    printf("Insira a sua altura \n");
    scanf("%f", &altura);
    
    printf("Insira o seu sexo m ou n \n");
    scanf("%s", &sexo);
    
    if (sexo == 'F' || sexo == 'f'){
        
        peso_ideal = (62.1 * altura) - 44.7;
        
        printf("O seu peso ideal é %.2f", peso_ideal);
        
    }
    
    else {
        
        peso_ideal = (72.7 * altura) - 58;
        
        printf("O seu peso ideal é %.2f", peso_ideal);
    }
    

    return 0;
}
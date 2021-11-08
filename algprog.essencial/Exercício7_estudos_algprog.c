#include <stdio.h>

int main() {
    

        float peso_ideal, altura;
    
    printf("Calculando o seu peso ideal");
    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    
    peso_ideal = (72.7 * altura) - 58;
    
    printf("O seu peso ideal é %.2f", peso_ideal);

    return 0;
}
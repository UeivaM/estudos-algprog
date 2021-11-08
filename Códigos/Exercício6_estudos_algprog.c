#include <stdio.h>

int main (){

   float salario_hora, salario;
   
   int horas_trabalhadas;
   
   printf("Quantas horas você trabalhou este mês?  ");
   scanf("%d", &horas_trabalhadas);
   
   printf("Quanto vale a sua hora?  ");
   scanf("%f", &salario_hora);
   
   
   salario = horas_trabalhadas * salario_hora;
   
   printf("O seu salário deste mês é de: %.2f", salario);
   
   return 0;

}
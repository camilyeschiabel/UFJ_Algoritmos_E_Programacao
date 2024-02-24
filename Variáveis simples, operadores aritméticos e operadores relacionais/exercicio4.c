#include <stdio.h>

int main (){

    printf("--------------------------------------------------------------\n");
    printf("EXERCÍCIO 4 - VARIÁVEIS SIMPLES, OPERADORES ARITMÉTICOS\nE OPERADORES RELACIONAIS.\n");
    printf("--------------------------------------------------------------\n\n");
    
    // DECLARAÇÃO DE VARIÁVEIS
    float temperatura_F = 0; 
    float temperatura_C = 0;
    
    printf("Por favor, informe a temperatura em graus Farenheit.\nR: ");
    scanf("%f", &temperatura_F);
    temperatura_C = (5.0/9.0)*(temperatura_F - 32);
    printf("Esta temperatura, em graus Centigrados, é igual a %.2f°C.", temperatura_C);

}
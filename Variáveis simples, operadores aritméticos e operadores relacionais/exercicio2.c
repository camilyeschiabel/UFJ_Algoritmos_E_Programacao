#include <stdio.h>

int main (){

    printf("--------------------------------------------------------------\n");
    printf("EXERCÍCIO 2 - VARIÁVEIS SIMPLES, OPERADORES ARITMÉTICOS\nE OPERADORES RELACIONAIS.\n");
    printf("--------------------------------------------------------------\n\n");
    
    // DECLARAÇÃO DAS VARIÁVEIS SIMPLES
    int A, B, C;
    A = 1;
    B = 2;
    C = 3;
    int aux = 0;  // VARIÁVEL AUXILIAR

    printf("Valores iniciais das variáveis: A = %d, B = %d e C = %d.\n\n", A, B, C);

    // PROCEDIMENTO DE TROCA SOLICITADO NA LETRA A: 
    aux = A;
    A = C;
    C = B;
    B = aux;

    printf("-> O procedimento solicitado na letra A foi realizado.\n");
    printf("Os valores das variáveis foram atualizados para: A = %d, B = %d e C = %d.\n\n", A, B, C);
    
    // PROCEDIMENTO SOLICITADO NA LETRA B 
    // P.S. Primeiro, voltei os valores anteriores das variáveis.
    A = 1;
    B = 2;
    C = 3;
    
    A = C;
    C = B;
    B = A - C;
    
    printf("-> O procedimento solicitado na letra B foi realizado.\n");
    printf("Os valores das variáveis foram atualizados para: A = %d, B = %d e C = %d.\n", A, B, C);
}
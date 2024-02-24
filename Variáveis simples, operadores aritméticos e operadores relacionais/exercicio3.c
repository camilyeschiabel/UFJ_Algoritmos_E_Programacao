#include <stdio.h>

int main (){

    printf("--------------------------------------------------------------\n");
    printf("EXERCÍCIO 3 - VARIÁVEIS SIMPLES, OPERADORES ARITMÉTICOS\nE OPERADORES RELACIONAIS.\n");
    printf("--------------------------------------------------------------\n\n");
    
    // DECLARAÇÃO DE VARIÁVEIS
    char nome[50];
    int idade = 0;
    int dias_de_vida = 0;
    
    printf("Por favor, informe seu nome.\nR: ");
    scanf("%s", nome);
    printf("Agora, informe sua idade (em anos).\nR: ");
    scanf("%d", &idade);

    // CALCULANDO A QUANTIDADE APROXIMADA DE DIAS DE VIDA
    dias_de_vida = idade * 365;
    dias_de_vida += idade/4; // P.S. Aqui, o código realiza a contagem de anos bissextos.
    
    printf("%s, você tem aproximadamente %d dias de vida!", nome, dias_de_vida);
  
    
    
    

}
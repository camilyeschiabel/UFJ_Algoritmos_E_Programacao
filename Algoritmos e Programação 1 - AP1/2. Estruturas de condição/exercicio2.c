/*
Exercício 2: Faça um programa que calcule o fatorial de um número. Use o laço while.
*/
#include <stdio.h>

int main()
{
    // DECLARAÇÃO DE VARIÁVEIS
    int n = 0;
    int i = 1;  // Variável utilizada para controle de laço
    int fatorial = 1;   
    
    printf("Digite um número:\n");
    scanf("%d", &n);
    i = n;
    
    while(i!=0){
        fatorial *= i;
        i--;
    }
    
    printf("O fatorial deste número é igual a %d.\n", fatorial);

    return 0;
}

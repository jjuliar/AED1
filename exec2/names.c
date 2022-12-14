#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    int i, x, qtdLetras, tamVetor, qtdPalavras = 1;
    char info = 's';

    printf("Olá! Insira a quantidade de caracteres necessária:");
    scanf("%d", &qtdLetras);
    getchar();
    char *nome = (char *)malloc(qtdLetras * sizeof(char));

    system("clear||cls");

    printf("Insira um nome:");

    for (i = 0; i < qtdLetras; i++){
        if (info != ' ')
        {
            info = getchar(); 
        }
        if (info == 10 || info == 0) 
        {
            info = 32; 
        }

        nome[i] = info;
    }



}
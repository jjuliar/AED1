#include <stdio.h>
#include <stdlib.h>

void main(){

    int sair = 0;
    int response = 0;
    int i;
    int count = 0;

    typedef struct 
    {
        char nome[30];
        int idade;
        float altura;
    }Pessoas;
    
    Pessoas *p;
    p = (Pessoas *)malloc(sizeof(Pessoas));
    
    while(!sair){
      
        printf("Ola! Selecione uma opcao: \n1. Inserir informacoes:\n2. Sair\n\n");
        scanf("%d", &response);
        switch (response)
        {
            case 1:
                printf("\nInsira os dados da pessoa:\n");
                printf("Nome:");
                scanf("%s", &p[count].nome);
                printf("\nIdade:");
                scanf("%d", &p[count].idade);
                printf("\nAltura:");
                scanf("%f", &p[count].altura);
                count++;
                p = (Pessoas *)realloc(p, sizeof(Pessoas) * (count + 1));
            break;
            
            case 2:
                for( i = 0; i < count; i++ ){
                    printf("Nome: %s\n", (p[i]).nome);
                    printf("Idade: %d\n", (p[i]).idade);
                    printf("Altura: %0.2f\n\n", (p[i]).altura);
                }
                free(p);
                sair = 1;
            break;
        }
    }
}
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
        int telefone;
    }Pessoas;
    
    Pessoas pessoa[10];

    int *pBuffer; 
    pBuffer = (int*)malloc(sizeof(int)* 4);
    //Sair
    pBuffer[0] = 0;
    //Response switch
    pBuffer[1] = 0;
    //Count (index)
    pBuffer[2] = 0;
    //Index for
    pBuffer[3] = 0;
    while (!pBuffer[0])
    {
        printf("Ola! Selecione uma opcao: \n1. Inserir informacoes:\n2. Sair\n\n");
        scanf("%d", &pBuffer[1]);
        switch (pBuffer[1])
        {
            case 1:
                printf("\nInsira os dados da pessoa:\n");
                printf("Nome:");
                scanf("%s", &pessoa[pBuffer[2]].nome);
                printf("\nIdade:");
                scanf("%d", &pessoa[pBuffer[2]].idade);
                printf("\nAltura:");
                scanf("%d", &pessoa[pBuffer[2]].telefone);
                pBuffer[2] += 1;
            break;
            
            case 2:
                for( pBuffer[3] = 0; pBuffer[3] < pBuffer[2]; pBuffer[3] += 1 ){
                    printf("Nome: %s\n", pessoa[pBuffer[3]].nome);
                    printf("Idade: %d\n", pessoa[pBuffer[3]].idade);
                    printf("Altura: %d\n\n", pessoa[pBuffer[3]].telefone);
                }
                pBuffer[0] = 1;
                free(pBuffer);
            break;
        }

    }
    
   
}
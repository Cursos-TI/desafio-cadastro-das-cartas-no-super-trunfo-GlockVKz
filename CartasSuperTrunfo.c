#include <stdio.h>

int main() {
    int codigo;
    int populacao;
    char nomecidade[50];

    printf("Qual o codigo da cidade?\n ");
    scanf("%d", &codigo); // Lê um número inteiro para o código da cidade

    printf("Quantas pessoas tem nessa cidade?\n ");
    scanf("%d", &populacao); // Lê o número de pessoas na cidade

    printf("Qual o nome da cidade?\n ");
    scanf("%s", &nomecidade);

    printf("Cidade com o nome %s tem o código %d tem %d pessoas .\n", nomecidade, codigo, populacao);

    }


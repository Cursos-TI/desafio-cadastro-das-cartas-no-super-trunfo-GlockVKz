#include <stdio.h>

int main() {
    int codigo;
    int populacao;
    int nomecidade;

    printf("Qual o codigo da cidade? ");
    scanf("%d", &codigo); // Lê um número inteiro para o código da cidade

    printf("Quantas pessoas tem nessa cidade? ");
    scanf("%d", &populacao); // Lê o número de pessoas na cidade

    printf("Qual o nome da cidade? ");
    scanf("%s", &nomecidade);

    printf("Cidade com o nome %s tem o código %d tem %d pessoas .\n", nomecidade, codigo, populacao);

    }


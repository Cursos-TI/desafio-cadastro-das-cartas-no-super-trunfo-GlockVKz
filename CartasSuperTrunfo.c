#include <stdio.h>

int main() {
    char estado[10]; //ok
    int codigo; //ok
    int numerodepontos; //ok
    int populacao; //ok
    int area; //ok
    int pib; //okk
    char nomecidade[50]; //ok

    printf("Qual o nome do estado?\n");
    scanf("%s", &estado); //nome do estado

    printf("Qual o codigo da cidade?\n");
    scanf("%d", &codigo); // numero do codigo

    printf("Qual o nome da cidade?\n");
    scanf("%s", &nomecidade); //nome da cidade

    printf("Quantas pessoas tem nessa cidade?\n");
    scanf("%d", &populacao); // Lê o número de pessoas na cidade

    printf("Qual a area da cidade?\n");
    scanf("%d", &area); // area da cidade

    printf("Qual o PIB da cidade?\n");
    scanf("%d", &pib); // PIB DA CIDADE

    printf("Qual Número de Pontos Turísticos da cidade?\n");
    scanf("%d", &numerodepontos); // pontos turisticos da cidade

    printf("carta1:\n Estado:%s\n",estado);

    }


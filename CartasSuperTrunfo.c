#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

   // Área para definição das variáveis para armazenar as propriedades das cidades

    // Declaração das variaveis da carta 1
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Declaração das variaveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;


   // Área para entrada de dados


    // Entrada de dados para a Carta 1

    printf( "\n=== Carta 1 ===\n: ");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomecidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o Pib: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos1);


    // Entrada de dados para a Carta 2

    printf( "\n=== Carta 2 ===\n: ");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o Pib: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos2);


  // Área para exibição dos dados da cidade

    // Exibição da Carta 1

    printf( "\n=== Carta 1 ===\n: ");

    printf("Digite o estado (letra de A a H): %c\n", estado1);
    printf("Digite o codigo da carta: %s\n", codigo1);
    printf("Digite o Nome da Cidade: %s\n", nomecidade1);
    printf("Digite a populacao: %d\n", populacao1);
    printf("Digite a area em km²: %f\n", area1);
    printf("Digite o Pib: %f\n", pib1);
    printf("Digite quantos pontos turisticos: %d\n", pontosturisticos1);printf("\n");



    // Exibição da Carta 2

    printf( "\n=== Carta 2 ===\n: ");

    printf("Digite o estado (letra de A a H): %c\n", estado2);
    printf("Digite o codigo da carta: %s\n", codigo2);
    printf("Digite o Nome da Cidade: %s\n", nomeCidade2);
    printf("Digite a populacao: %d\n", populacao2);
    printf("Digite a area em km²: %f\n", area2);
    printf("Digite o Pib: %f\n", pib2);
    printf("Digite quantos pontos turisticos: %d\n", pontosturisticos2);printf("\n");


    return 0;
}
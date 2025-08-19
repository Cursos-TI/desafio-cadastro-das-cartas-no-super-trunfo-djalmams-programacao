

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Djalma Moreira dos Santos

#include <stdio.h>

    #include <stdio.h>

int main() {
    int carta1 ;
    char estado1 ;
    char codigo1[14] ;
    char nome1[30] ;
    float populacao1 ;
    float area1 ;
    float pib1 ;
    int pt_turisticos1 ;

    int carta2 ;
    char estado2 ;
    char codigo2[4] ;
    char nome2[30] ;
    float populacao2 ;
    float area2 ;
    float pib2 ;
    int pt_turisticos2 ;

    printf("Desafio Cartas Super Trunfo!\n");

    // Primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Digite o número da carta: ");
    scanf("%d" , &carta1);
    printf("Digite a letra do estado: ");
    scanf(" %c" , &estado1);
    printf("Digite o código do estado: ");
    scanf("%s" , codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s" , nome1);
    printf("Digite o número de habitantes: ");
    scanf("%f" , &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f" , &area1);
    printf("Digite o pib: ");
    scanf("%f" , &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%i" , &pt_turisticos1);

    // Segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Digite o número da carta: ");
    scanf("%d" , &carta2);
    printf("Digite a letra do estado: ");
    scanf(" %c" , &estado2);
    printf("Digite o código do estado: ");
    scanf("%s" , codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s" , nome2);
    printf("Digite o número de habitantes: ");
    scanf("%f" , &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f" , &area2);
    printf("Digite o pib: ");
    scanf("%f" , &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%i" , &pt_turisticos2);

    // Exibição da primeira carta
    printf("\n===== Carta 1 =====\n");
    printf("O número da carta é: %i\n" , carta1);
    printf("O estado é: %c\n", estado1);
    printf("O código do estado é: %s\n", codigo1);
    printf("O nome da cidade é: %s\n" , nome1);
    printf("A populacão é: %.f\n" , populacao1);
    printf("A area é: %.f\n" , area1);
    printf("O pib é: %.f\n" , pib1);
    printf("A quantidade de pontos turísticos são: %d\n" , pt_turisticos1);

    // Exibição da segunda carta
    printf("\n===== Carta 2 =====\n");
    printf("O número da carta é: %i\n" , carta2);
    printf("O estado é: %c\n", estado2);
    printf("O código do estado é: %s\n", codigo2);
    printf("O nome da cidade é: %s\n" , nome2);
    printf("A populacão é: %.f\n" , populacao2);
    printf("A area é: %.f\n" , area2);
    printf("O pib é: %.f\n" , pib2);
    printf("A quantidade de pontos turísticos são: %d\n" , pt_turisticos2);

    return 0;
}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


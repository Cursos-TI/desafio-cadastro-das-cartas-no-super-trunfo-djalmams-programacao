#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Djalma Moreira dos Santos

int main() {
    int carta = 1;
    char estado = 'X';
    char codigo[3] = "X01";
    char nome[12] = "XXX";
    float populacao = 123;
    float area = 111.22;
    float pib = 677.22;
    int pt_turisticos = 43;
    printf("Desafio Cartas Super Trunfo!\n");
    printf("Digite o número da carta: ");
    scanf("%f" , &carta);
    printf("Digite a letra do estado: ");
    scanf("%s" , &estado);
    printf("Digite o código do estado: ");
    scanf("%s" , &codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s" , nome);
    printf("Digite o número de habitantes: ");
    scanf("%f" , &populacao);
    printf("Digite a área da cidade: ");
    scanf("%f" , &area);
    printf("Digite o pib: ");
    scanf("%f" , &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf(" %i" , &pt_turisticos);
    printf("O número da carta é: %i\n" , carta);
    printf("O estado é: %c\n", estado);
    printf("O código da cidade é: %s\n", codigo);
    printf("O nome da cidade é: %s\n" , nome);
    printf("A populacão é: %i\n:" , populacao);
    printf("A area é: %.2f\n" , area);
    printf("O pib é: %.2f\n" , pib);
    printf("A quantidade de pontos turísticos são: %d\n" , pt_turisticos);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

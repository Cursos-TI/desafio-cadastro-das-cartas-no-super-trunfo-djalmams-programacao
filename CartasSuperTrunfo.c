#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Djalma Moreira dos Santos

int main() {
    char estado = 'X';
    char cod_cidade[3] = "X01";
    char nome_cidade[12] =  "XXX";
    int populacao = 123;
    float area = 111.22;
    float pib = 677.22;
    int pt_turisticos = 43;
    printf("Desafio Cartas Super Trunfo!\n");
    printf("Carta 1:\n");
    printf("O estado é: %c\n", estado);
    printf("O código da cidade é: %s\n", cod_cidade);
    printf("O nome da cidade é: %s\n" , nome_cidade);
    printf("A populacão é: %d\n:" , populacao);
    printf("A area é: %f\n" , area);
    printf("O pib é:%f\n" , pib);
    printf("A quantidade de pontos turísticos são:%d\n" , pt_turisticos);
 
    
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

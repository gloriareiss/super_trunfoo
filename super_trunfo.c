#include <stdio.h>
#include <string.h>

// Definição das constantes
#define TAM_CODIGO 5
#define TAM_CIDADE 50

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;                    // Estado (A-H)
    char codigo[TAM_CODIGO];        // Código da carta (ex: A01)
    char cidade[TAM_CIDADE];        // Nome da cidade
    int populacao;                  // População
    float area;                     // Área em km²
    float pib;                      // PIB em bilhões de reais
    int pontosTuristicos;           // Número de pontos turísticos
} Carta;

int main() {
    // Declaração de duas cartas
    Carta cartas[2];

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &cartas[0].estado);
    printf("Código (Ex: A01): ");
    scanf("%s", cartas[0].codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cartas[0].cidade);  // Lê string com espaços
    printf("População: ");
    scanf("%d", &cartas[0].populacao);
    printf("Área (km²): ");
    scanf("%f", &cartas[0].area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cartas[0].pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &cartas[0].pontosTuristicos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &cartas[1].estado);
    printf("Código (Ex: A01): ");
    scanf("%s", cartas[1].codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cartas[1].cidade);
    printf("População: ");
    scanf("%d", &cartas[1].populacao);
    printf("Área (km²): ");
    scanf("%f", &cartas[1].area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cartas[1].pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &cartas[1].pontosTuristicos);

    // Impressão das informações das cartas
    printf("\nInformações das cartas cadastradas:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", cartas[0].estado);
    printf("Código: %s\n", cartas[0].codigo);
    printf("Nome da Cidade: %s\n", cartas[0].cidade);
    printf("População: %d\n", cartas[0].populacao);
    printf("Área: %.2f km²\n", cartas[0].area);
    printf("PIB: %.2f bilhões de reais\n", cartas[0].pib);
    printf("Número de Pontos Turísticos: %d\n", cartas[0].pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", cartas[1].estado);
    printf("Código: %s\n", cartas[1].codigo);
    printf("Nome da Cidade: %s\n", cartas[1].cidade);
    printf("População: %d\n", cartas[1].populacao);
    printf("Área: %.2f km²\n", cartas[1].area);
    printf("PIB: %.2f bilhões de reais\n", cartas[1].pib);
    printf("Número de Pontos Turísticos: %d\n", cartas[1].pontosTuristicos);

    return 0;
}
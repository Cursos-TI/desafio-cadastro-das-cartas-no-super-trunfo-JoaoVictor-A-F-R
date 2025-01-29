#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nm_cidade[30];
    int populacao, num_pt_turisticos;
    int cd_cidade = 0;
    float area;
    double pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da Cidade: ");
    scanf("%s", &nm_cidade);
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &num_pt_turisticos);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o pib: ");
    scanf("%lf", &pib);
    cd_cidade++;
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("======================================================\n");
    printf("Código da cidade: %d\nNome da cidade: %s\nPopulação: %d\nNumero de potos turísticos: %d\nÁrea da cidade: %.2f Km\nPIB: R$ %.2lf\n", cd_cidade, nm_cidade, populacao, num_pt_turisticos, area, pib);
    printf("======================================================\n");
    return 0;
}

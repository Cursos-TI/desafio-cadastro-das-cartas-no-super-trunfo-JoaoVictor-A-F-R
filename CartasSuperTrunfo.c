#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//variaveis globais
int rep = 1;
int cd_cidade[2];
char nm_cidade[2][50];
int populacao[2], num_pt_tur[2], area[2];
float pib[2];
double densidade_pop[2], pib_capita[2];

int Entrada_dados(int i){
    //Recebe os dados do usuário
    int comparar;
    printf("========== Carta %d ==========\n", i+1 );
    printf("Digite o nome da Cidade: ");
    fgets(nm_cidade[i], sizeof(nm_cidade[i]), stdin);

    printf("Digite a populacao: ");
    scanf("%d", &populacao[i]);
    getchar();

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &num_pt_tur[i]);
    getchar();

    printf("Digite a area da cidade: ");
    scanf("%d", &area[i]);
    getchar();

    printf("Digite o pib: ");
    scanf("%f", &pib[i]);
    getchar();

    Processamento_dados(i);

    if (rep)
    {
        rep = !rep;
        Entrada_dados(i+1);
    }
    
    printf("==============================\n");
    printf("Qual atributo comparar?");
    printf("1 - Populacao\n2- Numero de Pontos Turisticos\n3 - Area\n4 - PIB\n5 - Densidade Populacional\n6 - PIB per Capita");
    scanf("%d", &comparar);

    return 0;
}

int Processamento_dados(int i){
    //Realiza o calculo dos dados necesarios para exibição das cartas
    cd_cidade[i] += 1;
    densidade_pop[i] = (double) populacao[i] / area[i];
    pib_capita[i] = (double) pib[i] / populacao[i];
    return 0;
}

int Exibir_carta(int i) {
    printf("======================================================\n");
    printf("Código da Cidade: #0%d #0%d\n", cd_cidade[i], cd_cidade[i+1]);
    printf("Nome da Cidade: %s || %s", nm_cidade[i], nm_cidade[i+1]);
    printf("População: %d\n", populacao[i]);
    printf("Numero de pontos Turísticos: %d\n", num_pt_tur[i]);
    printf("Área da cidade: %d KM\n", area[i]);
    printf("PIB: %.2f R$\n", pib[i]);
    printf("Densidade Populacional: %.2lf HAB/KM²\n", densidade_pop[i]);
    printf("PIB per Capita: %.2lf R$\n", pib_capita[i]);
    printf("======================================================\n");

    return 0;
}

int main() {
    //carta c;
    int i = 0;
    Entrada_dados(i);
    Exibir_carta(i);
    return 0;
}
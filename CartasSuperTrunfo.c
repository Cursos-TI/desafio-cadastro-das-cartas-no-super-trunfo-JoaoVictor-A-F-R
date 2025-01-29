#include <stdio.h>
//Estrutura das cartas
char nm_cidade[50];
int populacao, num_pt_turisticos;
int cd_cidade = 0;
float area;
double pib, densidade_pop, pib_capita;

int entrada_dados(){
    //Recebe os dados do usuário
    printf("Digite o nome da Cidade: ");
    fgets(nm_cidade, sizeof(nm_cidade), stdin);
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &num_pt_turisticos);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o pib: ");
    scanf("%lf", &pib);

    return 0;
}

int processamento_dados(){
    //Realiza o calculo dos dados necesarios para exibição das cartas
    cd_cidade++;
    densidade_pop = (double) populacao / area;
    pib_capita = (double) pib / populacao;

    return 0;
}

int exibir_carta(){
    //Exibi as cartas de acordo com as informações dadas pelo usuario
    printf("======================================================\n");
    printf("Código da cidade: %d\nNome da cidade: %s\nPopulação: %d\nNumero de potos turísticos: %d\nÁrea da cidade: %.2f KM\nPIB: R$ %.2lf\nDensidade Populacional: %.2lf HAB/KM²\nPIB per Capita: R$ %.2lf\n", cd_cidade, nm_cidade, populacao, num_pt_turisticos, area, pib, densidade_pop, pib_capita);
    printf("======================================================\n");

    return 0;
}

int main() {

    entrada_dados();
    processamento_dados();
    exibir_carta();

    return 0;
}

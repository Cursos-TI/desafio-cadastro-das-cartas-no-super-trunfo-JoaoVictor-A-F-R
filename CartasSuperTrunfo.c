#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//variaveis globais
int rep = 1;
int cd_cidade[2];
char nm_cidade[2][50];
int populacao[2], num_pt_tur[2], area[2], densidade_pop[2], trunfo[2];
float pib[2];
double pib_capita[2];

int Entrada_dados(int i){
    //Recebe os dados do usuário
    int comparar;
    printf("============== Carta %d ==============\n", i+1 );
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
    else
    {
        printf("==============================\n");
        printf("1 - Populacao\n2- Numero de Pontos Turisticos\n3 - Area\n4 - PIB\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
        printf("Qual atributo comparar? ");
        scanf("%d", &comparar);
        getchar();

        Exibir_carta(0, comparar);
    }

    return 0;
}

int Processamento_dados(int i){
    //Realiza o calculo dos dados necesarios para exibição das cartas
    cd_cidade[i] += 1;
    densidade_pop[i] = populacao[i] / area[i];
    pib_capita[i] = (double) pib[i] / populacao[i];
    trunfo[i] = (int) populacao[i] + area[i] + pib[i] + pib_capita[i] + densidade_pop[i] + num_pt_tur[i];
    return 0;
}

int Comparacao(int comparar){
    int i = 0;
    return 0;
}

int Exibir_carta(int i, int comparar) {
    //int tamanho = strlen(nm_cidade[i]);
    //nm_cidade[i][tamanho - 1] = "";
    printf("===============================================================================\n");
    printf("Código da Cidade: #0%d || #0%d\n", cd_cidade[i], cd_cidade[i+1]);
    printf("Nome da Cidade: %s || %s", nm_cidade[i], nm_cidade[i+1]);
    switch (comparar)
    {
    case 1:
        if (populacao[i] > populacao[i + 1]){
            printf("População: %d (+) || %d\n", populacao[i], populacao[i+1]);
        }
        else{
            printf("População: %d || %d (+)\n", populacao[i], populacao[i+1]);
        }
        printf("Numero de pontos Turísticos: %d || %d\n", num_pt_tur[i], num_pt_tur[i + 1]);
        printf("Área da cidade: %d KM || %d KM\n", area[i], area[i + 1]);
        printf("PIB: %.2f R$ || %.2f R$\n", pib[i], pib[i + 1]);
        printf("Densidade Populacional: %.d HAB/KM² || %.d HAB/KM²\n", densidade_pop[i], densidade_pop[i + 1]);
        printf("PIB per Capita: %.2lf R$ || %.2lf R$\n", pib_capita[i], pib_capita[i + 1]);
        printf("Super Poder: %d || %d \n", trunfo[i], trunfo[i + 1]);
        break;
    case 2:
        printf("População: %d || %d\n",populacao[i], populacao[i + 1]);
        if (num_pt_tur[i] > num_pt_tur[i + 1]){
            printf("Numero de pontos Turísticos: %d (+) || %d\n", num_pt_tur[i], num_pt_tur[i + 1]);
        }else{
            printf("Numero de pontos Turísticos: %d || %d (+)\n", num_pt_tur[i], num_pt_tur[i + 1]);
        }
        printf("Área da cidade: %d KM || %d KM\n", area[i], area[i + 1]);
        printf("PIB: %.2f R$ || %.2f R$\n", pib[i], pib[i + 1]);
        printf("Densidade Populacional: %.d HAB/KM² || %.d HAB/KM²\n", densidade_pop[i], densidade_pop[i + 1]);
        printf("PIB per Capita: %.2lf R$ || %.2lf R$\n", pib_capita[i], pib_capita[i + 1]);
        printf("Super Poder: %d || %d \n", trunfo[i], trunfo[i + 1]);
        break;
    
    case 3:
        printf("População: %d || %d\n",populacao[i], populacao[i + 1]);
        printf("Numero de pontos Turísticos: %d || %d\n", num_pt_tur[i], num_pt_tur[i + 1]);
        if (area[i] > area[i + 1])
        {
            printf("Área da cidade: %d KM (+) || %d KM\n", area[i], area[i + 1]);
        }else{
            printf("Área da cidade: %d KM || %d KM (+) \n", area[i], area[i + 1]);
        }
        printf("PIB: %.2f R$ || %.2f R$\n", pib[i], pib[i + 1]);
        printf("Densidade Populacional: %.d HAB/KM² || %.d HAB/KM²\n", densidade_pop[i], densidade_pop[i + 1]);
        printf("PIB per Capita: %.2lf R$ || %.2lf R$\n", pib_capita[i], pib_capita[i + 1]);
        printf("Super Poder: %d || %d \n", trunfo[i], trunfo[i + 1]);
        break;

    case 4:
        printf("População: %d || %d\n",populacao[i], populacao[i + 1]);
        printf("Numero de pontos Turísticos: %d || %d\n", num_pt_tur[i], num_pt_tur[i + 1]);
        printf("Área da cidade: %d KM || %d KM\n", area[i], area[i + 1]);
        if (pib[i] > pib[i + 1])
        {
            printf("PIB: %.2f R$ (+) || %.2f R$\n", pib[i], pib[i + 1]);
        }else{
            printf("PIB: %.2f R$ || %.2f R$ (+)\n", pib[i], pib[i + 1]);
        }
        printf("Densidade Populacional: %.d HAB/KM² || %.d HAB/KM²\n", densidade_pop[i], densidade_pop[i + 1]);
        printf("PIB per Capita: %.2lf R$ || %.2lf R$\n", pib_capita[i], pib_capita[i + 1]);
        printf("Super Poder: %d || %d \n", trunfo[i], trunfo[i + 1]);
        break;
    case 5:
        printf("População: %d || %d\n",populacao[i], populacao[i + 1]);
        printf("Numero de pontos Turísticos: %d || %d\n", num_pt_tur[i], num_pt_tur[i + 1]);
        printf("Área da cidade: %d KM || %d KM\n", area[i], area[i + 1]);
        printf("PIB: %.2f R$ || %.2f R$\n", pib[i], pib[i + 1]);
        if (densidade_pop[i] > densidade_pop[i + 1])
        {
            printf("Densidade Populacional: %.d HAB/KM² (+) || %.d HAB/KM²\n", densidade_pop[i], densidade_pop[i + 1]);
        }else{
            printf("Densidade Populacional: %.d HAB/KM² || %.d HAB/KM² (+)\n", densidade_pop[i], densidade_pop[i + 1]);
        }
        printf("PIB per Capita: %.2lf R$ || %.2lf R$\n", pib_capita[i], pib_capita[i + 1]);
        printf("Super Poder: %d || %d \n", trunfo[i], trunfo[i + 1]);
        break;
    
    case 6:
        printf("População: %d || %d\n",populacao[i], populacao[i + 1]);
        printf("Numero de pontos Turísticos: %d || %d\n", num_pt_tur[i], num_pt_tur[i + 1]);
        printf("Área da cidade: %d KM || %d KM\n", area[i], area[i + 1]);
        printf("PIB: %.2f R$ || %.2f R$\n", pib[i], pib[i + 1]);
        printf("Densidade Populacional: %.d HAB/KM² || %.d HAB/KM²\n", densidade_pop[i], densidade_pop[i + 1]);
        if (pib_capita[i] > pib_capita[i + 1])
        {
            printf("PIB per Capita: %.2lf R$ (+) || %.2lf R$\n", pib_capita[i], pib_capita[i + 1]);
        }else{
            printf("PIB per Capita: %.2lf R$ || %.2lf R$ (+)\n", pib_capita[i], pib_capita[i + 1]);
        }
        printf("Super Poder: %d || %d \n", trunfo[i], trunfo[i + 1]);
        break;
    
    case 7:
        printf("População: %d || %d\n",populacao[i], populacao[i + 1]);
        printf("Numero de pontos Turísticos: %d || %d\n", num_pt_tur[i], num_pt_tur[i + 1]);
        printf("Área da cidade: %d KM || %d KM\n", area[i], area[i + 1]);
        printf("PIB: %.2f R$ || %.2f R$\n", pib[i], pib[i + 1]);
        printf("Densidade Populacional: %.d HAB/KM² || %.d HAB/KM²\n", densidade_pop[i], densidade_pop[i + 1]);
        printf("PIB per Capita: %.2lf R$ || %.2lf R$\n", pib_capita[i], pib_capita[i + 1]);
        if(trunfo[i] > trunfo[i + 1])
        {
            printf("Super Poder: %d (+) || %d\n", trunfo[i], trunfo[i + 1]);
        }else{
            printf("Super Poder: %d || %d (+)\n", trunfo[i], trunfo[i + 1]);
        }
        break;
    }
    printf("===============================================================================\n");

    return 0;
}

int main() {
    //carta c;
    int i = 0;
    Entrada_dados(i);
    //Exibir_carta(i);
    return 0;
}
//
// Created by Guilherme on 06/07/2025.
//
#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char NomeCidade1[20], NomeCidade2[20], CodigoCarta1[3], CodigoCarta2[3];
    int PopulacaoCidade1, PopulacaoCidade2, PontosTuristicosCidade1, PontosTuristicosCidade2;
    float AreaCidade1, AreaCidade2, PIBCidade1, PIBCidade2;

    // Input de dados do digito do estado
    printf("Digite uma letra que representa o digito do seu primeiro estado:\n");
    scanf("%c", &Estado1);

    // Input de dados do digito do estado
    printf("Digite uma letra que representa o digito do seu segundo estado:\n");
    scanf(" %c", &Estado2);

    // Input de dados do codigo da carta
    printf("Digite numero que representa o codigo de sua primeira carta de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta1);

    // Input de dados do codigo da carta
    printf("Digite numero que representa o codigo de sua primeira carta de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta2);

    // Input de dados do nome da cidade
    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", NomeCidade1);

    // Input de dados do nome da cidade
    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", NomeCidade2);

    // Input de dados do populacao da carta
    printf("Digite a quantidade da populacao da primeira cidade:\n");
    scanf("%i", &PopulacaoCidade1);

    // Input de dados do populacao da carta
    printf("Digite a quantidade da populacao da segunda cidade:\n");
    scanf("%i", &PopulacaoCidade2);

    // Input de dados da area da cidade
    printf("Digite a area em 'Km quadrado' da sua primeira cidade:\n");
    scanf("%f", &AreaCidade1);

    // Input de dados da area da cidade
    printf("Digite a area em 'Km quadrado' da sua segunda cidade:\n");
    scanf("%f", &AreaCidade2);

    // Input de dados do pib da cidade
    printf("Digite o 'PIB' de sua primeira cidade considerando a partir de bilhoes de reais:\n");
    printf("Exemplo: (1 = 1 bilhao...)\n");
    scanf("%f", &PIBCidade1);

    // Input de dados do pib da cidade
    printf("Digite o 'PIB' de sua segunda cidade considerando a partir de bilhoes de reais:\n");
    printf("Exemplo: (1 = 1 bilhao...)\n");
    scanf("%f", &PIBCidade2);

    // Input de dados da quantidade de pontos turisticos da cidade
    printf("Digite o numeros de pontos turisticos da primeira cidade:\n");
    scanf("%i", &PontosTuristicosCidade1);

    // Input de dados da quantidade de pontos turisticos da cidade
    printf("Digite o numeros de pontos turisticos da segunda cidade:\n");
    scanf("%i", &PontosTuristicosCidade2);

    // Declarando e calculando variaveis da Densidade Populacional
    double DensidadePopulacao1 = (double)PopulacaoCidade1 / (double)AreaCidade1;
    double DensidadePopulacao2 = (double)PopulacaoCidade2 / (double)AreaCidade2;

    // Declarando e calculando variaives de PIB per Capita
    double PIBperCapita1 = ((double)PIBCidade1 * 1000000000.0) / (double)PopulacaoCidade1;
    double PIBperCapita2 = ((double)PIBCidade2 * 1000000000.0) / (double)PopulacaoCidade2;

    // Declarando e calculando Variavel de Super Poder
    float superPoder1 = (double)PopulacaoCidade1 + (double)AreaCidade1 + ((double)PIBCidade1 * 1000000000.0) + (double)PontosTuristicosCidade1 + PIBperCapita1 + (1.0 / DensidadePopulacao1);
    float superPoder2 = (double)PopulacaoCidade2 + (double)AreaCidade2 + ((double)PIBCidade2 * 1000000000.0) + (double)PontosTuristicosCidade2 + PIBperCapita2 + (1.0 / DensidadePopulacao2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %c%s\n", Estado1, CodigoCarta1);
    printf("Nome da cidade: %s\n", NomeCidade1);
    printf("Populacao: %i\n", PopulacaoCidade1);
    printf("Area: %.2f Km\n", AreaCidade1);
    printf("PIB: %.2f Bilhoes de reais\n", PIBCidade1);
    printf("Numeros de ponto turisticos: %i\n", PontosTuristicosCidade1);
    printf("Densidade Populacional: %.2lf hab/km\n", DensidadePopulacao1);
    printf("PIB per Capita: %.2lf Reais\n\n", PIBperCapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n", Estado2, CodigoCarta2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("Populacao: %i\n", PopulacaoCidade2);
    printf("Area: %.2f Km\n", AreaCidade2);
    printf("PIB: %.2f Bilhoes de reais\n", PIBCidade2);
    printf("Numeros de ponto turisticos: %i\n", PontosTuristicosCidade2);
    printf("Densidade Populacional: %.2lf hab/km\n", DensidadePopulacao2);
    printf("PIB per Capita: %.2lf Reais\n\n", PIBperCapita2);
    printf("=====================================\n");
    printf("Comparacao dos atributos das cartas:\n");

    // Estrutura de decisão para população das cidades
    if(PopulacaoCidade1 > PopulacaoCidade2) {
        printf("Populacao: A cidade %s venceu, com a populacao '%d'.\n", NomeCidade1, PopulacaoCidade1);
    } else {
        printf("Populacao: A cidade %s venceu, com a populacao '%d'.\n", NomeCidade2, PopulacaoCidade2);
    };

    // Estrutura de decisão para area das cidades
    if(AreaCidade1 > AreaCidade2) {
        printf("Area: A cidade %s venceu, com a area '%.2f' km/quadrado.\n", NomeCidade1, AreaCidade1);
    } else {
        printf("Area: A cidade %s venceu, com a area '%.2f' km/quadrado.\n", NomeCidade2, AreaCidade2);
    };

    // Estrutura de decisão para PIB das cidades
    if(PIBCidade1 > PIBCidade2) {
        printf("PIB: A cidade %s venceu, com o PIB '%.2f' Bilhoes.\n", NomeCidade1, PIBCidade1);
    } else {
        printf("PIB: A cidade %s venceu, com o PIB '%.2f' Bilhoes.\n", NomeCidade2, PIBCidade2);
    };

    // Estrutura de decisão para pontos turisticos da cidades
    if(PontosTuristicosCidade1 > PontosTuristicosCidade2) {
        printf("Pontos Turisticos: A cidade %s venceu, com pontos turisticos de '%d'.\n", NomeCidade1, PontosTuristicosCidade1);
    } else {
        printf("Pontos Turisticos: A cidade %s venceu, com pontos turisticos de '%d'.\n", NomeCidade2, PontosTuristicosCidade2);
    };

    // Estrutura de decisão para densidade populacional
    // Obs: O numero com menor valor é o que vence!
    if(DensidadePopulacao1 > DensidadePopulacao2) {
        printf("Densidade Populacional: A cidade %s venceu, com a densidade populacional de '%.2lf' km/quadrado.\n", NomeCidade2, DensidadePopulacao1);
    } else {
        printf("Densidade Populacional: A cidade %s venceu, com a densidade populacional de '%.2lf' km/quadrado.\n", NomeCidade1, DensidadePopulacao2);
    };

    // Estrutura de decisão para PIB per capita das cidades
    if(PIBperCapita1 > PIBperCapita2) {
        printf("PIB Per Capita: A cidade %s venceu, com o PIB per Capita de '%.2lf'.\n", NomeCidade1, PIBperCapita1);
    } else {
        printf("PIB Per Capita: A cidade %s venceu, com o PIB per Capita de '%.2lf'.\n", NomeCidade2, PIBperCapita2);
    };

    // Estrutura de decisão para Super poder das cidades
    if(superPoder1 > superPoder2) {
        printf("Super Poder: A cidade %s venceu, com o super poder de '%.2f'.\n", NomeCidade1, superPoder1);
    } else {
        printf("Super Poder: A cidade %s venceu, com o super poder de '%.2f'.\n", NomeCidade2, superPoder2);
    };
    printf("=====================================\n");

    return 0;
}
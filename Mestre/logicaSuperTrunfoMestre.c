//
// Created by Guilherme on 09/07/2025.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int iniciar() {

    char nomePais1[50], nomePais2[50]; // Nome do pais
    unsigned int populacao1, populacao2; // Numero da população do pais
    unsigned int PontosTuristicos1, PontosTuristicos2; // Pontos turisticos do pais
    float area1, area2; // Area do pais
    float PIB1, PIB2; // PIB do pais
    unsigned int menuRespostaComparacao1, menuRespostaComparacao2;
    double Atributo1Pais1, Atributo2Pais1, Atributo1Pais2, Atributo2Pais2, somaAtributosPais1, somaAtributosPais2;

    printf("================================\n");
    printf("VAMOS JOGAR!\n");
    printf("================================\n");
    printf("Digite o nome do primeiro pais:");
    fgets(nomePais1, sizeof(nomePais1), stdin); // Pega frases compostas, mas tambem \n
    nomePais1[strcspn(nomePais1, "\n")] = '\0'; // Procura dentro de nomePais o indice de \n e substitui por \0
    printf("Digite o nome do segundo pais:");
    fgets(nomePais2, sizeof(nomePais2), stdin); // Pega frases compostas, mas tambem \n
    nomePais2[strcspn(nomePais2, "\n")] = '\0'; // Procura dentro de nomePais o indice de \n e substitui por \0
    printf("Digite a populacao do primeiro pais:");
    scanf("%u", &populacao1);
    printf("Digite a populacao do segundo pais:");
    scanf("%u", &populacao2);
    printf("Digite a area do primeiro pais:");
    scanf("%f", &area1);
    printf("Digite a area do segundo pais:");
    scanf("%f", &area2);
    printf("Digite o PIB do primeiro pais:");
    scanf("%f", &PIB1);
    printf("Digite o PIB do segundo pais:");
    scanf("%f", &PIB2);
    printf("Digite o numeros de pontos turisticos do primeiro pais:");
    scanf("%u", &PontosTuristicos1);
    printf("Digite o numeros de pontos turisticos do segundo pais:");
    scanf("%u", &PontosTuristicos2);
    float densidadeDemografica1 = (float) populacao1 / area1;
    float densidadeDemografica2 = (float) populacao2 / area2;
    printf("================================\n");
    printf("Carta do pais '%s':\n", nomePais1);
    printf("Nome: %s\n", nomePais1);
    printf("Populacao: %u\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turisticos: %u\n", PontosTuristicos1);
    printf("Densidade demografica: %.2f\n", densidadeDemografica1);
    printf("================================\n");
    printf("Carta do pais '%s':\n", nomePais2);
    printf("Nome: %s\n", nomePais2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turisticos: %u\n", PontosTuristicos2);
    printf("Densidade demografica: %.2f\n", densidadeDemografica2);
    printf("================================\n");
    printf("Qual Atributo voce gostaria de ver a primeira comparacao:\n");
    printf("1- Populacao.\n");
    printf("2- Area.\n");
    printf("3- PIB.\n");
    printf("4- Pontos Turisticos.\n");
    printf("5- Densidade Demografica.\n");
    printf("Resposta:");
    scanf("%u", &menuRespostaComparacao1);
    printf("================================\n");
    printf("Qual Atributo voce gostaria de ver a segunda comparacao:\n");
    printf("1- Populacao.\n");
    printf("2- Area.\n");
    printf("3- PIB.\n");
    printf("4- Pontos Turisticos.\n");
    printf("5- Densidade Demografica.\n");
    printf("Resposta:");
    scanf("%u", &menuRespostaComparacao2);
    printf("================================\n");

    if (menuRespostaComparacao1 > 0 && menuRespostaComparacao1 < 6) { // Resposta do menu de comparação tem que estar entre 1 e 4 para ser valido.

        if (menuRespostaComparacao2 > 0 && menuRespostaComparacao2 < 6 ) { // Resposta do menu de comparação tem que estar entre 1 e 4 para ser valido.

            // Verifica se a resposta da comparação de ambos os atributos foram selecionados iguais;
            if (menuRespostaComparacao1 == menuRespostaComparacao2) {
                printf("Voce escolheu o mesmo atributo para a comparacao...\n");
                printf("Fechando o jogo...\n");
                printf("================================\n");
            } else {
                printf("Comparacao individual dos atributos:\n");
                // Primeira opção de atributos para comparar.
                switch (menuRespostaComparacao1) {
                    case 1:
                        // Populacao
                        if (populacao1>populacao2) {
                            printf("Populacao: O Pais '%s' vence '%s', com o total de pessoas: %u\n", nomePais1, nomePais2, populacao1);
                        } else if (populacao1<populacao2) {
                            printf("Populacao: O Pais '%s' vence '%s', com o total de pessoas: %u\n", nomePais2, nomePais1, populacao2);
                        } else {
                            printf("Populacao: O Pais '%s' e '%s' deu empate, numero de pessoas para ambos: %u\n", nomePais1, nomePais2, populacao1);
                        };
                        Atributo1Pais1 = populacao1;
                        Atributo1Pais2 = populacao2;
                        break;
                    case 2:
                        if (area1>area2) {
                            printf("Area: O Pais '%s' vence '%s', com o total de area: %.2f\n", nomePais1, nomePais2, area1);
                        } else if (area1<area2) {
                            printf("Area: O Pais '%s' vence '%s', com o total de area: %.2f\n", nomePais2, nomePais1, area2);
                        } else {
                            printf("Area: O Pais '%s' e '%s' deu empate, area do pais para ambos: %.2f\n", nomePais1, nomePais2, area1);
                        };
                        Atributo1Pais1 = area1;
                        Atributo1Pais2 = area2;
                        break;
                    case 3:
                        if (PIB1>PIB2) {
                            printf("PIB: O Pais '%s' vence '%s', com o total de PIB: %.2f\n", nomePais1, nomePais2, PIB1);
                        } else if (PIB1<PIB2) {
                            printf("PIB: O Pais '%s' vence '%s', com o total de PIB: %.2f\n", nomePais2, nomePais1, PIB2);
                        } else {
                            printf("PIB: O Pais '%s' e '%s' deu empate, PIB do pais para ambos: %.2f\n", nomePais1, nomePais2, PIB1);
                        };
                        Atributo1Pais1 = PIB1;
                        Atributo1Pais2 = PIB2;
                        break;
                    case 4:
                        if (PontosTuristicos1>PontosTuristicos2) {
                            printf("Pontos Turisticos: O Pais '%s' vence '%s', com o total de Pontos Turisticos: %u\n", nomePais1, nomePais2, PontosTuristicos1);
                        } else if (PontosTuristicos1<PontosTuristicos2) {
                            printf("Pontos Turisticos: O Pais '%s' vence '%s', com o total de Pontos Turisticos: %u\n", nomePais2, nomePais1, PontosTuristicos2);
                        } else {
                            printf("Pontos Turisticos: O Pais '%s' e '%s' deu empate, Pontos Turisticos de ambos os paises: %u\n", nomePais1, nomePais2, PontosTuristicos1);
                        };
                        Atributo1Pais1 = PontosTuristicos1;
                        Atributo1Pais2 = PontosTuristicos2;
                        break;
                    case 5:
                        if (densidadeDemografica1>densidadeDemografica2) {
                            printf("Densidade Demografica: O Pais '%s' vence '%s', com a densidade demografica de: %.2f\n", nomePais2, nomePais1, densidadeDemografica2);
                        } else if (PontosTuristicos1<PontosTuristicos2) {
                            printf("Densidade Demografica: O Pais '%s' vence '%s', com a densidade demografica de: %.2f\n", nomePais1, nomePais2, densidadeDemografica1);
                        } else {
                            printf("Densidade Demografica: O Pais '%s' e '%s' deu empate, com a densidade demografica para ambos de: %.2f\n", nomePais1, nomePais2, densidadeDemografica1);
                        };
                        Atributo1Pais1 = PontosTuristicos1;
                        Atributo1Pais2 = PontosTuristicos2;
                        break;
                    default:
                        printf("Opcao invalida!\n");
                        printf("Saindo do jogo...\n");
                };
                // Segunda opção de atributos para comparar.
                switch (menuRespostaComparacao2) {
                    case 1:
                        // Populacao
                        if (populacao1>populacao2) {
                            printf("Populacao: O Pais '%s' vence '%s', com o total de pessoas: %u\n", nomePais1, nomePais2, populacao1);
                        } else if (populacao1<populacao2) {
                            printf("Populacao: O Pais '%s' vence '%s', com o total de pessoas: %u\n", nomePais2, nomePais1, populacao2);
                        } else {
                            printf("Populacao: O Pais '%s' e '%s' deu empate, numero de pessoas para ambos: %u\n", nomePais1, nomePais2, populacao1);
                        };
                        Atributo2Pais1 = populacao1;
                        Atributo2Pais2 = populacao2;
                        break;
                    case 2:
                        if (area1>area2) {
                            printf("Area: O Pais '%s' vence '%s', com o total de area: %.2f\n", nomePais1, nomePais2, area1);
                        } else if (area1<area2) {
                            printf("Area: O Pais '%s' vence '%s', com o total de area: %.2f\n", nomePais2, nomePais1, area2);
                        } else {
                            printf("Area: O Pais '%s' e '%s' deu empate, area do pais para ambos: %.2f\n", nomePais1, nomePais2, area1);
                        };
                        Atributo2Pais1 = area1;
                        Atributo2Pais2 = area2;
                        break;
                    case 3:
                        if (PIB1>PIB2) {
                            printf("PIB: O Pais '%s' vence '%s', com o total de PIB: %.2f\n", nomePais1, nomePais2, PIB1);
                        } else if (PIB1<PIB2) {
                            printf("PIB: O Pais '%s' vence '%s', com o total de PIB: %.2f\n", nomePais2, nomePais1, PIB2);
                        } else {
                            printf("PIB: O Pais '%s' e '%s' deu empate, PIB do pais para ambos: %.2f\n", nomePais1, nomePais2, PIB1);
                        };
                        Atributo2Pais1 = PIB1;
                        Atributo2Pais2 = PIB2;
                        break;
                    case 4:
                        if (PontosTuristicos1>PontosTuristicos2) {
                            printf("Pontos Turisticos: O Pais '%s' vence '%s', com o total de Pontos Turisticos: %u\n", nomePais1, nomePais2, PontosTuristicos1);
                        } else if (PontosTuristicos1<PontosTuristicos2) {
                            printf("Pontos Turisticos: O Pais '%s' vence '%s', com o total de Pontos Turisticos: %u\n", nomePais2, nomePais1, PontosTuristicos2);
                        } else {
                            printf("Pontos Turisticos: O Pais '%s' e '%s' deu empate, Pontos Turisticos de ambos os paises: %u\n", nomePais1, nomePais2, PontosTuristicos1);
                        };
                        Atributo2Pais1 = PontosTuristicos1;
                        Atributo2Pais2 = PontosTuristicos2;
                        break;
                    case 5:
                        if (densidadeDemografica1>densidadeDemografica2) {
                            printf("Densidade Demografica: O Pais '%s' vence '%s', com a densidade demografica de: %.2f\n", nomePais2, nomePais1, densidadeDemografica2);
                        } else if (PontosTuristicos1<PontosTuristicos2) {
                            printf("Densidade Demografica: O Pais '%s' vence '%s', com a densidade demografica de: %.2f\n", nomePais1, nomePais2, densidadeDemografica1);
                        } else {
                            printf("Densidade Demografica: O Pais '%s' e '%s' deu empate, com a densidade demografica para ambos de: %.2f\n", nomePais2, nomePais1, densidadeDemografica1);
                        };
                        Atributo2Pais1 = densidadeDemografica1;
                        Atributo2Pais2 = densidadeDemografica2;
                        break;
                    default:
                        printf("Opcao invalida!\n");
                        printf("Saindo do jogo...\n");
                };

                somaAtributosPais1 = (double) Atributo1Pais1 + (double) Atributo2Pais1; // Somando os atributos escolhidos pelo o usuario, do primeiro pais cadastrado
                somaAtributosPais2 = (double) Atributo1Pais2 + (double) Atributo2Pais2; // Somando os atributos escolhidos pelo o usuario, do segundo pais cadastrado

                printf("================================\n");
                printf("Soma dos atributos escolhidos:\n");
                printf("O Pais '%s' somando os dois atributos escolhidos forma: %.2lf\n", nomePais1, somaAtributosPais1);
                printf("O Pais '%s' somando os dois atributos escolhidos forma: %.2lf\n", nomePais2, somaAtributosPais2);
                if (somaAtributosPais1>somaAtributosPais2) {
                    printf("O pais '%s' vence a rodada contra '%s'\n", nomePais1, nomePais2);
                } else if (somaAtributosPais1<somaAtributosPais2) {
                    printf("O pais '%s' vence a rodada contra '%s'\n", nomePais2, nomePais1);
                } else {
                    printf("O pais '%s' e '%s' empatam.\n", nomePais1, nomePais2);
                }

                printf("================================\n");

            };

        } else {
            printf("Opcao do segundo menu invalida!\n");
            printf("Saindo do jogo...\n");
        };

    } else {
        printf("Opcao do primeiro menu invalida!\n");
        printf("Saindo do jogo...\n");
    };

    return 1;

};

void instrucoes() {
    printf("================================\n");
    printf("Instrucoes:\n");
    printf("1. Digite os valores pedido pelo programa.\n");
    printf("2. Voce escolhera dois atributos a serem comparados.\n");
    printf("3. Ao escolher os dois atributos,.\n");
    printf("4. Divirta-se!\n");
    printf("================================\n");
};

void creditos() {
    printf("================================\n");
    printf("Creditos:\n");
    printf("Criado por: Guilherme Fernandes Rodrigues\n");
    printf("Faculdade: Estacio S/A\n");
    printf("Professor: Sergio Cardoso\n");
    printf("Data de criacao: 09/07/2025\n");
    printf("================================\n");
    return;
};

void menu(int opt) {
    switch (opt) {
        case 1:
            iniciar();
        break;
        case 2:
            instrucoes();
        break;
        case 3:
            creditos();
        break;
        case 4:
            printf("================================\n");
            printf("Saindo do jogo...\n");
            printf("================================\n");
        break;
        default:
            printf("================================\n");
            printf("Opcao invalida\n");
            printf("Saindo do jogo...\n");
            printf("================================\n");
    };
    /*
     * As opções 4 e default, não fazem ações explicitas no bloco, eles tem como objetivo
     * terminar o bloco e correr ao return do menu, para fazer a execução do codigo do 'main'
     * executar seu propio retorno, e de fato finalizar o codigo.
     */
};

int main() {

    unsigned short int respostaMenu; // Variavel que armazena a resposta do menu de interação

    printf("================================\n");
    printf("Bem vindo ao jogo Super Trunfo!\n");
    printf("================================\n");
    printf("Escolha uma das opcoes a seguir:\n");
    printf("1- Iniciar jogo.\n");
    printf("2- Instrucoes.\n");
    printf("3- Creditos.\n");
    printf("4- Sair do jogo.\n");
    printf("Resposta:");
    scanf("%hu", &respostaMenu);
    getchar(); // remove o \n que o scanf() ignora e deixa no buffer stdin

    menu(respostaMenu); // Verifica qual é a entrada do usuario e chama a função correta baseada no valor.

    return 0;

};
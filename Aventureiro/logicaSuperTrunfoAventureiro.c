//
// Created by Guilherme on 08/07/2025.
//
#include <stdio.h>
#include <string.h>

void iniciar() {

    char nomePais1[50], nomePais2[50]; // Nome do pais
    unsigned int populacao1, populacao2; // Numero da população do pais
    unsigned int PontosTuristicos1, PontosTuristicos2; // Pontos turisticos do pais
    float area1, area2; // Area do pais
    float PIB1, PIB2; // PIB do pais
    unsigned short int menuRespostaComparacao;

    printf("================================\n");
    printf("VAMOS JOGAR!\n");
    printf("================================\n");
    printf("Digite o nome do primeiro pais:");
    fgets(nomePais1, sizeof(nomePais1), stdin); // Pega frases compostas, mas tambem \n
    nomePais1[strcspn(nomePais1, "\n")] = '\0'; // Procura dentro de nomePais o indice de \n e substitui por \0
    printf("Digite o nome do segundo pais:");
    fgets(nomePais2, sizeof(nomePais2), stdin);
    nomePais2[strcspn(nomePais2, "\n")] = '\0';
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
    printf("Qual Atributo voce gostaria de ver a comparacao:\n");
    printf("1- Populacao.\n");
    printf("2- Area.\n");
    printf("3- PIB.\n");
    printf("4- Pontos Turisticos.\n");
    printf("5- Densidade Demografica.\n");
    printf("6- Quero comparar todos.\n");
    printf("Resposta:");
    scanf("%u", &menuRespostaComparacao);
    printf("================================\n");

    switch (menuRespostaComparacao) {
        case 1:
            // População
            if (populacao1>populacao2) {
                printf("Populacao: A populacao de %s e maior, com '%u' pessoas, %s Venceu!\n", nomePais1, populacao1, nomePais1);
            } else if (populacao1<populacao2) {
                printf("Populacao: A populacao de %s e maior, com '%u pessoas', %s Venceu!\n", nomePais2, populacao2, nomePais2);
            } else {
                printf("Populacao: A populacao de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };
            break;
        case 2:
            // Area
            if (area1>area2) {
                printf("Area: A Area de %s e maior, com: '%.2f', %s Venceu!\n", nomePais1, area1, nomePais1);
            } else if (area1<area2) {
                printf("Area: A Area de %s e maior, com: '%.2f', %s Venceu!\n", nomePais2, area2, nomePais2);
            } else {
                printf("Area: A Area de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };
            break;
        case 3:
            // PIB
            if (PIB1>PIB2) {
                printf("PIB: O PIB de %s e maior, com: '%.2f', %s Venceu!\n", nomePais1, PIB1, nomePais1);
            } else if (PIB1<PIB2) {
                printf("PIB: O PIB de %s e maior, com: '%.2f', %s Venceu!\n", nomePais2, PIB2, nomePais2);
            } else {
                printf("PIB: O PIB de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };
            break;
        case 4:
            // Pontos Turisticos
            if (PontosTuristicos1>PontosTuristicos2) {
                printf("Pontos Turisticos: Os pontos turisticos de %s e maior, com: '%u', %s Venceu!\n", nomePais1, PontosTuristicos1, nomePais1);
            } else if (PontosTuristicos1<PontosTuristicos2) {
                printf("Pontos Turisticos: Os pontos turisticos de %s e maior, com: '%u', %s Venceu!\n", nomePais2, PontosTuristicos2, nomePais2);
            } else {
                printf("Pontos Turisticos: Os Pontos Turisticos de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };
            break;
        case 5:
            // Densidade Demografica
            if (densidadeDemografica1>densidadeDemografica2) {
                printf("Densidade Demografica: A Densidade Demografica de %s e menor, com: '%u', %s Venceu!\n", nomePais2, densidadeDemografica2, nomePais2);
            } else if (densidadeDemografica1<densidadeDemografica2) {
                printf("Densidade Demografica: A Densidade Demografica de %s e menor, com: '%u', %s Venceu!\n", nomePais1, densidadeDemografica1, nomePais1);
            } else {
                printf("Densidade Demografica: A Densidade Demografica de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };
            break;
        case 6:

            // População
            if (populacao1>populacao2) {
                printf("Populacao: A populacao de %s e maior, com '%u' pessoas, %s Venceu!\n", nomePais1, populacao1, nomePais1);
            } else if (populacao1<populacao2) {
                printf("Populacao: A populacao de %s e maior, com '%u' pessoas, %s Venceu!\n", nomePais2, populacao2, nomePais2);
            } else {
                printf("Populacao: A populacao de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };

            // Area
            if (area1>area2) {
                printf("Area: A Area de %s e maior, com: '%.2f', %s Venceu!\n", nomePais1, area1, nomePais1);
            } else if (area1<area2) {
                printf("Area: A Area de %s e maior, com: '%.2f', %s Venceu!\n", nomePais2, area2, nomePais2);
            } else {
                printf("Area: A Area de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };

            // PIB
            if (PIB1>PIB2) {
                printf("PIB: O PIB de %s e maior, com: '%.2f', %s Venceu!\n", nomePais1, PIB1, nomePais1);
            } else if (PIB1<PIB2) {
                printf("PIB: O PIB de %s e maior, com: '%.2f', %s Venceu!\n", nomePais2, PIB2, nomePais2);
            } else {
                printf("PIB: O PIB de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };

            // Pontos Turisticos
            if (PontosTuristicos1>PontosTuristicos2) {
                printf("Pontos Turisticos: Os pontos turisticos de %s e maior, com: '%u', %s Venceu!\n", nomePais1, PontosTuristicos1, nomePais1);
            } else if (PontosTuristicos1<PontosTuristicos2) {
                printf("Pontos Turisticos: Os pontos turisticos de %s e maior, com: '%u', %s Venceu!\n", nomePais2, PontosTuristicos2, nomePais2);
            } else {
                printf("Pontos Turisticos: Os Pontos Turisticos de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };

            // Densidade Demografica
            if (densidadeDemografica1>densidadeDemografica2) {
                printf("Densidade Demografica: A Densidade Demografica de %s e menor, com: '%u', %s Venceu!\n", nomePais2, densidadeDemografica2, nomePais2);
            } else if (densidadeDemografica1<densidadeDemografica2) {
                printf("Densidade Demografica: A Densidade Demografica de %s e menor, com: '%u', %s Venceu!\n", nomePais1, densidadeDemografica1, nomePais1);
            } else {
                printf("Densidade Demografica: A Densidade Demografica de %s e igual a de %s, Empate!\n", nomePais1, nomePais2);
            };

            break;
        default:
            printf("Opcao invalida.");
            printf("Saindo do jogo...");
    };

};

void instrucoes() {
    printf("================================\n");
    printf("Instrucoes:\n");
    printf("1. Digite os valores pedido pelo programa.\n");
    printf("2. Os valores de duas cartas com atributos diferentes vao ser comparadas.\n");
    printf("3. A carta com maior valor vence, exceto densidade demografica, quento menor melhor.\n");
    printf("4. Divirta-se!\n");
    printf("================================\n");
    return;
};

void creditos() {
    printf("================================\n");
    printf("Creditos:\n");
    printf("Criado por: Guilherme Fernandes Rodrigues\n");
    printf("Faculdade: Estacio S/A\n");
    printf("Professor: Sergio Cardoso\n");
    printf("Data de criacao: 08/07/2025\n");
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
    scanf("%u", &respostaMenu);
    getchar(); // remove o \n que o scanf() ignora

    menu(respostaMenu); // Verifica qual é a entrada do usuario e chama a função correta baseada no valor.

    return 0;

};
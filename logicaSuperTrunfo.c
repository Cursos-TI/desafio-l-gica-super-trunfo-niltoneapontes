#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int atributoEscolhido; // Sera usada no menu

    // Definindo as variaveis para a carta 1
    char estado1;
    char codigo1[4], cidade1[25]; // Definimos o tamanho do array codigo como 4 devido ao catactere nulo
    unsigned long int populacao1;
    unsigned int pontos_turisticos1;
    float area1, pib1;
    float densidade_populacional1, pib_per_capita1;
    float super_poder1;

    // Definindo as variaveis para a carta 2
    char estado2;
    char codigo2[4], cidade2[25]; // Definimos o tamanho do array codigo como 4 devido ao catactere nulo
    unsigned long int populacao2;
    unsigned int pontos_turisticos2;
    float area2, pib2;
    float densidade_populacional2, pib_per_capita2;
    float super_poder2;

    // Pedindo as informacoes da carta 1 ao usuario
    printf("Carta 1 ---------\n");

    printf("Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (Ex.: A01): ");
    scanf("%3s", codigo1); // limita a insercao do codigo a 3 caracteres

    printf("Digite o nome da cidade sem espacos: ");
    scanf("%24s", cidade1); // limita a insercao do nome a 24 caracteres

    printf("Digite a populacao: ");
    scanf("%ld", &populacao1);

    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &pontos_turisticos1);

    // Calculando Densidade Populacional e Pib per Capita da Carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (pib1*1000000) / populacao1;

    // Pedindo as informacoes da carta 2 ao usuario
    printf("\nCarta 2 ---------\n");

    printf("Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex.: A02): ");
    scanf("%3s", codigo2); // limita a insercao do codigo a 3 caracteres

    printf("Digite o nome da cidade sem espacos: ");
    scanf("%24s", cidade2); // limita a insercao do nome a 24 caracteres

    printf("Digite a populacao: ");
    scanf("%ld", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%u", &pontos_turisticos2);

    // Calculando Densidade Populacional e Pib per Capita da Carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (pib2*1000000) / populacao2;

    // Calculando os Super Poderes
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade_populacional1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade_populacional2);

    // Exibicao da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %ld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.3f milhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %u\n", pontos_turisticos1);
    printf("Densidade populacional (habitantes/km²): %.2f\n", densidade_populacional1);
    printf("PIB per Capita (reais): %.2f\n", pib_per_capita1);
    printf("SuperPoder: %.2f\n", super_poder1);

    // Exibicao da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.3f milhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %u\n", pontos_turisticos2);
    printf("Densidade populacional (habitantes/km²): %.2f\n", densidade_populacional2);
    printf("PIB per Capita (reais): %.2f\n", pib_per_capita2);
    printf("SuperPoder: %.2f\n", super_poder2);

    // Comparando as Cartas
    printf("\n****** Comparacao de Cartas ******\n\n");
    printf("Qual atributo voce deseja comparar?\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. SuperPoder\n");
    scanf("%d", &atributoEscolhido);

    switch(atributoEscolhido) {
        case 1:
            printf("\n* Atributo escolhido: Populacao *\n");
            printf("%s: %ld\n%s: %ld\n", cidade1, populacao1, cidade2, populacao2);
            if(populacao1 > populacao2) {
                printf("%s venceu %s.\n", cidade1, cidade2);
            } else if (populacao1 == populacao2) {
                printf("Empate!\n");
            } else {
                printf("%s venceu %s.\n", cidade2, cidade1);
            }
            break;
        case 2:
            printf("\n* Atributo escolhido: Area *\n");
            printf("%s: %.2f\n%s: %.2f\n", cidade1, area1, cidade2, area2);
            if(area1 > area2) {
                printf("%s venceu %s.\n", cidade1, cidade2);
            } else if (area1 == area2) {
                printf("Empate!\n");
            } else {
                printf("%s venceu %s.\n", cidade2, cidade1);
            }
            break;
        case 3:
            printf("\n* Atributo escolhido: PIB *\n");
            printf("%s: %.2f\n%s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if(pib1 > pib2) {
                printf("%s venceu %s.\n", cidade1, cidade2);
            } else if (pib1 == pib2) {
                printf("Empate!\n");
            } else {
                printf("%s venceu %s.\n", cidade2, cidade1);
            }
            break;
        case 4:
            printf("\n* Atributo escolhido: Pontos turisticos *\n");
            printf("%s: %u\n%s: %u\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("%s venceu %s.\n", cidade1, cidade2);
            } else if (pontos_turisticos1 == pontos_turisticos2) {
                printf("Empate!\n");
            } else {
                printf("%s venceu %s.\n", cidade2, cidade1);
            }
            break;
        case 5:
            printf("\n* Atributo escolhido: Densidade populacional *\n");
            printf("%s: %.2f\n%s: %.2f\n", cidade1, densidade_populacional1, cidade2, densidade_populacional2);
            if(densidade_populacional1 < densidade_populacional2) {
                printf("%s venceu %s.\n", cidade1, cidade2);
            } else if (densidade_populacional1 == densidade_populacional2) {
                printf("Empate!\n");
            } else {
                printf("%s venceu %s.\n", cidade2, cidade1);
            }
            break;
        case 6:
            printf("\n* Atributo escolhido: PIB per Capita *\n");
            printf("%s: %.2f\n%s: %.2f\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);
            if(pib_per_capita1 > pib_per_capita2) {
                printf("%s venceu %s.\n", cidade1, cidade2);
            } else if (pib_per_capita1 == pib_per_capita2) {
                printf("Empate!\n");
            } else {
                printf("%s venceu %s.\n", cidade2, cidade1);
            }
            break;
        case 7:
            printf("\n* Atributo escolhido: SuperPoder *\n");
            printf("%s: %.2f\n%s: %.2f\n", cidade1, super_poder1, cidade2, super_poder2);
            if(super_poder1 > super_poder2) {
                printf("%s venceu %s.\n", cidade1, cidade2);
            } else if (super_poder1 == super_poder2) {
                printf("Empate!\n");
            } else {
                printf("%s venceu %s.\n", cidade2, cidade1);
            }
            break;
        default:
            printf("Opcao invalida...\n");
            break;
    }

    printf("\n### Fim de jogo ###\n\n");

    // Encerrando o programa
    return 0;
}

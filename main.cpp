//
// Created by crypt on 17/09/2025.
// Estácio - Atividade Super Trunfo
//

#include <cstring>
#include <stdio.h>
#include <locale.h>

int main() {
    // Definição do locale para PT/BR com encodifição UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Definição das variáveis que armazenarão os atributos/propriedades de ambas as cartas
    char state1, state2;
    char code1[10], code2[10];
    char city_name1[50], city_name2[50];
    int city_population1, city_population2;
    float city_area1, city_area2;
    float city_pib1, city_pib2;
    int tourist_spots1, tourist_spots2;

    // Cadastro das Cartas
    // Cadastro da primeira carta
    printf("Digite o primeiro estado ('A' a 'H'):\n");
    scanf(" %c", &state1);
    getchar();

    printf("Digite o primeiro código da carta:\n");
    fgets(code1, sizeof(code1), stdin);
    code1[strcspn(code1, "\n")] = 0;

    printf("Digite o nome da cidade do primeiro estado:\n");
    fgets(city_name1, sizeof(city_name1), stdin);
    city_name1[strcspn(city_name1, "\n")] = 0;

    printf("Digite o número de habitantes de %s:\n", city_name1);
    scanf("%d", &city_population1);

    printf("Digite a área em km² de %s:\n", city_name1);
    scanf("%f", &city_area1);

    printf("Digite o PIB de %s:\n", city_name1);
    scanf("%f", &city_pib1);

    printf("Digite o número de pontos turísticos em %s:\n", city_name1);
    scanf("%d", &tourist_spots1);

    // Cadastro da segunda carta
    printf("Digite o segundo estado ('A' a 'H'):\n");
    scanf(" %c", &state2);
    getchar();

    printf("Digite o segundo código da carta:\n");
    fgets(code2, sizeof(code2), stdin);
    code2[strcspn(code2, "\n")] = 0;

    printf("Digite o nome da cidade do segundo estado:\n");
    fgets(city_name2, sizeof(city_name2), stdin);
    city_name2[strcspn(city_name2, "\n")] = 0;

    printf("Digite o número de habitantes de %s:\n", city_name2);
    scanf("%d", &city_population2);

    printf("Digite a área em km² de %s:\n", city_name2);
    scanf("%f", &city_area2);

    printf("Digite o PIB de %s:\n", city_name2);
    scanf("%f", &city_pib2);

    printf("Digite o número de pontos turísticos em %s:\n", city_name2);
    scanf("%d", &tourist_spots2);

    // Cálculos de Densidade Populacional e PIB per capita
    float density1 = city_population1 / city_area1;
    float pib_per_capita1 = city_pib1 / city_population1;
    float density2 = city_population2 / city_area2;
    float pib_per_capita2 = city_pib2 / city_population2;

    // Imprimir com printf() ambas as cartas registradas com seus respectivos atributos
    // printf("\nCarta 1:\n");
    // printf("Estado: %c\n", state1);
    // printf("Código: %s\n", code1);
    // printf("Nome da Cidade: %s\n", city_name1);
    // printf("População: %d\n", city_population1);
    // printf("Densidade Populacional: %.2f hab/km²\n", density1);
    // printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    // printf("Área: %.2f km²\n", city_area1);
    // printf("PIB: %.2f bilhões de reais\n", city_pib1);
    // printf("Número de Pontos Turísticos: %d\n", tourist_spots1);
    //
    // printf("\nCarta 2:\n");
    // printf("Estado: %c\n", state2);
    // printf("Código: %s\n", code2);
    // printf("Nome da Cidade: %s\n", city_name2);
    // printf("População: %d\n", city_population2);
    // printf("Densidade Populacional: %.2f hab/km²\n", density2);
    // printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    // printf("Área: %.2f km²\n", city_area2);
    // printf("PIB: %.2f bilhões de reais\n", city_pib2);
    // printf("Número de Pontos Turísticos: %d\n", tourist_spots2);

    // Comparação de Cartas - Menu interativo
    int option;
    printf("Menu Super Trunfo\n");
    printf("Escolha um atributo para comparar: \n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("Escolha: ");

    scanf("%d", &option);
    // Definição do atributo que será usado para a comparação
    const char *attribute = "";
    float value1, value2;

    // Variável para armazenar o vencedor
    unsigned int winner = 0;

    // if (city_population1 > city_population2) {
    //     winner = 1;
    // } else {
    //     winner = 2;
    // }

    switch (option) {
        case 1:
            attribute = "População";
            value1 = city_population1;
            value2 = city_population2;
            break;
        case 2:
            attribute = "Área";
            value1 = city_area1;
            value2 = city_area2;
            break;
        case 3:
            attribute = "PIB";
            value1 = city_pib1;
            value2 = city_pib2;
            break;
        case 4:
            attribute = "Número de pontos turísticos";
            value1 = tourist_spots1;
            value2 = tourist_spots2;
            break;
        case 5:
            attribute = "Densidade demográfica";
            value1 = density1;
            value2 = density2;
            break;
        default:
            printf("Opção inválida. Encerrando o programa.\n");
            return 1;
    }

    // Exibição dos Resultados:
    printf("\n=== Resultado da Comparação ===\n");
    printf("Atributo: %s\n", attribute);
    printf("Carta 1 - %s: %.2f\n", city_name1, value1);
    printf("Carta 2 - %s: %.2f\n", city_name2, value2);

    if (value1 == value2) {
        printf("Resultado: Empate!\n");
    } else {
        if (option == 5) {
            // Densidade demográfica: menor vence
            winner = (value1 < value2) ? 1 : 2;
        } else {
            // Demais atributos: maior vence
            winner = (value1 > value2) ? 1 : 2;
        }

        if (winner == 1) {
            printf("Resultado: Carta 1 (%s) venceu!\n", city_name1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", city_name2);
        }
    }

    return 0;
}

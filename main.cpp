#include <cstdio>
#include <cstring>

int main() {
    char state1, state2;
    char code1[10], code2[10];
    char city_name1[50], city_name2[50];
    int city_population1, city_population2;
    float city_area1, city_area2;
    float city_pib1, city_pib2;
    int tourist_spots1, tourist_spots2;

    // Carta 1
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

    // Carta 2
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

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Nome da Cidade: %s\n", city_name1);
    printf("População: %d\n", city_population1);
    printf("Área: %.2f km²\n", city_area1);
    printf("PIB: %.2f bilhões de reais\n", city_pib1);
    printf("Número de Pontos Turísticos: %d\n", tourist_spots1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Nome da Cidade: %s\n", city_name2);
    printf("População: %d\n", city_population2);
    printf("Área: %.2f km²\n", city_area2);
    printf("PIB: %.2f bilhões de reais\n", city_pib2);
    printf("Número de Pontos Turísticos: %d\n", tourist_spots2);

    return 0;
}

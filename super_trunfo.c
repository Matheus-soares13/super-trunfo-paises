#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    float populacao1, area1, pib1;
    int pontos_turisticos1;
    float densidade_pop1, pib_per_capita1;

    // Carta 2
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    float populacao2, area2, pib2;
    int pontos_turisticos2;
    float densidade_pop2, pib_per_capita2;

    // ---- Entrada de dados da Carta 1 ----
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // lê com espaços

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // ---- Entrada de dados da Carta 2 ----
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // ---- Cálculos ----
    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // PIB em reais

    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ---- Saída ----
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}

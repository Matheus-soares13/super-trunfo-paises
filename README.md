#include <stdio.h>

int main() {
    // Estruturas de dados
    char estado1[3], estado2[3];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%f", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n-------------------------------\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%f", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("\n===== CARTAS CADASTRADAS =====\n");
    printf("\nCarta 1 - %s (%s)\n", cidade1, codigo1);
    printf("População: %.2f\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n", populacao1, area1, pib1, pontos1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, codigo2);
    printf("População: %.2f\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n", populacao2, area2, pib2, pontos2);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    // Comparação de atributo (exemplo: PIB)
    if (pib1 > pib2) {
        printf("Vencedor: %s (%s) com maior PIB!\n", cidade1, codigo1);
    } else if (pib2 > pib1) {
        printf("Vencedor: %s (%s) com maior PIB!\n", cidade2, codigo2);
    } else {
        printf("Empate! As duas cidades têm o mesmo PIB.\n");
    }

    return 0;
}

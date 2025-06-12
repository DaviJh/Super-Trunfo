#include <stdio.h>
int main(){

    // CARTA 1
    unsigned long int populacao;
    int npontost;
    float pib, km2, densidade, pibpercapita, superpoder;
    char nestado[50], ncidade[50], codigoc[20];

    // CARTA 2
    unsigned long int populacao2;
    int npontost2;
    float pib2, km22, densidade2, pibpercapita2, superpoder2;
    char nestado2[50], ncidade2[50], codigoc2[20];

    // ENTRADA CARTA 1
    printf("\nINSIRA INFORMAÇÕES DA PRIMEIRA CARTA: \n");

    printf("Digite o estado: ");
    fgets(nestado, sizeof(nestado), stdin);

    printf("Digite código da carta: ");
    scanf("%s", codigoc);
    getchar();

    printf("Digite nome da cidade: ");
    fgets(ncidade, sizeof(ncidade), stdin);

    printf("Digite número de habitantes: ");
    scanf("%lu", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &km2);

    printf("Digite valor do PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &npontost);

    // Cálculo do pib per capita e Densidade da Carta 1
    // Multiplico por 1bi para facilitar entrada do PIB em bilhões
    densidade = populacao / km2;
    pibpercapita = (pib * 1000000000) / populacao;
    superpoder = (float)populacao + km2 + (pib * 1000000000) + npontost + pibpercapita + (1 / densidade);

    getchar();
    printf("\nINSIRA INFORMAÇÕES DA SEGUNDA CARTA: \n");

    // ENTRADA CARTA 2
    printf("Digite o estado: ");
    fgets(nestado2, sizeof(nestado2), stdin);

    printf("Digite código da carta: ");
    scanf("%s", codigoc2);
    getchar();

    printf("Digite nome da cidade: ");
    fgets(ncidade2, sizeof(ncidade2), stdin);

    printf("Digite número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &km22);

    printf("Digite valor do PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &npontost2);

    // Cálculo do pib per capita e Densidade da Carta 2
    densidade2 = populacao2 / km22;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = (float)populacao2 + km22 + (pib2 * 1000000000) + npontost2 + pibpercapita2 + (1 / densidade2);

    // SAÍDA DAS CARTAS
    printf("\nCarta 1:\n");
    printf("Nome do estado: %s", nestado);
    printf("Codigo da carta: %s\n", codigoc);
    printf("Nome da cidade: %s", ncidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npontost);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    printf("\nCarta 2:\n");
    printf("Nome do estado: %s", nestado2);
    printf("Codigo da carta: %s\n", codigoc2);
    printf("Nome da cidade: %s", ncidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", km22);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // COMPARAÇÕES
    printf("\n\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", km2 > km22);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", npontost > npontost2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder > superpoder2);

    return 0;
}

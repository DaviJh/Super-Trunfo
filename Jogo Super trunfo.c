#include <stdio.h>
int main(){

    // CARTA 1
    int populacao, npontost;
    float pib, km2, densidade, pibpercapita;
    char nestado[20], ncidade[20], codigoc[20];

    // CARTA 2
    int populacao2, npontost2;
    float pib2, km22, densidade2, pibpercapita2;
    char nestado2[20], ncidade2[20], codigoc2[20];

    // ENTRADA CARTA 1

    printf("\nINSIRA INFORMAÇÕES DA PRIMEIRA CARTA: \n");

    printf("Digite o estado: ");
    scanf(" %[^\n]", nestado);

    printf("Digite código da carta: ");
    scanf(" %[^\n]", codigoc);

    printf("Digite nome da cidade: ");
    scanf(" %[^\n]", ncidade);

    printf("Digite número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &km2);

    printf("Digite valor do PIB: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &npontost);

    // Cálculo do pib per capita e Densidade da Carta 1
    // *1 bi para facilitar entrada do PIB em bilhões

    densidade = populacao / km2;
    pibpercapita = (pib * 1000000000 / populacao);

    printf("\nINSIRA INFORMAÇÕES DA SEGUNDA CARTA: \n");

    // ENTRADA CARTA 2

    printf("Digite o estado: ");
    scanf(" %[^\n]", nestado2);

    printf("Digite código da carta: ");
    scanf(" %[^\n]", codigoc2);

    printf("Digite nome da cidade: ");
    scanf(" %[^\n]", ncidade2);

    printf("Digite número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &km22);

    printf("Digite valor do PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &npontost2);

    // Cálculo do pib per capita e Densidade da Carta 2
    // *1 bi para facilitar entrada do PIB em bilhões

    densidade2 = populacao2 / km22;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;


    // SAÍDA DA CARTA 1

    printf("\nCarta 1:\n");
    printf("Nome do estado: %s\n", nestado);
    printf("Codigo da carta: %s\n", codigoc);
    printf("Nome da cidade: %s\n", ncidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npontost);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    // SAÍDA DA CARTA 2

    printf("\nCarta 2:\n");
    printf("Nome do estado: %s\n", nestado2);
    printf("Codigo da carta: %s\n", codigoc2);
    printf("Nome da cidade: %s\n", ncidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", km22);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;

}

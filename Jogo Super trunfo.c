#include <stdio.h>
int main(){

    // CARTA 1
    int populacao, npontost;
    float pib, km2;
    char nestado[20], ncidade[20], codigoc[20];

    // CARTA 2
    int populacao2, npontost2;
    float pib2, km22;
    char nestado2[20], ncidade2[20], codigoc2[20];

    // ENTRADA CARTA 1

    printf("Digite o estado (sem espaços): ");
    scanf("%s", nestado);

    printf("Digite código da carta: ");
    scanf("%s", codigoc);

    printf("Digite nome da cidade (sem espaços): ");
    scanf("%s", ncidade);

    printf("Digite número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &km2);

    printf("Digite valor do PIB: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &npontost);

    printf("INSIRA INFORMAÇÕES DA SEGUNDA CARTA");

    // ENTRADA CARTA 2

    printf("Digite o estado (sem espaços): ");
    scanf("%s", nestado2);

    printf("Digite código da carta: ");
    scanf("%s", codigoc2);

    printf("Digite nome da cidade (sem espaços): ");
    scanf("%s", ncidade2);

    printf("Digite número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &km22);

    printf("Digite valor do PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &npontost2);

    // SAÍDA DA CARTA 1

    printf("\nCarta 1:\n");
    printf("Nome do estado: %s\n", nestado);
    printf("Codigo da carta: %s\n", codigoc);
    printf("Nome da cidade: %s\n", ncidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", km2);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npontost);

    // SAÍDA DA CARTA 2

    printf("\nCarta 2:\n");
    printf("Nome do estado: %s\n", nestado2);
    printf("Codigo da carta: %s\n", codigoc2);
    printf("Nome da cidade: %s\n", ncidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", km22);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", npontost2);

    return 0;

}
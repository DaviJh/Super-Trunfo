#include <stdio.h>
#include <string.h>

// Dados de um país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
} Carta;

// Função para exibir o menu de escolha de atributos
void exibirMenu(int ignorar) {
    printf("\nEscolha um atributo para comparar:\n");
    if (ignorar != 1) printf("1. População\n");
    if (ignorar != 2) printf("2. Área\n");
    if (ignorar != 3) printf("3. PIB\n");
    if (ignorar != 4) printf("4. Pontos Turísticos\n");
    if (ignorar != 5) printf("5. Densidade Demográfica\n");
}

int main() {
    // Cadastro das duas cartas
    Carta carta1 = {"Brasil", 213000000, 8515767.0, 14450.0, 60, 25.0};
    Carta carta2 = {"Argentina", 45300000, 2780000.0, 4877.0, 35, 16.3};

    int opcao1, opcao2;

    // Primeiro menu interativo
    exibirMenu(0);
    printf("Escolha o primeiro atributo (1 a 5): ");
    scanf("%d", &opcao1);

    // Segundo menu interativo sem repetir o primeiro atributo
    exibirMenu(opcao1);
    printf("Escolha o segundo atributo diferente do primeiro: ");
    scanf("%d", &opcao2);

    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    char atributo1[30], atributo2[30];

    // Determinar valores do primeiro atributo
    switch(opcao1) {
        case 1:
            valor1_c1 = carta1.populacao;
            valor1_c2 = carta2.populacao;
            strcpy(atributo1, "População");
            break;
        case 2:
            valor1_c1 = carta1.area;
            valor1_c2 = carta2.area;
            strcpy(atributo1, "Área");
            break;
        case 3:
            valor1_c1 = carta1.pib;
            valor1_c2 = carta2.pib;
            strcpy(atributo1, "PIB");
            break;
        case 4:
            valor1_c1 = carta1.pontosTuristicos;
            valor1_c2 = carta2.pontosTuristicos;
            strcpy(atributo1, "Pontos Turísticos");
            break;
        case 5:
            valor1_c1 = carta1.densidade;
            valor1_c2 = carta2.densidade;
            strcpy(atributo1, "Densidade Demográfica");
            break;
        default:
            printf("Opção inválida! Encerrando.\n");
            return 1;
    }

    // Determinar valores do segundo atributo
    switch(opcao2) {
        case 1:
            valor2_c1 = carta1.populacao;
            valor2_c2 = carta2.populacao;
            strcpy(atributo2, "População");
            break;
        case 2:
            valor2_c1 = carta1.area;
            valor2_c2 = carta2.area;
            strcpy(atributo2, "Área");
            break;
        case 3:
            valor2_c1 = carta1.pib;
            valor2_c2 = carta2.pib;
            strcpy(atributo2, "PIB");
            break;
        case 4:
            valor2_c1 = carta1.pontosTuristicos;
            valor2_c2 = carta2.pontosTuristicos;
            strcpy(atributo2, "Pontos Turísticos");
            break;
        case 5:
            valor2_c1 = carta1.densidade;
            valor2_c2 = carta2.densidade;
            strcpy(atributo2, "Densidade Demográfica");
            break;
        default:
            printf("Opção inválida! Encerrando.\n");
            return 1;
    }

    // Operador ternário para inversão de lógica da densidade
    float pontos_c1 = ((opcao1 == 5) ? (valor1_c2 > valor1_c1) : (valor1_c1 > valor1_c2)) ? 1 : (valor1_c1 == valor1_c2 ? 0.5 : 0);
    pontos_c1 += ((opcao2 == 5) ? (valor2_c2 > valor2_c1) : (valor2_c1 > valor2_c2)) ? 1 : (valor2_c1 == valor2_c2 ? 0.5 : 0);

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("País 1: %s\n", carta1.nome);
    printf("País 2: %s\n", carta2.nome);
    printf("\nAtributo 1: %s\n", atributo1);
    printf("%s: %.2f | %s: %.2f\n", carta1.nome, valor1_c1, carta2.nome, valor1_c2);
    printf("\nAtributo 2: %s\n", atributo2);
    printf("%s: %.2f | %s: %.2f\n", carta1.nome, valor2_c1, carta2.nome, valor2_c2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nome, soma1);
    printf("%s: %.2f\n", carta2.nome, soma2);

    if (soma1 > soma2) {
        printf("\n%s venceu!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("\n%s venceu!\n", carta2.nome);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}

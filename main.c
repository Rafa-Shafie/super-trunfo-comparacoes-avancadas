#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float populacao;
    float area;
    float pib;
    float densidade;
} Carta;

float obterAtributo(Carta c, int opcao) {
    switch (opcao) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.densidade;
        default: return 0;
    }
}

char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Densidade Demografica";
        default: return "Desconhecido";
    }
}

int main() {
    Carta carta1 = {"Brasil", 214.3, 8516.0, 1839.0, 25.2};
    Carta carta2 = {"Japao", 125.7, 377.0, 5065.0, 333.6};

    int atributo1, atributo2;

    printf("Comparando cartas: %s vs %s\n\n", carta1.nome, carta2.nome);

    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 4; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Densidade Demografica\n"); break;
            }
        }
    }

    scanf("%d", &atributo2);
    while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 4) {
        printf("Opcao invalida! Escolha novamente: ");
        scanf("%d", &atributo2);
    }

    float valor1_attr1 = obterAtributo(carta1, atributo1);
    float valor2_attr1 = obterAtributo(carta2, atributo1);
    float valor1_attr2 = obterAtributo(carta1, atributo2);
    float valor2_attr2 = obterAtributo(carta2, atributo2);

    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("\n--- RESULTADO ---\n");
    printf("%s -> %.2f x %.2f\n", nomeAtributo(atributo1), valor1_attr1, valor2_attr1);
    printf("%s -> %.2f x %.2f\n", nomeAtributo(atributo2), valor1_attr2, valor2_attr2);
    printf("\nSoma total:\n");
    printf("%s: %.2f\n", carta1.nome, soma1);
    printf("%s: %.2f\n", carta2.nome, soma2);

    if (soma1 > soma2)
        printf("\nVencedor: %s\n", carta1.nome);
    else if (soma2 > soma1)
        printf("\nVencedor: %s\n", carta2.nome);
    else
        printf("\nEmpate!\n");

    return 0;
}

#include <stdio.h>

int main() {
    char Nome1[50];
    float area;
    unsigned int populacao;
    int turismo;
    char codigo[10];

     printf("Digite o nome da cidade: \n");
    fgets(Nome1, sizeof(Nome1), stdin);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turismo);
    
    printf("Digite o Populção:\n");
    scanf("%u", &populacao);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    char Nome2[50];
    float area2;
    unsigned int populacao2;
    int turismo2;
    char codigo2[10];

    printf("\nDigite o nome da cidade: \n");
    while (getchar() != '\n'); // Limpa o buffer antes de fgets
    fgets(Nome2, sizeof(Nome2), stdin);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turismo2);
    
    printf("Digite o Populção:\n");
    scanf("%u", &populacao2);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo2);

    int pontos1 = 0, pontos2 = 0;

    if (area > area2)
    {
        printf("\nA área é maior!\n");
        pontos1++;
    } else {
        printf("A área é menor.\n");
        pontos2++;
    }

    if (turismo > turismo2)
    {
        printf("A tem mais pontos tuíristicos!\n");
        pontos1++;
    } else {
        printf("Tem menos pontos turísticos.\n");
        pontos2++;
    }
if (populacao > populacao2)
    {
        printf("Tem menos populções!\n");
        pontos1++;
    } else {
        printf("Tem menos populações.\n");
        pontos2++;
    }

    printf("\nRESULTADO FINAL:\n");
if (pontos1 > pontos2) {
    printf("%s é a cidade vencedora!\n", Nome1);
} else if (pontos2 > pontos1) {
    printf("%s é a cidade vencedora!\n", Nome2);
} else {
    printf("Empate entre %s e %s!\n", Nome1, Nome2);
}

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao, turismo, turismoPC, pontosJogador = 0, pontosComputador = 0;
    char cidade[20], codigo[10], estado[20];
    float area, areaPC;
    double populacao, PIB, populacaoPC, PIB_PC;

    srand(time(0));

    printf("#### Super trunfo #### \n");
    printf("1. Começar o jogo \n");
    printf("2. Regras \n");
    printf("3. Sair do jogo \n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Cadastre a sua carta \n");
        
        printf("\nDigite o código: \n");
        scanf("%s", &codigo);

        printf("Digite o nome do estado: \n");
    scanf("%s", estado);

        printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a população da cidade: \n");
    scanf("%lf", &populacao);

    printf("Digite quantos pontos turísticos tem essa cidade: \n");
    scanf("%d", &turismo);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB);

    areaPC = rand() % 17 + 1;
    populacaoPC = rand() % 5000000 + 100000;
    turismoPC = rand() % 50 + 1;
    PIB_PC = rand() % 500000 + 10000;

    printf("\n### Sua Carta ###\n");
            printf("Código: %s \n", codigo);
            printf("Nome do estado: %s \n", estado);
            printf("Nome da cidade: %s \n", cidade);
            printf("Área: %.2f km²\n", area);
            printf("População: %lf\n", populacao);
            printf("Pontos turísticos: %d\n", turismo);
            printf("PIB: %lf\n", PIB);

    printf("\n=== Carta do Computador ===\n");
            printf("Área: %.2f km²\n", areaPC);
            printf("População: %lf habitantes\n", populacaoPC);
            printf("Pontos turísticos: %d\n", turismoPC);
            printf("PIB: %.lf\n", PIB_PC);

            if (area > areaPC) 
            {
                pontosJogador++;
            } else if (area < areaPC)
                pontosComputador++;
 
            if (populacao > populacaoPC)
            {
                pontosJogador++;
            } else if(populacao < populacaoPC)
                pontosComputador++;
            
                if (turismo > turismoPC)
            {
                pontosJogador++;
            } else if (turismo < turismoPC)
                pontosComputador++;
            
                if (PIB > PIB_PC)
                {
                    pontosJogador++;
                } else if (PIB < PIB_PC)
                pontosComputador++;

                printf("\n=== Resultado Final ===\n");
            printf("Pontos do Jogador: %d\n", pontosJogador);
            printf("Pontos do Computador: %d\n", pontosComputador);

            if (pontosJogador > pontosComputador)
            {
                printf("Parabens! Você venceu!");
            } else if (pontosJogador < pontosComputador)
            {
                printf("O computador venceu!");
            } else
                printf("Empate!");
            
            
                
            
            
            
        break;

    case 2:
    printf("Regra 1: Cadastre as suas cartas \n");
    printf("Regra 2: Escreva o nome da cidade/estado sem dar espaço \n");
    printf("Regra 3: Cada critério vale 1 ponto e quem tiver mais vence!\n");
    printf("Regra 4: Divirta-se! \n");
        break;

    case 3:
    printf("Saindo...");
        break;
    
    default:
    printf("Opção inválida, tente novamente");
        break;
    }
}



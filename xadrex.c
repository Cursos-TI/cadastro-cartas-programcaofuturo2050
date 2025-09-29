#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    char estado_1[3];        
    char codigo_1[5];      
    char cidade_1[50];        
    int populacao_1, pontos_1, escolhajogador1;
    float area_1, pib_1;
    
    printf("### Jogo Trunfo ###\n");
    printf("CRIE A SUA PRÓXIMA CARTA. \n");

    printf("Digite o Estado 01: \n");
    scanf("%s", estado_1);
    printf("Digite o Código da carta 01: \n");
    scanf("%s", codigo_1);
    printf("Digite a Cidade 01: \n");
    scanf("%s", cidade_1);
    printf("Digite a População 01: \n");
    scanf("%d", &populacao_1);
    printf("Digite a Área 01: \n");
    scanf("%f", &area_1);
    printf("Digite o PIB 01: \n");
    scanf("%f", &pib_1);
    printf("Digite os Pontos Turísticos 01: \n");
    scanf("%d", &pontos_1);

    float densidade_1 = populacao_1 / area_1;
    float pibp_1 = pib_1 / populacao_1;

    printf("\n--- CARTA 01 ---\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);  
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f bilhões\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontos_1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_1); 
    printf("PIB per capita: R$ %.2f\n", pibp_1);
    

    char estado_2[3];        
    char codigo_2[5];      
    char cidade_2[50];        
    int populacao_2, pontos_2, escolhajogador2;
    float area_2, pib_2;

    printf("\nCRIE A SUA PRÓXIMA CARTA. \n");

    printf("Digite o Estado 02: \n");
    scanf("%s", estado_2);
    printf("Digite o Código da carta 02: \n");
    scanf("%s", codigo_2);
    printf("Digite a Cidade 02: \n");
    scanf("%s", cidade_2);
    printf("Digite a População 02: \n");
    scanf("%d", &populacao_2);
    printf("Digite a Área 02: \n");
    scanf("%f", &area_2);
    printf("Digite o PIB 02: \n");
    scanf("%f", &pib_2);
    printf("Digite os Pontos Turísticos 02: \n");
    scanf("%d", &pontos_2);

    float densidade_2 = populacao_2 / area_2;
    float pibp_2 = pib_2 / populacao_2;

    printf("\n--- CARTA 02 ---\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);  
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f bilhões\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontos_2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_2); 
    printf("PIB per capita: R$ %.2f\n", pibp_2);

    printf("\n--- RESULTADO ---\n");
    if (pib_1 > pib_2) {
        printf("Parabéns, sua carta tem PIB de R$ %.2f bilhões. Você ganhou!\n", pib_1);
    } else if (pib_2 > pib_1) {
        printf("Infelizmente, a carta do seu adversário tem PIB de R$ %.2f bilhões. Tente novamente.\n", pib_2);
    } else {
        printf("Empate! Ambas as cartas têm o mesmo PIB.\n");
    }
    

    printf("Jogador 1, escolha uma opção para comparação com o seu adversário: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    scanf("%d", &escolhajogador1);
    
    switch (escolhajogador1) {
        case 1:
            printf("Jogador 1 escolheu - População\n");
            break;
        case 2:
            printf("Jogador 1 escolheu - Área\n");
            break;
        case 3:
            printf("Jogador 1 escolheu - PIB\n");
            break;
        case 4:
            printf("Jogador 1 escolheu - Pontos Turísticos\n");
            break;
        default:
            printf("Opção inválida!!\n");
            return 1;
    }
    printf("Jogador 2, escolha uma opção para comparação com o seu adversário: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    scanf("%d", &escolhajogador2);

    switch (escolhajogador2) {
        case 1:
            printf("Jogador 2 escolheu - População\n");
            break;
        case 2:
            printf("Jogador 2 escolheu - Área\n");
            break;
        case 3:
            printf("Jogador 2 escolheu - PIB\n");
            break;
        case 4:
            printf("Jogador 2 escolheu - Pontos Turísticos\n");
            break;
        default:
            printf("Opção inválida!!\n");
            return 1;
    }

    if ((escolhajogador1 == 1) && (escolhajogador2 == 1)) { 
        printf("Parabéns! Jogador 1 ganhou essa rodada.\n");
    } else if ((escolhajogador1 == 2) && (escolhajogador2 == 2)) {
        printf("Parabéns! Jogador 1 ganhou essa rodada.\n");
    } else {
        printf("### Parabéns Jogador 2 ganhou essa rodada!\n");
    }

    return 0;
}


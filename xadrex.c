#include <stdio.h>

int main() {
    char estado_1[3];        
    char codigo_1[5];      
    char cidade_1[50];        
    int populacao_1, pontos_1;
    float area_1, pib_1;

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
    int populacao_2, pontos_2;
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

    return 0;
}
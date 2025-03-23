#include <stdio.h>

int main(){

    printf ("Bem vindo ao desafio Super Trunfo! \n");

// VARIÁVEIS PARA CADASTRO DAS CARTAS

    char estado1[20], estado2[20];
    char carta1[20], carta2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontostur1, pontostur2;
    float superpoder1, superpoder2;

// VARIÁVEIS PARA CÁLCULO DE PIB PER CAPITA E DENSIDADE POPULACIONAL

    float pibpc1, pibpc2;
    float densidade1, densidade2;

// CADASTRO DAS CARTAS

// PROPRIEDADES DA CARTA 01

    printf("Digite o nome do estado da primeira carta: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta1);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em KM²: \n");
    scanf("%f", &area1);

    printf("Valor do PIB: \n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontostur1);

// PROPRIEDADES DAS CARTA 02

    printf("Agora preencha os dados da segunda carta!\n");

    printf("Digite o nome do estado da segunda carta: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em KM²: \n");
    scanf("%f", &area2);

    printf("Valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontostur2);

// CALCULO DO PIB PER CAPITA E DENSIDADE POPULACIONAL DAS CARTAS CADASTRADAS

pibpc1 = pib1 / (float)populacao1;
pibpc2 = pib2 / (float)populacao2;

densidade1 = (float)populacao1 / area1;
densidade2 = (float)populacao2 / area2;

// EXIBIÇÃO DE DADOS COMPLETOS DAS CARTAS CADASTRADAS

    printf("Carta 01 \n Estado: %s \n Cidade: %s \n", estado1, cidade1);
    printf("Código da carta: %s\n", carta1);
    printf("Habitantes: %d \n Área: %.2f km² \n", populacao1, area1);
    printf("Número de pontos turísticos: %d \n", pontostur1);
    printf("PIB per capita: %.3f R$ \n", pibpc1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);

    printf("Carta 02 \n Estado: %s \n Cidade: %s \n", estado2, cidade2);
    printf("Código da carta: %s\n", carta2);
    printf("Habitantes: %d \n Área: %.2f km² \n", populacao2, area2);
    printf("Número de pontos turísticos: %d \n", pontostur2);
    printf("PIB per capita: %.3f R$ \n", pibpc2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);

// CÁLCULOS DE SUPER PODER

    superpoder1 = populacao1 + area1 + pib1 + pontostur1 + pibpc1 + (1/ densidade1);
    superpoder2 = populacao2 + area2 + pib2 + pontostur2 + pibpc2 + (1/ densidade2);

// ESTRUTURA DE DECISÃO DA CARTA VENCEDORA

    printf("\nResultados:\n");

    printf("População: %s\n", if (populacao1 > populacao2) {
        printf("CARTA 1 VENCEU");
    } else { printf("CARTA 2 VENCEU"); }
    
    printf("Àrea: %s\n", if (area1 > area2) {
        printf("CARTA 1 VENCEU");
    } else { printf("CARTA 2 VENCEU"); }
    
    printf("PIB: %s\n", if (pib1 > pib2) {
        printf("CARTA 1 VENCEU");
    } else { printf("CARTA 2 VENCEU"); }
    
    printf("Pontos Turísticos: %s\n", if (pontostur1 > pontostur2) {
        printf("CARTA 1 VENCEU");
    } else { printf("CARTA 2 VENCEU"); }
    
    printf("Densidade Populacional: %s\n", if (densidade1 > densidade2) {
        printf("CARTA 1 VENCEU");
    } else { printf("CARTA 2 VENCEU"); }
    
    printf("PIB Per Capita: %s\n", if (pibpc1 > pibpc2) {
        printf("CARTA 1 VENCEU");
    } else { printf("CARTA 2 VENCEU"); }
    
    printf("Super Poder: %s\n", if (superpoder1 > superpoder2) {
        printf("CARTA 1 VENCEU");
    } else { printf("CARTA 2 VENCEU"); }

return 0;

}
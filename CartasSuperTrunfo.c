#include <stdio.h>

int main(){

printf ("Bem vindo ao desafio Super Trunfo! \n");

//variáveis das cartas a serem cadastradas
char nome[20];
char carta[20];
char cidade[20];
int populacao;
float area;
float pib;
int pontostur;

//cadastro da CARTA 01 -------------------------------------------
printf("Digite o nome do estado da primeira carta: \n");
scanf("%s", &nome);

printf("Digite o código da carta: \n");
scanf("%s", &carta);

printf("Nome da cidade: \n");
scanf("%s", &carta);

printf("População: \n");
scanf("%d", &populacao);

printf("Área em KM2: \n");
scanf("%f", &area);

printf("Quantidade de pontos turísticos: \n");
scanf("%d", &pontostur);

printf("Carta 01 \n Estado: %s \n Cidade: %s \n", nome, carta);
printf("Habitantes: %d \n Área: %f km² \n", populacao, area);
printf("Número de pontos turísticos: %d \n", pontostur);

// CARTA 02 -------------------------------------------------------------

printf("Agora preencha os dados da segunda carta!\n");

printf("Digite o nome do estado da segunda carta: \n");
scanf("%s", &nome);

printf("Digite o código da carta: \n");
scanf("%s", &carta);

printf("Nome da cidade: \n");
scanf("%s", &carta);

printf("População: \n");
scanf("%d", &populacao);

printf("Área em KM2: \n");
scanf("%f", &area);

printf("Quantidade de pontos turísticos: \n");
scanf("%d", &pontostur);

printf("Carta 02 \n Estado: %s \n Cidade: %s \n", nome, carta);
printf("Habitantes: %d \n Área: %f km² \n", populacao, area);
printf("Número de pontos turísticos: %d \n", pontostur);



return 0;

}
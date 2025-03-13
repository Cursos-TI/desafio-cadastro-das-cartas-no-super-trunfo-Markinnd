#include <stdio.h>

int main(){
    char estado[3];
    char codigo[5];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Vamos cadastrar a carta 1: \n");
    
    printf("Digite o estado (A à H apenas): \n");
    scanf("%s", estado);

    printf("Digite o código da cidade, iniciando com a letra relacionada ao Estado (000 à 999): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);    

    printf("Digite a população: \n");
    scanf("%d", &populacao);    

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);  

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo); 
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    
    printf("Vamos cadastrar a carta 2: \n");

    printf("Digite o estado (A à H apenas): \n");
    scanf("%s", estado);

    printf("Digite o código da cidade, iniciando com a letra relacionada ao Estado (000 à 999): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);    

    printf("Digite a população: \n");
    scanf("%d", &populacao);    

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);  

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo); 
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
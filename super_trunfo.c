#include <stdio.h>

int main(){
    //declaração de variáveis
    char estado[3];
    char codigo[5];
    char nome_da_cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //cadastro da carta 1
    printf("Vamos cadastrar a carta 1: \n");
    
    printf("Digite o estado (A à H apenas): \n");
    scanf("%s", estado);

    printf("Digite o código da cidade, iniciando com a letra relacionada ao Estado (000 à 999): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);    

    printf("Digite a população: \n");
    scanf("%f", &populacao);    

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);  

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    //calculos de pib per capita e densidade populacional da carta 1
    float densidade_demografica = populacao / area;
    float pib_per_capita = pib / populacao;

    //impressão dos dados cadastrados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo); 
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("Densidade demográfica: %f\n", densidade_demografica);
    printf("PIB: %f\n", pib);
    printf("PIB per capita: %f\n", pib_per_capita);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    
    //cadastro da carta 2
    printf("Vamos cadastrar a carta 2: \n");

    printf("Digite o estado (A à H apenas): \n");
    scanf("%s", estado);

    printf("Digite o código da cidade, iniciando com a letra relacionada ao Estado (000 à 999): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);    

    printf("Digite a população: \n");
    scanf("%f", &populacao);    

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);  

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    //calculo do pib per capita e densidade populacional da carta 2
    float densidade_demografica_carta2 = populacao / area;
    float pib_per_capita_carta2 = pib / populacao;

    //impressão dos dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo); 
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade demográfica: %f\n", densidade_demografica_carta2);
    printf("PIB per capita: %f\n", pib_per_capita_carta2);

    return 0;
}
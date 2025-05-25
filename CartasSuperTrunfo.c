#include <stdio.h>
int main(){

    printf(" ***Super Trunfo*** \n");
    char estado[20];
    char codigo[5];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int  pontos;
    float divisao;
    float divisao2;
    
    // Cadastro da carta 1
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua populacao: \n");
    scanf("%d", &populacao);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);
    
    // Divisão da polulação, Àrea e PIB
    divisao =  populacao / area;
    divisao2 =  PIB / populacao;
   
    //  Carta 01 cadastrada
    printf("Carta 1! \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos %d \n", pontos);
    printf("Densidade Populacional: %.3f \n", divisao);
    printf("PIB per Capita: %d \n", divisao2);

    // Cadastro da carta 2
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu código: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua populacao: \n");
    scanf("%d", &populacao);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    // Divisão da polulação, Àrea e PIB
    divisao = populacao / area;
    divisao2 = PIB / populacao;

    // Carta 02 cadastrada
    printf("Carta: 2! \n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos %d \n", pontos);
    printf("Densidade Populacional: %.3f \n", divisao);
    printf("PIB per Capita: %d \n", divisao2);

    return 0; 
}
#include <stdio.h>
int main(){

    printf(" ***Super Trunfo*** \n");
    char estado[20];
    char codigo[5];
    char cidade[20];
    unsigned long int populacao;
    float area;
    float PIB;
    int  pontos;
    float divisao;
    float divisao2;
    unsigned int superPoder1, superPoder2;
    
    // Cadastro da carta 1
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua populacao: \n");
    scanf("%lu", &populacao);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);
    
    // Divisão da polulação, Àrea e PIB
    divisao =  populacao / area;
    divisao2 =  PIB / populacao;
    superPoder1 = populacao + area + PIB + pontos, divisao / 1;
    superPoder2 = populacao + area + PIB + pontos, divisao2 / 1;
   
    //  Carta 01 cadastrada
    printf("Carta 1! \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos %d \n", pontos);
    printf("Densidade Populacional: %.3f \n", divisao);
    printf("PIB per Capita: %f \n", divisao2);
    printf("Super poder da Carta 01: %d\n", superPoder1);

    // Cadastro da carta 2
    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu código: \n");
    scanf("%s", &codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua populacao: \n");
    scanf("%lu", &populacao);

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
    printf("População: %lu \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Número de Pontos Turísticos %d \n", pontos);
    printf("Densidade Populacional: %.3f \n", divisao2);
    printf("PIB per Capita: %d \n", divisao2);
    printf("Super poder da Carta 02: %d\n", superPoder2);

    //Comparação de poder das cartas:
    printf(" O super poder da carta 01, é maior que o da carta 02 ? %u\n", superPoder1 > superPoder2);

    return 0; 
}
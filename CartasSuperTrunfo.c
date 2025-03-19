#include <stdio.h>

int main(){

    // Organizado assim: tipo da variavel, primeira carta1, segunda carta2 
    char estado1, estado2;
    char codigodacarta1[3], codigodacarta2[3];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float Densidadepopulacional1, Densidadepopulacional2;
    float PIBpercapital1, PIBpercapital2;

    // Entrada de dados da primeira carta:

    //Estado
        printf("Cadastre a sua primeira carta: \n\nDigite o estado da sua carta(de 'A' a 'H'): \n");
        scanf("%c", &estado1);

    //Codigo da carta
        printf("Digite o codigo da carta(ex: A01, B03): \n");
        scanf("%s", &codigodacarta1);

    //Nome da Cidade
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_da_cidade1);

    //Populacao
        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &populacao1);

    //Area em km²
        printf("Digite a Área da cidade em Quilometros quadrados: \n");
        scanf("%f", &area1);

    //PIB
        printf("Digite o PIB(Produto interno bruto) da Cidade: \n");
        scanf("%f", &PIB1);

    //Pontos Turisticos
        printf("Digite a quantidade de pontos turisticos da cidade: \n");
        scanf("%d", &pontos_turisticos1);


    // Entrada de dados da Segunda carta:

        printf("\n\nSua primeira carta foi cadastrada com Sucesso! \nAgora vamos cadastrar a sua Segunda carta: ");

    //Estado
        printf("\nDigite o estado da sua carta(de 'A' a 'H'): \n");
        scanf("%s", &estado2);

    //Codigo da carta
        printf("Digite o codigo da carta(ex: A01, B03): \n");
        scanf("%s", &codigodacarta2);

    //Nome da Cidade
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_da_cidade2);

    //Populacao
        printf("Digite o numero de habitantes da cidade: \n");
        scanf("%d", &populacao2);

    //Area em km²
        printf("Digite a Área da cidade em Quilometros quadrados: \n");
        scanf("%f", &area2);

    //PIB
        printf("Digite o PIB(Produto interno bruto) da Cidade: \n");
        scanf("%f", &PIB2);

    //Pontos Turisticos
        printf("Digite a quantidade de pontos turisticos da cidade: \n");
        scanf("%d", &pontos_turisticos2);

    //Densidade Populacional
    Densidadepopulacional1 = populacao1 / area1;
    Densidadepopulacional2 = populacao2 / area2;

    //PIB per Capital

    PIBpercapital1 = PIB1 / populacao1;
    PIBpercapital2 = PIB2 / populacao2;

    //Super Poder

    unsigned int Superpoder1 = (populacao1 + area1 + PIB1 + pontos_turisticos1 + PIBpercapital1) - Densidadepopulacional1;
    unsigned int Superpoder2 = (populacao2 + area2 + PIB2 + pontos_turisticos2 + PIBpercapital2) - Densidadepopulacional2;

    //Saida de dados

        printf("A BATALHA! - CARTAS DUELANDO: \n(1) = Carta 1 Vencedora \n(0) = Carta 2 Vencedora\n\n");

        printf("Carta 1 = %u Pontos de Poder. \nCarta 2 = %u Pontos de Poder.\n\n", Superpoder1, Superpoder2);

        printf("Populacao: Carta %d Venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
        printf("Área: Carta %d Venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
        printf("PIB: Carta %d Venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
        printf("Pontos Turisticos: Carta %d Venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
        printf("Densidade Populacional: Carta %d Venceu (%d)\n", Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 2, Densidadepopulacional1 < Densidadepopulacional2);
        printf("PIB per Capita: Carta %d Venceu (%d)\n", PIBpercapital1 > PIBpercapital2 ? 1 : 2, PIBpercapital1 > PIBpercapital2);
        printf("Super Poder: Carta %d Venceu (%d)\n", Superpoder1 > Superpoder2 ? 1 : 2, Superpoder1 > Superpoder2);
        
    return 0;
}
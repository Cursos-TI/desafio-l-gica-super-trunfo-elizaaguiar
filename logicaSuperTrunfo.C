#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char estado;
    char codigoDaCarta[50];
    char nomeDaCidade[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;
    int numeroDaCarta;
    float densidadePopulacional1, densidadePopulacional2;
    float PIBPerCapita1, PIBPerCapita2;
    float superPoder1, superPoder2;
    int opcao;
    superPoder1 = populacao1 + area1 + PIB1 + numeroDePontosTuristicos1 + PIBPerCapita1 + (1 / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + PIB2 + numeroDePontosTuristicos2 + PIBPerCapita2 + (1 / densidadePopulacional2);

    // CARTA 1 //

    printf("Digite seu estado= ");
    scanf(" %c", &estado);

    printf("Digite o código da carta= ");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade= ");
    scanf("%s", nomeDaCidade);

    printf("Digite a população= ");
    scanf("%ld", &populacao1);

    printf("Digite a área= ");
    scanf("%f", &area1);

    printf("Digite o PIB= ");
    scanf("%f", &PIB1);
    PIB1 *= 1000000000;

    printf("Digite o número de pontos turísticos= ");
    scanf("%d", &numeroDePontosTuristicos1);

    printf("Digite o número da carta= ");
    scanf("%d", &numeroDaCarta);

    densidadePopulacional1 = populacao1 / area1;
    printf("%f", densidadePopulacional1);

    PIBPerCapita1 = PIB1 / populacao1;
    printf("%f", PIBPerCapita1);

    superPoder1 = populacao1 + area1 + PIB1 + numeroDePontosTuristicos1 + PIBPerCapita1 + (1 / densidadePopulacional1);
    printf("%.2f", superPoder1);

    printf("- Carta: %d\n", numeroDaCarta);
    printf("- Estado: %c\n", estado);
    printf("- Código da carta: %s\n", codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %ld \n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: %.2f bilhões de reais\n", PIB1);
    printf("- Pontos turísticos: %d\n", numeroDePontosTuristicos1);
    printf("- Densidade Populacional= %.2f hab/km²\n", densidadePopulacional1);
    printf("- PIB per Capita= %.2f reais\n", PIBPerCapita1);
    printf("- Super Poder= %.2f reais\n", superPoder1);

    // CARTA 2 //

    printf("Digite seu estado= ");
    scanf(" %c", &estado);

    printf("Digite o código da carta= ");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade= ");
    scanf("%s", nomeDaCidade);

    printf("Digite a população= ");
    scanf("%ld", &populacao2);

    printf("Digite a área= ");
    scanf("%f", &area2);

    printf("Digite o PIB= ");
    scanf("%f", &PIB2);
    PIB2 *= 1000000000;

    printf("Digite o número de pontos turísticos= ");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("Digite o número da carta= ");
    scanf("%d", &numeroDaCarta);

    densidadePopulacional2 = populacao2 / area2;
    printf("%f", densidadePopulacional2);

    PIBPerCapita2 = PIB2 / populacao2;
    printf("%f", PIBPerCapita2);

    superPoder2 = populacao2 + area2 + PIB2 + numeroDePontosTuristicos2 + PIBPerCapita2 + (1 / densidadePopulacional2);
    printf("%.2f", superPoder2);

    printf("- Carta: %d\n", numeroDaCarta);
    printf("- Estado: %c\n", estado);
    printf("- Código da carta: %s\n", codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %ld \n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: %.2f bilhões de reais\n", PIB2);
    printf("- Pontos turísticos: %d\n", numeroDePontosTuristicos2);
    printf("- Densidade Populacional= %.2f hab/km²\n", densidadePopulacional2);
    printf("- PIB per Capita= %.2f reais\n", PIBPerCapita2);
    printf("- Super Poder= %.2f reais\n", superPoder2);

    printf("Menu principal\n");
    printf("1. Regras de comparação: \n");
    // A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.
    printf("2. Comparar população\n");
    printf("3. Comparar área\n");
    printf("4. Comparar PIB\n");
    printf("5. Comparar número de pontos turísticos\n");
    printf("6. Comparar densidade populacional\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Vence a carta com o maior valor no atributo escolhido.");
        printf("Para a Densidade Populacional, a regra inverte: vence a carta com o menor valor");
        break;
    case 2:
        // Vence quem tem maior população
        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu!\n");
        } else if (populacao1 == populacao2)
        {
            printf("Empate!");
            }else{
                printf("Carta 2 venceu!\n");
            }
        break;
    case 3:
        // Vence quem tem maior área
        if (area1 > area2)
        {
            printf("Carta 1 venceu!\n");
        } else if (area1 == area2)
        {
            printf("Empate!");
            }else{
                printf("Carta 2 venceu!\n");
            }
        break;
    case 4:
        // Vence quem tem maior PIB
        if (PIB1 > PIB2)
        {
            printf("Carta 1 venceu!\n");
        } else if (PIB1 == PIB2)
        {
            printf("Empate!");
            }else{
                printf("Carta 2 venceu!\n");
            }
        break;
    case 5:
        // Vence quem tem mais pontos turísticos
        if (numeroDePontosTuristicos1 > numeroDePontosTuristicos2)
        {
            printf("Carta 1 venceu!\n");
        } else if (numeroDePontosTuristicos1 == numeroDePontosTuristicos2)
        {
            printf("Empate!\n");
            }else{
                printf("Carta 2 venceu!");
            }
        break;
    case 6:
        // Vence quem tem menor densidade populacional
        if (densidadePopulacional2 > densidadePopulacional1)
        {
            printf("Carta 1 venceu!\n");
        } else if (densidadePopulacional1 == densidadePopulacional2)
        {
            printf("Empate!\n");
            }else{
                printf("Carta 2 venceu!\n");
            }
        break;
    default:
        printf("Opção Inválida!");
        break;
    }
    return 0;
}
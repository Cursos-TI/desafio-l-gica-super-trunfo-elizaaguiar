#include <stdio.h>

int main() {
    
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
    superPoder1 = populacao1+ area1 + PIB1 + numeroDePontosTuristicos1 + PIBPerCapita1 + (1/densidadePopulacional1);
    superPoder2 = populacao2+ area2 + PIB2 + numeroDePontosTuristicos2 + PIBPerCapita2 + (1/densidadePopulacional2);

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

    densidadePopulacional1 = populacao1/area1;
    printf("%f", densidadePopulacional1);

    PIBPerCapita1 = PIB1/populacao1;
    printf("%f", PIBPerCapita1);

    superPoder1 = populacao1+ area1 + PIB1 + numeroDePontosTuristicos1 + PIBPerCapita1 + (1/densidadePopulacional1);
    printf("%.2f", superPoder1);
   
    printf("- Carta: %d\n", numeroDaCarta);
    printf("- Estado: %c\n", estado);
    printf("- Código da carta: %s\n", codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %ld \n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: %.2f bilhões de reais\n", PIB1);
    printf("- Pontos turísticos: %d\n",  numeroDePontosTuristicos1);
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

    densidadePopulacional2 = populacao2/area2;
    printf("%f", densidadePopulacional2);

    PIBPerCapita2 = PIB2/populacao2;
    printf("%f", PIBPerCapita2);
    
    superPoder2 = populacao2+ area2 + PIB2 + numeroDePontosTuristicos2 + PIBPerCapita2 + (1/densidadePopulacional2);
    printf("%.2f", superPoder2);

    printf("- Carta: %d\n", numeroDaCarta);
    printf("- Estado: %c\n", estado);
    printf("- Código da carta: %s\n", codigoDaCarta);
    printf("- Nome da cidade: %s\n", nomeDaCidade);
    printf("- População: %ld \n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: %.2f bilhões de reais\n", PIB2);
    printf("- Pontos turísticos: %d\n",  numeroDePontosTuristicos2);
    printf("- Densidade Populacional= %.2f hab/km²\n", densidadePopulacional2);
    printf("- PIB per Capita= %.2f reais\n", PIBPerCapita2);
    printf("- Super Poder= %.2f reais\n", superPoder2);
    
    if (populacao1>populacao2){
        printf("Carta 1 tem maior população!\n");
    }else{
        printf("Carta 2 tem maior população!\n");
    }

    if (area1>area2){
        printf("Carta 1 tem maior área!\n");
    }else{
        printf("Carta 2 tem maior área!\n");
    }

    if (PIB1>PIB2){
        printf("Carta 1 tem maior PIB!\n");
    }else{
        printf("Carta 2 tem maior PIB!\n");
    }
    
    if (numeroDePontosTuristicos1>numeroDePontosTuristicos2){
        printf("Carta 1 tem mais pontos turísticos!\n");
    }else{
        printf("Carta 2 tem mais pontos turísticos!\n");
    }

    
    
    return 0;
    

}
//  printf("A cidade vencedora é: %s\n", cidadeVencedora);
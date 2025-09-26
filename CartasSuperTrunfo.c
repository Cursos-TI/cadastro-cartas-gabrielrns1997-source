#include<stdio.h>

int main(){ 

    char letra_estado1, letra_estado2;
    char cod_carta1 [5], cod_carta2[5];
    char nome_cidade1 [50], nome_cidade2 [50];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area_km1, area_km2;
    float pib1, pib2;
    float densidade_popu1, densidade_popu2;
    float pib_percapita1, pib_percapita2;
   

    printf("Digite as informacões da carta número 1\n");

    printf("Digite uma letra: \n");
    scanf("%c", &letra_estado1);

    printf("código da carta: \n");
    scanf("%s", cod_carta1);

    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Quantidade da população: \n");
    scanf("%d", &populacao1);

    printf("Área em KM²: \n");
    scanf("%f", &area_km1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

   
    printf("Digite as informacões da carta número 2\n");

    printf("Digite uma letra: \n");
    scanf(" %c", &letra_estado2);

    printf("código da carta: \n");
    scanf("%s", cod_carta2);

    printf("Nome da cidade: \n");
    scanf(" %s", nome_cidade2);

    printf("Quantidade da população: \n");
    scanf("%d", &populacao2);

    printf("Área em KM²: \n");
    scanf("%f", &area_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);


    
    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Vencedor: Carta número 1:\n%s é a vencedora!\n", nome_cidade1);
    } 
    else if (pontos_turisticos2 > pontos_turisticos1){
        printf("Vencedor: Carta numero 2:\n%s é a vencedora!\n", nome_cidade2);
    } else {
        printf("Empate! Nenhuma carta vence!\n");
    }

    


   
return 0;
}

#include <stdio.h>

int main(){

    char nome_carta1, nome_carta2;
    char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    float quantidade_pop1, quantidade_pop2;
    float areakm²1, areakm²2;
    float pib1, pib2;
    int pontoturis1, pontoturis2;

    printf("Digite o nome da carta:\n");
    scanf("%s", &nome_carta1);

    printf("Digite o nome do Estado:\n");
    scanf("%s", &estado1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a aera em km²:\n");
    scanf("%f", &areakm²1),

    printf("Digite o pib:\n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos:\n");
    scanf("%d", &pontoturis1);


    printf("Digite o nome da carta:\n");
    scanf("%s", &nome_carta2);

    printf("Digite o nome do Estado:\n");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a aera em km²:\n");
    scanf("%f", &areakm²2),

    printf("Digite o pib:\n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos:\n");
    scanf("%d", &pontoturis2);


    if (pontoturis1 > pontoturis2){
        printf("Vencedor: Carta número 1:\n%s é a vencedora!\n", cidade1);
    } 
    else if (pontoturis2 > pontoturis1){
        printf("Vencedor: Carta numero 2:\n%s é a vencedora!\n", cidade2);
    } else {
        printf("Empate! Nenhuma carta vence!\n");
    }

    return 0;

}

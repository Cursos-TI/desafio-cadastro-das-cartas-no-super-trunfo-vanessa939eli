#include <stdio.h>

int main(){
    // Definir as variáveis para a primeira carta.
    char estado1;
    char codigo1[01];
    char cidade1[1];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Definir as variáveis para a segunda carta.
    char estado2;
    char codigo2[02];
    char cidade2[1];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a 1 carta.
    printf("Digite os dados da primeira carta: \n");

    printf("Digite o Estado (letra Aa H): \n");
    scanf("%c", &estado1);

    printf("Digite o Código da carta (ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o Pib (em bilhões de reias): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos Turíticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a 2 carta.
    printf("Digite os dados da segunda carta: \n");

    printf("Digite o Código da carta (ex: B02): \n");
    scanf("%s", &codigo2);
    
    printf("Digite a Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): \n");
    scant("%f", &area2);

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibir os dados da 1 carta.
    printf ("Carta 1: \n");
    printf("Estado: %c\n:", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("Pib: %f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibir dados da 2 carta.
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populção: %d\n",populacao2);
    printf("Área: %f km²\n",area2);
    printf("Pib: %f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
    
}

    


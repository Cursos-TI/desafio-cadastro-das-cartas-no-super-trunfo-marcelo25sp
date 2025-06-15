#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    printf("Desafio Super Trunfo\n");
    printf("--------------------\n");

    char estado1, estado2;
    char codigo1[8], codigo2[8];
    char nomeCidade1[30],nomeCidade2[30];
    int habitantes1, habitantes2, pontosTuristicos1, pontosTuristicos2;
    float pib1, pib2, area1, area2; 

    // entrada dos dados da carta 1    
    printf("Entre com os dados da Carta 1:\n");
    printf("\n");
    printf("Estado: ");
    scanf("%c", &estado1);
    printf("Código: ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade1);
    printf("População: ");
    scanf("%d", &habitantes1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d\n", &pontosTuristicos1);

    // entrada de dados da carta 2
    printf("Entre com os dados da Carta 2:\n");
    printf("\n");
    printf("Estado: ");
    scanf("%c", &estado2);
    printf("Código: ");
    scanf("%s", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade2);
    printf("População: ");
    scanf("%d", &habitantes2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // exibindo dados da Carta 1
    printf("\n");
    printf("Carta 1\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
 
    return 0;
}

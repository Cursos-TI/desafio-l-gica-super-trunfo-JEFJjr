#include <stdio.h>

    int main() {
    char nome1[30], nome2[30], estado1[30], estado2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    double divisao;
//aqui serão inseridos e armazenados os dados de cada carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado:\n");
    scanf("%s", &estado1);
    printf("Nome da cidade: \n");
    scanf("%s", &nome1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área da cidade:\n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("Insira os dados da segunda carta:\n");
    printf("Estado:\n");
    scanf("%s", &estado2);
    printf("Nome da cidade: \n");
    scanf("%s", &nome2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área da cidade:\n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos2);

//sumario dos dados inseridos    
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área da cidade: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    printf("CONTRA\n");

    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    //comparativo e resultado da competição entre as duas cartas. Utilizando a função de divisão entre os valores inseridos pelo jogador.
    printf("Agora será analisado a densidade populacional de cada carta, que é feito ao dividir o número da população pela área do estado\n");
    if (divisao = (double)populacao1 / (double)area1 < (double)populacao2 / (double)populacao2){
        printf("A densidade populacional de Alagoas é maior que a de Pernambuco, portanto Pernambuco é o vencedor!\n");
        }
        else{
        printf("A densidade populacional de Pernambuco é maior que a de Alagoas, portanto Alagoas é a vencedora!\n");
    }
    

    return 0;
}

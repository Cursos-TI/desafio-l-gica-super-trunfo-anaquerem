#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // Variáveis da carta 1
     char estado1;
    char codigo1[6];
    char nomedacidade1[50];
    int populacao1;
    int pontosturisticos1;
    float area1 = 1654.11;
    float PIB1;

    // Variávies da carta 2

     char estado2;
    char codigo2[6];
    char nomedacidade2[50];
    int populacao2;
    int pontosturisticos2;
    float area2 = 3156.23;
    float PIB2;
    
    // Cadastro das Cartas 1 e 2:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Carta 1\n"); 

    printf("Digite o estado (A-H) \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade \n");
    scanf(" %[^\n]", nomedacidade1);

    printf("Digite o número da população \n");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a área da cidade \n");
    scanf("%f", &area1);

    printf("Digite o PIB \n");
    scanf("%f", &PIB1);


    printf("Carta 2\n");

    printf("Digite o estado (A-H) \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade \n");
    scanf(" %[^\n]", nomedacidade2);

    printf("Digite o número da população \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a área da cidade \n");
    scanf("%f", &area2);

    printf("Digite o PIB \n");
    scanf("%f", &PIB2);
   
    // Comparação de Cartas (Área)
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("Comparando as áreas da cidade 1 e 2 \n");
    if (area1 > area2) {
        printf("A cidade 1 tem maior área \n");
    } else {
        printf("A cidade 2 tem maior área \n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("A cidade %s é a vencedora e %s perdeu! \n", nomedacidade1, nomedacidade2);

    return 0;
        
}

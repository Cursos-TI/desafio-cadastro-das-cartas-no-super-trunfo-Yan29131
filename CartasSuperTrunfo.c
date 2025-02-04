#include <stdio.h>
    
    int main() {
    printf("Super trunfo!!\n");

    int codigo;
    char nome[50];
    long int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    // Solicitação dos dados ao usuário
    printf("Cadastro de Carta - Super Trunfo de Cidades\n");
    
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê uma string com espaços
    
    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao);
    
    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nCarta Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %ld habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}


























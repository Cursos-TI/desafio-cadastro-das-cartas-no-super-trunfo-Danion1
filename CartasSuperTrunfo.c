int main(){ //Cria o diretório onde vai se passar todo o código
    //aplica as variaveis para as cartas
    char estado[20], estado2[20], cdcard[20], cdcard2[20], nomec[20], nomec2[20]; 
    int populacao, populacao2, pturist, pturist2;
    float area, area2, pib, pib2, pibpc, pibpc2, densidade, densidade2, superpoder1, superpoder2, superpoder;

    //colhe as informações da primeira carta
    printf("Digite o estado da primeira carta(de A a H): ");
    scanf("%s", estado);
    
    printf("Digite o código da carta finalizados com um número de 1 a 4(ex: A01, A04, Z03): ");
    scanf("%s", cdcard);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomec);
    
    printf("Digite a população da carta: ");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turisticos há na carta:");
    scanf("%d", &pturist);

    printf("Digite a Área(km2): ");
    scanf("%f", &area);

    printf("Digite o PIB da carta: ");
    scanf("%f", &pib);

    //colhe as informações da segunda carta
    printf("Digite o estado da Segunda carta(de A a H): ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta finalizados com um número de 1 a 4(ex: A01, A04, Z03): ");
    scanf("%s", cdcard2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomec2);
    
    printf("Digite a população da carta: ");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turisticos há na carta:");
    scanf("%d", &pturist2);

    printf("Digite a Área(km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta: ");
    scanf("%f", &pib2);


    //Cálculo da pib per capita e da densidade populacional
    pibpc = pib / populacao;
    pibpc2 = pib2 / populacao2;
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    //calculo do super poder das cartas somando todas as caracteristacas mais o inverso da densidade(a menor densidade ganha)
    superpoder = populacao + pturist + area + pib + pibpc - densidade;
    superpoder2 = populacao2 + pturist2 + area2 + pib2 + pibpc2 - densidade2;
    

    //transforma em texto todas as informações das cartas utilizando \n para pular linhas e seus especificadores
    printf("carta 1: \n");
    printf("Estado - %s\n", estado);                       
    printf("Código da carta - %s\n", cdcard);           
    printf("Nome da cidade - %s\n",nomec);               
    printf("População da cidade - %d\n", populacao);          
    printf("Pontos turisticos - %d\n", pturist);
    printf("Área(km2) - %.2f km2\n", area);                    
    printf("PIB - %.2f Bilhões de reais\n", pib);           
    printf("PIB per Capita - %.2f reais\n", pibpc);
    printf("Densidade Populacional - %.2f habitantes/km2\n", densidade);             

    printf("carta 2: \n");
    printf("Estado - %s\n",estado2);
    printf("Código da carta - %s\n", cdcard2);
    printf("Nome da cidade - %s\n", nomec2);
    printf("População da Cidade - %d\n", populacao2);
    printf("Pontos turisticos - %d\n", pturist2);
    printf("Área(km2) - %.2f km2\n", area2);
    printf("PIB - %.2f Bilhões de reais\n", pib2);
    printf("PIB per Capita - %.2f reais\n", pibpc2);
    printf("Densidade Populacional - %.2f habitantes/km2\n", densidade2);


    //comparação das cartas
    printf("população: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos turisticos: %d\n", pturist > pturist2);
    printf("Densidade Populacional: %d\n", densidade > densidade2);
    printf("PIB per Capita: %d\n", pibpc > pibpc2);
    printf("Superpoder: %d\n", superpoder1 > superpoder2);


    return 0; //sinalizar que o código foi finalizado com sucesso
}
#include<stdio.h>
void sdtinclear(){
    int c; 
    //executa o getchar até que todas os caracteres sejam gravados
    while((c = getchar())!= '\n' && EOF);
}
void movlog(int type,char pecanome[]){
    char direction; int nhouses;
    printf("\n<<mover peça>>\n");

    switch(type){
        case 1:
        printf("\ndigite a direção desejada!!\n movimentos possiveis\nL para esquerda\nD para baixo\nU para cima\nR para esquerda\n\n");
        break;
    }
    direction = getchar();
    sdtinclear();

    printf("digite o numero de casas a serem percorridas!\n");
    scanf("%d",&nhouses);
    sdtinclear();
    
    printf("\nmovendo a peça %s para a ",pecanome);
    fflush(stdout);

    switch(type){
        //common
        case 1:
        switch (direction){
            case 'L': case 'l':
                printf("Esquerda %d Vezes!\n",nhouses);
                break;
            
            case 'D': case 'd':
                printf("Baixo %d Vezes!\n",nhouses);
                break;
            case 'U': case 'u':
                printf("Cima %d Vezes!\n",nhouses);
                break;
            case 'R': case 'r':
                printf("Direita %d Vezes!\n",nhouses);
                break; }
        //diagonal
        //in L 2 + dir-mv-c-(L|r|u|d)
    }
}
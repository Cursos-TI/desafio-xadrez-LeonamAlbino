#include<stdio.h>
void sdtinclear(){
    //executa o getchar até que todas os caracteres sejam gravados
    int c; 
    while((c = getchar())!= '\n' && EOF);
}
void movlog(int type,char pecanome[]){

    char direction; int nhouses,diagonal;
    printf("\n<<mover peça>>\n");

    switch(type){
        case 1:
        printf("\ndigite a direção desejada!!\n movimentos possiveis\nL para esquerda\nD para baixo\nU para cima\nR para esquerda\n\n");
        break;
        case 2:
        printf("digite a direção desejadaz\n\n1. superior esquerdo!   2. superior direito\n                      x\n3. inferior esquerdo    4. canto inferior direito\n");
        break;
    }
    switch(type){
        case 1:
        commondirectionset(&direction,&nhouses);
        break;
        case 2:
        diagonaldirectionset(&nhouses,&diagonal);
        break;
    }
    
    printf("\nmovendo a peça %s para a ",pecanome);
    fflush(stdout);
    
    switch(type){
//main movements            
    //common movements 
        //<cross>
            case 1:
            if (pecanome[5]){
                nhouses=1;
            }

            if (pecanome[3]){
                if(nhouses>1){
                    nhouses=2;
                }else{
                    nhouses=1;
                }
            }

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
                    break; 
            }
        //</cross>
            
        //<diagonal>
            case 2: 

            break;
        //</diagonal>
    //common movement end

    //knight mov
    //knight mov  end
    
//main movements end
    }
}
void commondirectionset(char *direction,int *nhouses){
    *direction = getchar();
    sdtinclear();

    printf("digite o numero de casas a serem percorridas!\n");
    scanf("%d",&(*nhouses));
    sdtinclear();
}
void diagonaldirectionset(int *nhouses,int *diagonal){
    scanf("%d",&diagonal);
    sdtinclear();
    printf("\ndigite o numero de casas a serem percorridas!\n");
    scanf("%d",&(*nhouses));
    sdtinclear();
}
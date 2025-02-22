//<includes>
    #include <stdio.h>
        #include <locale.h>
        #include "modulos/movconfig.h"
//</includes>

//<functionset>
    int tower(char *pecanome);
    int paw(char *pecanome);
    int bishop(char *pecanome);
//</functionset>

int main(void) {
//var area
    //um array que representa as peças a serem trabalhadas no projeto
    char *pecanome={
        "torre",
        "bispo",
        "cavalo",
        "peão",
        "rainha",
        "rei"
    };
    //seleção de movimento exclusivo do rei e da rainha que podem escolher entre os movimentos common e diagonal excluindo o cavalo tem tem um movimento proprio exclusivo
    int tslcqk[2]={1,2}; 
    //armazena o <user selection> do <menu>
    int pieceselector;
//var area fim

//menu area
    //<userselectioandexecuter>
        printf("qual peça deseja mover?\n\n1. torre\n");
        scanf("%d",&pieceselector);
        //faz uma faxina no buffer de entrada pra n dar problema depois
        int c;
        while((c = getchar())!= '\n' && EOF);;
        switch(pieceselector){
            case 1:
            tower(&pecanome);
            break;
            case 2:
            bishop(&pecanome);
            break;
        }
    //</userselectioandexecuter>
//menu area fim
    
//<EOP>
    //<pre-end>
    
    //</pre-end>

    //<end>
        return 0;
    //</end>
        
//</EOP>
    }
//functions area
    int paw(char *pecanome){
        movlog(1,pecanome[3]);
    }
    int tower(char *pecanome){
        movlog(1,pecanome[0]);
    }
    int bishop(char *pecanome){
        movlog(2,pecanome[1]);
    }
//functions area end
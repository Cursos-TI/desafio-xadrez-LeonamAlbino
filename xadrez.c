#include <stdio.h>
#include <locale.h>
#include "modulos/movconfig.h"
int tower();
int main(void) {
    
    int pieceselector;
    
    printf("qual peça deseja mover?\n\n1. torre\n");
    scanf("%d",&pieceselector);
    int c; 
    while((c = getchar())!= '\n' && EOF);;
 
    
    switch(pieceselector){
        case 1:
        tower();
    }
    return 0;
}
int tower(){
    char pecanome[20]="torre";
        movlog(1,pecanome);
}

#include <stdio.h>
#include <string.h>
#define TAM 5

//Apresentar siglas em posição correta, depois inversamente.

int main(){

    char siglas[TAM];
    int i;

    printf("Digite a primeira letra do seu nome e sobrenomes: \n");
    gets(siglas);

    printf("Ordem das siglas digitadas:\n");
    for(i=0; i<TAM; i++){
        printf("%c", siglas[i]);
    }

    for(i=4; i<=TAM; i--){
        printf("%c", siglas[i]);
        if(i==0){
            break;
        }
    }

    return(0);

}

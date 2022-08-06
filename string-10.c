#include <stdio.h>
#include <string.h>
int main(){
    char escolha[50];
    printf("Digite SIM ou NAO: \n");
    gets(escolha);
    if(strcmp(escolha,"SIM") == 0){ //strcmp = comparar string
        printf("1");
    }
    else if(strcmp(escolha,"NAO") == 0){
        printf("0");
    }
    return 0;
}

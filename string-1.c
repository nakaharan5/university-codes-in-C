#include <stdio.h>
#include <string.h>

int main(){
    char nome[256];

    printf("Digite um nome: \n");
    gets(nome);
    
	printf("%.4s", nome); //Delimitar quantas letras vai apresentar.

	return(0);
}

#include <stdio.h>
#include <string.h>

int main(){
	int tam;
	char nome[256];
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	tam = strlen(nome);
	
	printf("O nome possui essa quantidade de letras %d", tam);
	
	return(0);
}

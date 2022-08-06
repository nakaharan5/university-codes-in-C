#include <stdio.h>
#include <string.h>

int main(){
	char nome[50];
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	if(nome[0]=='A' || nome[0]=='a'){
		printf("%s", nome);
	} else {
		printf("Erro");
	}
	
	return(0);
}

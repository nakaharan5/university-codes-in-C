#include <stdio.h>
#include <string.h>

int main(){
	int i, b=-1;
	char string[100], auxiliar[100];
	
	printf("Digite um nome: \n");
	gets(string);
	
	for(i=0;string[i]!='\0';i++){
		b++;
	}
	for(i=0;string[b]!='\0'; i++){
		auxiliar[b]=string[i];
		b--;
	}
	
	if(string[i]==auxiliar[i]){
		printf("eh um palindromo");
	} else {
		printf("Nao eh um palindromo");
	}
	return(0);
}

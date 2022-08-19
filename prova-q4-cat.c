#include <stdio.h>
#include <string.h>

int main(){
	int i=2;
	char string1[100], string2[30];
	
	printf("Digite seu primeiro nome: \n");
	gets(string2);
	
	strcpy(string1,string2);
	
	do{
		printf("Digite seu sobrenome: \n");
		gets(string2);
		
		strcat(string1,string2);
		
		printf("Esse é seu nome completo?\nSim(1)\Nao(2)\n");
		scanf("%d",&i);
		
		if(i==1){
			i=1
		}
	} while(i==2);
	
	printf("%s\n", string1);
	printf("%d", strlen(string1));
	
	return(0);
}

#include <stdio.h>
#include <string.h>
int main(){
	
	float PORCENTAGEM,PORCENTAGEM1,PORCENTAGEM2,PORCENTAGEM3,PORCENTAGEM4;
	int idade, Q, MEDIA,soma=0, i=0 , j=0, A=0, B=0, C=0, D=0, E=0;
	char opiniao;
	
	while(j==0){
		
	printf("Insira sua idade: \n");
	scanf("%d",&idade);
	
	if(idade<0){
		break;
	}
	soma=soma+idade;
	i++;
	printf("De a sua opiniao do filme: \nA-OTIMO\nB-BOM\nC-REGULAR\nD-RUIN\nE-PESSIMO\n");
	printf("Insira sua opiniao: \n");
	scanf("%s",&opiniao);
	if(opiniao=='A'){
		A++;
	}
	if(opiniao=='B'){
		B++;
	}
	if(opiniao=='C'){
		C++;
	}
	if(opiniao=='D'){
		D++;
	}
	if(opiniao=='E'){
		E++;
	}
}
    Q=A+B+C+D+E;
	MEDIA=soma/i;
	PORCENTAGEM=(A*100)/i;
	PORCENTAGEM1=(B*100)/i;
	PORCENTAGEM2=(C*100)/i;
	PORCENTAGEM3=(D*100)/i;
	PORCENTAGEM4=(E*100)/i;
	printf("Quantidade de pessoas: %d\n",i);
	printf("Media da idades das pessoas: %d\n",MEDIA);
	printf("Porcentagem das letras: A:%.2f\n",PORCENTAGEM);
	printf("Porcentagem das letras: B:%.2f\n",PORCENTAGEM1);
	printf("Porcentagem das letras: C:%.2f\n",PORCENTAGEM2);
	printf("Porcentagem das letras: D:%.2f\n",PORCENTAGEM3);
	printf("Porcentagem das letras: E:%.2f\n",PORCENTAGEM4);
return 0;
}

#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
char s1[256],s2[256],s3[256],invertida[256],letra;
int i,j=0,tam;
setlocale(LC_ALL,"portuguese");
printf("Digite a string:\n");
gets(s1);
printf("Digite a segunda string:\n");
gets(s2);
printf("Digite a terceira string:\n");
gets(s3);
printf("Digite uma opção:\n1- Imprimir o tamanho da stringS1.\n");
printf("\t2- Comparar a primeira e segunda string e imprimir o resultado da comparação.\n");
printf("\t3- Concatenar a primeira string com uma terceira string e imprimir o resultado da concatenação.\n");
printf("\t4- Imprimir primeira string de forma invertida.\n");
printf("\t5- Contar quantas vezes um dado se repete na primeira string. E informar o caractere para o usuário.\n");
printf("\t6- Torne os valores da S todos maiúsculos.\n");
printf("\t7- Torne os valores da S1 todos minúsculos.\n");
printf("\t8- Encerrar programa.\n");
scanf("%d",&i);
switch(i){
case 1:
tam = strlen(s1);
printf("%d\n",tam);
break;
case 2:
if(strcmp(s2,s1)){
printf("São diferentes.\n");
}else{
printf("São iguais.\n");
}
break;
case 3:
strcat(s1,s3);
printf("%s\n",s1);
break;
case 4:
for(i=strlen(s1)-1;i>=0;i--){
invertida[j] = s1[i];
j+=1;
}
invertida[j] = '\0';
printf("%s\n",invertida);
break;
case 5:
printf("Informe um caracter:\n");
getchar();
scanf("%c",&letra);
tam =strlen(s1);
for(i=0;i<=tam;i++){
if(s1[i]==letra){
j+=1;
}
}
printf("%d\n",j);
break;
case 6:
strupr(s1);
printf("%s\n",s1);
break;
case 7:
strlwr(s1);
printf("%s\n",s1);
break;
case 8:
printf("PROGRAMA ENCERRADO!\n");
break;
default:
printf("Opção Inválida.\n");
break;
}
return 0;
}

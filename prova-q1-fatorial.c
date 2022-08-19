#include <stdio.h>

int main(){
    int i, j=0, x, fat=1;

    while(j==0){

    printf("Digite um valor: \n");
    scanf("%d", &x);
    
    for(i=x;i>=1;i--){
        fat= fat*i;
    }
    if(x<0){
        break;
    } else if(x==0){
    
    }
    printf("%d", fat);
    fat=1;
    }

    return(0);
}

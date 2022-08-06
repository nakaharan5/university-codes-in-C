#include <stdio.h>
#include <string.h>
int main(){
	
        int i = 100;
        char str[i];
        gets(str);
        
        for(i=0;str[i];i++){
			printf("%c", str[i]);
			
			if(str[i]==' '){
				printf("\n");
			}
		}
		return(0);
}

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    //título do programa
    SetConsoleTitle("Cronometro");
    
    //variáveis
    int sec=0;//segundos
    int min=0;//minutos
    int hr=0;//horas
    
    int i=0;//controle do loop
        
    do {
        system("cls");//limpa a tela
        
        printf("Cronometro\n\n");
        
        printf("\n\t\t\t\t%dh:%dm:%ds\n\n", hr,min,sec);
        
        if(sec==60){
            sec=0;
            min++;
        }
        
        if(min==60){
            min=0;
            hr++;
        }
        
        if(hr==24){
            hr=0;
        }
        
        Sleep(1000);//tem a função de pausar a execução por um determinado tempo
        sec++;
        
    }while (i==0);//condição para o loop infinito
 
    system("pause");
    return 0;
}
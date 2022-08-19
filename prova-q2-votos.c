#include <stdio.h>

int main(){
    int i=0, ib=0,j=0, votos, v1=0,v2=0,v3=0,v4=0, vb=0, vn=0, totalv, totali, a=0;
    float p1, p2, p3, p4, pbn;
 
    while(j==0){
        printf("Registre seu voto (Arthur-1/Thiago-2/Brejo-3/Felipe-4/Nulo-5/Branco-6):\n");
        scanf("%d", &votos);

        switch(votos){

            case 1:
            i++;
            v1++;
            a++;
            break;

            case 2:
            i++;
            v2++;
            a++;
            break;

            case 3:
            i++;
            v3++;
            a++;
            break;

            case 4:
            i++;
            v4++;
            a++;
            break;

            case 5:
            ib++;
            vn++;
            a++;
            break;

            case 6:
            ib++;
            vb++;
            a++;
            break;

            default:
            printf("VOcê não escolheu nenhum candidato ou opcao\n");
            break;
        }
        totalv = i;
        totali = ib;
        p1= (v1*100)/i;
        p2= (v2*100)/i;
        p3= (v3*100)/i;
        p4= (v4*100)/i;
        pbn= (ib*100)/a;
        if(votos==0){
			break;
		}
    } 
    
        printf("Arthur - Total: %d / Porcentagem: %.1f\n", v1,p1);
        printf("Thiago - Total: %d / Porcentagem: %.1f\n", v2,p2);
        printf("Brejo - Total: %d / Porcentagem: %.1f\n", v3,p3);
        printf("Felipe - Total: %d / Porcentagem: %.1f\n", v4,p4);
        printf("Total de votos nulos: %d\n", vn);
        printf("Total de votos brancos: %d\n", vb);
        printf("Percentual total dos votos brancos e nulos: %.1f\n", pbn);
        
        if(v1>(v2+v3+v4)){
			printf("Arthur obteve mais votos que os outros candidatos\n");
		} else if(v2>(v1+v3+v4)){
			printf("Thiago obteve mais votos que os outros candidatos\n");
		} else if (v3>(v1+v2+v4)){
			printf("Brejo obteve mais votos que os outros candidatos\n");
		} else if (v4>(v1+v2+v3)){
			printf("Felipe obteve mais votos que os outros candidatos\n");
		}
    return(0);
}

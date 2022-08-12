#include <stdio.h>
int main(int argc, char** argv)
{
	float resnum, somanum = 0, parada, i;
	printf("Digite um numero\n");
	scanf("%f",&parada);
	for(i=1;i<=parada;i++)
	{
		resnum = i / (i*i);
		somanum = somanum + resnum;
	//	x++;
	//	s1=s1+s;
	}
	printf("%.2f",somanum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int idade;

int main()
{
	printf("Qual sua idade?");
	scanf("%d" , &idade);
	
	int verificado = idade * 365;
	
	if(verificado > 6570){
		printf("Maior de idade");
	} else {
        printf("Menor de idade");
		}
	}
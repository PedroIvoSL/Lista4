#include<stdio.h>

int main(){

	printf("Possibilidades:\n");

	int resultado,dado1,dado2;

	for(dado1=1;dado1<=6;dado1++){
		for(dado2=1;dado2<=6;dado2++){
		    if(dado1+dado2==7){
			        resultado = dado1+dado2;
			    printf(" %d + %d = %d\n",dado1,dado2,resultado);
			}
		}
	}
	return 0;
}
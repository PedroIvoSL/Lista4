#include<stdio.h>
#include<locale>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i, num;
	float num_par, total_par, media_par;

	printf("Para sair do programa digite \"-1\"\n");

	do{

		printf("DIgite um número inteiro: ");
		scanf("%d", &num);
		fflush(stdin);

		if(num % 2 ==0 && num !=0){
			num_par = num_par + num;
			total_par++;
		}

	}while(num !=-1);

	media_par = num_par/total_par;

	printf("\n\nA média dos números pares é: %.1f", media_par);

	return 0;
}
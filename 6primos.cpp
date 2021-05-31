#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

	int i, x, n1, n2, n_maior, n_menor;

	do{
		printf("Digite o um valor inteiro para \"N1\": ");
		scanf("%d", &n1);
		fflush(stdin);

		printf("Digite o um valor inteiro para \"N2\": ");
		scanf("%d", &n2);
		fflush(stdin);
	}while(n1<1&&n2<1);

	if(n1>n2){
		n_maior = n1;
		n_menor = n2;}
		else {n_maior = n2;
			 n_menor = n1;}

			while(n_menor<=n_maior){
				x=0;
				for(i=2;i<=n_menor-1;i++){
					if(n_menor%i ==0)
					x=1;
					}
				if(x==0)
					printf("\n%d", n_menor);
			n_menor++;}

	return 0;
}
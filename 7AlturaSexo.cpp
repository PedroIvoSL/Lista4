#include<stdio.h>
#include<ctype.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); // Ajuste para aceitar a acentuação do Português

int maior, menor,contador,altura, altura_m, media, mulheres;
char sexo;
	contador = 1;
	mulheres = 0;

	while(contador<=50){
		printf("Digite a altura da %dª pessoa em cm: ", contador);
		scanf("%d",&altura);
		fflush(stdin);

		printf("Digite o sexo da %dª pessoa [F|M]: ", contador);
		scanf("%c",&sexo);
		fflush(stdin);
			sexo = toupper(sexo);
			if(altura<10){
				printf("Altura inválida! \nInformar a altura em centímetros!: ");
				scanf("%d", &altura);
				fflush(stdin);}
			else {
				if(contador == 1){
					menor = altura;
					maior = altura;}
				if(menor > altura)
					menor = altura;
				if(maior < altura)
					maior = altura;
				if(sexo == 'F'){
					altura_m = altura_m + altura;
					mulheres++;}
				}
		contador++;
	}

	media = altura_m/mulheres;

	printf("\nA Menor Altura é %d\n",menor);
	printf("\nA Maior Altura é %d\n",maior);
	printf("\nA Média de altura das mulheres é %d\n",media);

return 0;

}
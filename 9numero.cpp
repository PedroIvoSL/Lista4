#include<stdio.h>
#include<locale>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int num_imaginado, chutes, i=1;

	printf("Que número você imaginou?: ");
	scanf("%d", &num_imaginado);
	fflush(stdin);


	while(chutes != num_imaginado){

		printf("%d° chute: ", i);
		scanf("%d", &chutes);
		fflush(stdin);

		if(chutes<num_imaginado)
			printf("\nMais\n\n");
			else if(chutes>num_imaginado)
				printf("\nMenos\n\n");
					else printf("\nAcertou!\n\n");


		i++;
	}

	printf("\nO número imaginado foi: %d", num_imaginado);

	return 0;
}
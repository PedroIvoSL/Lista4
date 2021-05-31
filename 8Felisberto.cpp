#include<stdio.h>
#include<locale>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i = 0;
	float anacleto, felisberto;

	anacleto = 1.5;
	felisberto = 1.1;

	while(felisberto<anacleto){
		anacleto = anacleto + 0.02;
		felisberto = felisberto + 0.03;
		i++;

		printf("Ano %d - altura Anacleto: %.2f | altura Felisberto: %.2f\n", i, anacleto, felisberto);
	};

	printf("\n\nAnos necessários para Felisberto ultrapassar Anacleto: %d", i);

	return 0;
}
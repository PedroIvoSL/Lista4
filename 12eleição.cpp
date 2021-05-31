#include<stdio.h>
#include<locale>
int main(){
	setlocale(LC_ALL, "Portuguese");

	int voto;
	float i, perc_cadidato1, perc_cadidato2, perc_cadidato3, perc_cadidato4, perc_nulo, perc_branco;
	float candidato_1, candidato_2, candidato_3, candidato_4, nulo, branco;

	do{
		printf("Digite o número do candidato escolhido sendo: 1 a 4 para os respectivos candidatos, 5 para nulo ou 6 para branco\n");
		printf("Para finalizar a entrada de votos digite \"0\"\nInforme o número do candidato: ");
		scanf("%d", &voto);
		fflush(stdin);

		switch(voto){

			case 1: printf("\nVoto computado com sucesso para o candidato 1\n\n");
					candidato_1++;
					i++; break;
			case 2: printf("\nVoto computado com sucesso para o candidato 2\n\n");
					candidato_2++;
					i++; break;
			case 3: printf("\nVoto computado com sucesso para o candidato 3\n\n");
					candidato_3++;
					i++; break;
			case 4: printf("\nVoto computado com sucesso para o candidato 4\n\n");
					candidato_4++;
					i++; break;
			case 5: printf("\nVoto nulo computado com sucesso\n\n");
					nulo++;
					i++; break;
			case 6: printf("\nVoto branco computado com sucesso\n\n");
					branco++;
					i++; break;
			case 0: printf("\nEncerrado\n\n");break;
			default: printf("\nOpção inválida!\n\n");
		};

	system("pause");
	system("cls");

	}while(voto != 0);

	perc_cadidato1 = (candidato_1/i)*100;

	perc_cadidato2 = (candidato_2/i)*100;

	perc_cadidato3 = (candidato_3/i)*100;

	perc_cadidato4 = (candidato_4/i)*100;

	perc_nulo = (nulo/i)*100;

	perc_branco = (branco/i)*100;

	printf("\nFim da eleição!\n\n\nCandidato 1 - %.0f votos - %.1f%% dos votos", candidato_1,perc_cadidato1);
	printf("\nCandidato 2 - %.0f votos - %.1f%% dos votos", candidato_2,perc_cadidato2);
	printf("\nCandidato 3 - %.0f votos - %.1f%% dos votos", candidato_3,perc_cadidato3);
	printf("\nCandidato 4 - %.0f votos - %.1f%% dos votos", candidato_4,perc_cadidato4);
	printf("\nNulos - %.0f votos - %.1f%% dos votos", nulo,perc_nulo);
	printf("\nBrancos - %.0f votos - %.1f%% dos votos", branco,perc_branco);

	return 0;
}
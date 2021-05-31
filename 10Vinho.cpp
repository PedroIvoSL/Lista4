#include<stdio.h>
#include<locale>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

	int i=1;
	float total=0, tinto=0, branco=0, rose=0,perc_tinto, perc_branco, perc_rose;
	char vinho;

	printf("Para adicionar um vinho ao estoque informe o tipo do vinho:\n\nT - tinto\nB - branco\nR - rosê\n\n");
	printf("Caso queira finalizar a entrada de vinhos, digite X\n\n");

	do{
		printf("%dª garrafa [T,B ou R]: ", i);
		scanf("%c", &vinho);
		fflush(stdin);

		vinho = toupper(vinho);

		switch(vinho){
			case 'T': tinto++;
					  total++; break;
			case 'B': branco++;
					  total++; break;
			case 'R': rose++;
					  total++; break;
			case 'X': printf("\n\nEntrada de vinho no estoque finalizada!");break;
			default: printf("\nOpção Inválida!\n");
		};

		i++;

	}while(vinho != 'F');

	perc_tinto = (tinto/total)*100;
	perc_branco = (branco/total)*100;
	perc_rose = (rose/total)*100;

	printf("\n\nNo estoque temos um total de %.0f garrafas de vinho, sendo:\n\n%.1f%% de vinho tinto\n%.1f%% de vinho branco\n%.1f%% de vinho rosê", total, perc_tinto, perc_branco, perc_rose);

	return 0;
}
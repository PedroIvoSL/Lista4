#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes;

	printf("Digite o dia de nascimento: ");
	scanf("%d", &dia);
	printf("Digite o mês de nascimento: ");
	scanf("%d", &mes);

	if(mes == 3 && dia >= 21 && dia <= 31 || mes == 4 && dia >= 1 && dia <= 20){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Áries!\n", dia,mes);
	}
	else if(mes == 4 && dia >= 21 && dia <= 30 || mes == 5 && dia >= 1 && dia <= 20){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Touro!\n", dia,mes);
	}
	else if(mes == 5  && dia >= 21 && dia <= 31 || mes == 6 && dia >= 1 && dia <= 20){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Gemêos!\n", dia,mes);
	}
	else if(mes == 6 && dia >= 21 && dia <= 30 || mes == 7 && dia >= 1 && dia <= 21){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Câncer!\n", dia,mes);
	}
	else if(mes == 7  && dia >= 22 && dia <= 31 || mes == 8 && dia >= 1 && dia <= 22){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Leão!\n", dia,mes);
	}
	else if(mes == 8 && dia >= 23 && dia <= 31 ||mes == 9 && dia >= 1 && dia <= 22){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Virgem!\n", dia,mes);
    }
	else if(mes == 9  && dia >= 23 && dia <= 30 || mes == 10 && dia >= 1 && dia <= 22){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Libra!\n", dia,mes);
    }
	else if(mes == 10  && dia >= 23 && dia <= 31 || mes == 11 && dia >= 1 && dia <= 21){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Escorpião!\n", dia,mes);
    }
	else if(mes == 11 && dia >= 22 && dia <= 30 || mes == 12 && dia >= 1 && dia <= 21){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Sagitário!\n", dia,mes);
	}
	else if(mes == 11 && dia >= 22 && dia <= 31 || mes == 12 && dia >= 1 && dia <= 20){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Capricórnio!\n", dia,mes);
	}
	else if(mes == 1 && dia >= 21 && dia <= 31 || mes == 12 && dia >= 1 && dia <= 19){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Aquário!\n", dia,mes);
	}
	else if(mes == 2 && dia >= 20 && dia <= 29 || mes == 3 && dia >= 1 && dia <= 20){
		printf("De acordo com a data informada \"%d/%d\" o seu signo e Peixes!\n", dia,mes);
	}
	else printf("Dia ou mês informado é inválido!");

	return 0;
}
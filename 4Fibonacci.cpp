#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, i, n = 20, soma;
	printf("A série Fibonacci é uma sucessão de números, iniciada em 0,1 e os números seguintes são sempre\n");
 	printf("a soma dos dois números anteriores.\n");

    num1 = 0;
    num2 = 1;

	for(i = 2; i <= n; i++){
		soma = num1 + num2;
		num1 = num2;
		num2 = soma;
		printf("%d\n",soma);
	}
}
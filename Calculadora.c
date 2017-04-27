#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int resultado;
	int num1;
	int num2;
	char operacao;
	printf("Informe uma operacao(+,-,*,/):");
	scanf("%c",&operacao);
	printf("Digite um numero:");
	scanf("%i",&num1);
	printf("Digite outro numero:");
	scanf("%i",&num2);
	
	if(operacao=='+'){
		resultado=(num1+num2);
	}
	if(operacao=='-'){
		resultado=(num1-num2);
	}
	if(operacao=='*'){
		resultado=(num1*num2);
	}
	if(operacao=='/'){
		resultado=(num1/num2);
	}
	printf("%i",resultado);
	getch();
	
	return 0;
}

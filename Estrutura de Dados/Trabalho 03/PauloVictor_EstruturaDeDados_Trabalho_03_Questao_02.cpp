#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//� Crie uma struct para controlar a��es de uma bolsa de valores com as seguintes informa��es:
// Nome da empresa
// �rea de atua��o da empresa
// Valor atual da a��o (em reais)
// Valor anterior
// Varia��o da a��o em porcentagem (double), ou seja, quanto a a��o cresceu ou caiu desde a abertura da bolsa no dia.

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	struct acao_bolsa{
		char empresa[100];
		char atuacao[100];
		float valor_atual;
		float valor_anterior;
		double variacao;
	};
	
// Fa�a um programa que:
// a) Preencha os campos da struct do exerc�cio anterior
// b) Imprima os campos da struct do exerc�cio anterior
// c) Com um la�o, preencha 3 structs (vetor de structs)

	struct acao_bolsa bolsa[2];
	
	printf("\n---------- BOLSA DE VALORES -----------\n\n\n");
	
	for (int i=1; i<=3; i++){
		printf("\nEmpresa N� %d\n", i);
		
		printf("Nome da empresa ......: ");
		scanf("%s", bolsa[i].empresa);
		
		printf("Atua��o da empresa ...: ");
		scanf("%s", bolsa[i].atuacao);
		
		printf("Informe o valor atual .: ");
		scanf("%f", &bolsa[i].valor_atual);
		
		printf("Informe o valor anterior ..: ");
		scanf("%f", &bolsa[i].valor_anterior);
		
		printf("Informe a varia��o ...: ");
		scanf("%lf", &bolsa[i].variacao);
	}
	
	for (int i=1; i<=3; i++){
		printf("\nEmpresa N� %d\n", i);
		printf("Nome da empresa ......: %s\n", bolsa[i].empresa);
		printf("Atua��o da empresa ...: %s\n", bolsa[i].atuacao);
		printf("Valor atual ..........: R$ %.2f\n", bolsa[i].valor_atual);
		printf("Valor anterior .......: R$ %.2f\n", bolsa[i].valor_anterior);
		printf("Valor atual ..........: %.2lf \%\n", bolsa[i].variacao);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//– Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informações:
// Nome da empresa
// Área de atuação da empresa
// Valor atual da ação (em reais)
// Valor anterior
// Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu desde a abertura da bolsa no dia.

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	struct acao_bolsa{
		char empresa[100];
		char atuacao[100];
		float valor_atual;
		float valor_anterior;
		double variacao;
	};
	
// Faça um programa que:
// a) Preencha os campos da struct do exercício anterior
// b) Imprima os campos da struct do exercício anterior
// c) Com um laço, preencha 3 structs (vetor de structs)

	struct acao_bolsa bolsa[2];
	
	printf("\n---------- BOLSA DE VALORES -----------\n\n\n");
	
	for (int i=1; i<=3; i++){
		printf("\nEmpresa N° %d\n", i);
		
		printf("Nome da empresa ......: ");
		scanf("%s", bolsa[i].empresa);
		
		printf("Atuação da empresa ...: ");
		scanf("%s", bolsa[i].atuacao);
		
		printf("Informe o valor atual .: ");
		scanf("%f", &bolsa[i].valor_atual);
		
		printf("Informe o valor anterior ..: ");
		scanf("%f", &bolsa[i].valor_anterior);
		
		printf("Informe a variação ...: ");
		scanf("%lf", &bolsa[i].variacao);
	}
	
	for (int i=1; i<=3; i++){
		printf("\nEmpresa N° %d\n", i);
		printf("Nome da empresa ......: %s\n", bolsa[i].empresa);
		printf("Atuação da empresa ...: %s\n", bolsa[i].atuacao);
		printf("Valor atual ..........: R$ %.2f\n", bolsa[i].valor_atual);
		printf("Valor anterior .......: R$ %.2f\n", bolsa[i].valor_anterior);
		printf("Valor atual ..........: %.2lf \%\n", bolsa[i].variacao);
	}
}

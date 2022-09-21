#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um programa que cadastre o nome, a matrícula e duas notas de 5 alunos.
// Em seguida imprima a matrícula, o nome e a média de cada um deles.

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	struct aluno{
		char nome[15];
		int matricula;
		float nota1;
		float nota2;
	};
	
	struct aluno alunos[4];
	
	printf("\n---------- Cadastro de Alunos -----------\n\n\n");
	
	for (int i=1; i<=5; i++){
		printf("\n\nAluno N° %d\n\n\n", i);
		
		printf("Nome do aluno ......: ");
		scanf("%s", alunos[i].nome);
		
		printf("Informe a matricula ..: ");
		scanf("%d", &alunos[i].matricula);
		
		printf("Informe a 1° nota ..: ");
		scanf("%f", &alunos[i].nota1);
		
		printf("Informe a 2° nota ..: ");
		scanf("%f", &alunos[i].nota2);
	}
	
	printf("\n\n --------- Relação de Alunos ---------\n\n");
	for (int i=1; i<=5; i++){
    	printf("\n\nAluno N° %d\n\n\n", i);
		printf("Nome ...........: %s\n\n", alunos[i].nome);
		printf("Matrícula ......: %d\n\n", alunos[i].matricula);
		printf("Média ..........: %.2f\n\n" , (alunos[i].nota1+alunos[i].nota2)/2);
	}
}

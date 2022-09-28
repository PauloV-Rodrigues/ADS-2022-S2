#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#define TAM_AGENDA 10

struct Contato{
	char nome[30];
	char telefone[11];
	char empresa[30];
};

void mostrarMenu();
void cadastrar(struct Contato ag[], int *qtd);
void consultar(struct Contato ag[], int qtd);
void alterar(struct Contato ag[], int qtd);
void excluir(struct Contato ag[], int qtd);

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int quantidade = 0;
	int opcao;
	struct Contato agenda[TAM_AGENDA];
	
	do{
		mostrarMenu();
		printf("\n\nEscolha uma opção: ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao){
			case 1:
				cadastrar(agenda, &quantidade);
				break;
				
			case 2:
				consultar(agenda, quantidade);
				break;
			
			case 3:
				alterar(agenda, quantidade);
				break;
			
			case 4:
				excluir(agenda, quantidade);
				break;
		}
		
	}while(opcao!=5);
	
	return 0;
}

void mostrarMenu(){
	system("cls");
	printf("----------------|| AGENDA TELEFÔNICA ||----------------\n");
	printf("1- Cadastrar\n");
	printf("2- Consultar\n");
	printf("3- Alterar\n");
	printf("4- Deletar\n");
	printf("5- Sair\n");
}

void cadastrar(struct Contato ag[], int *qtd){
	if(*qtd == TAM_AGENDA){
		system("cls");
		printf("AGENDA LOTADA!");
	}else{
		system("cls");
		printf("----------------|| CADASTRAR CONTATO N° %d ||----------------\n", *qtd);
		printf("Digite o nome do contato: ");
		gets(ag[*qtd].nome);
		printf("Digite o telefone do contato: ");
		gets(ag[*qtd].telefone);
		printf("Digite a empresa do contato: ");
		gets(ag[*qtd].empresa);
				
		(*qtd)++;
		fflush(stdin);
	}
}

void consultar(struct Contato ag[], int qtd){
	int posicao;
	system("cls");
	printf("----------------|| CONSULTAR CONTATO ||----------------\n");
	printf("Digite a posição do contato que deseja consultar: ");
	scanf("%i", &posicao);
	
	if(posicao > qtd){
		system("cls");
		printf("CONTATO INEXISTENTE!");
	}else{
		fflush(stdin);
		printf("\nNome: %s", ag[posicao].nome);
		printf("\nTelefone: %s", ag[posicao].telefone);
		printf("\nEmpresa: %s", ag[posicao].empresa);
		printf("\n--------------------------------\n");
		system("pause");
	}
}

void alterar(struct Contato ag[], int qtd){
	int posicao;
	system("cls");
	printf("----------------|| ALTERAR CONTATO ||----------------\n");
	printf("Informe a posição do contato: ");
	scanf("%i", &posicao);
	
	if(posicao > qtd){
		system("cls");
		printf("CONTATO INEXISTENTE!");
	}else{
		fflush(stdin);
		printf("\nDigite o nome do contato: ");
		scanf("%s", ag[posicao].nome);
		printf("Digite o telefone do contato: ");
		scanf("%s", ag[posicao].telefone);
		printf("Digite a empresa do contato: ");
		scanf("%s", ag[posicao].empresa);
		printf("--------------------------------\n");
		system("pause");
	}
}

void excluir(struct Contato ag[], int qtd){
	int posicao;
	system("cls");
	printf("----------------|| EXCLUIR CONTATO ||----------------\n");
	printf("Informe a posição do contato: ");
	scanf("%i", &posicao);
	
	for(int i=posicao; i<qtd; i++){
		strcpy(ag[i].nome, ag[i+1].nome);
		strcpy(ag[i].telefone, ag[i+1].telefone);
		strcpy(ag[i].empresa, ag[i+1].empresa);
	}
}

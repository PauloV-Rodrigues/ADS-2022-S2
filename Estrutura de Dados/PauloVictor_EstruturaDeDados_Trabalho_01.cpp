#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Função para mostrar MENU DE OPÇÕES
void showMenu(){
	printf("----------------|| MENU DE OPÇÕES ||----------------\n");
	printf("\nDigite 1 - para criar um vetor com 10 números aleatórios");
	printf("\nDigite 2 - para mostrar o elemento de maior valor do vetOriginal");
	printf("\nDigite 3 - para contabilizar quantos elementos são pares no vetOriginal");
	printf("\nDigite 4 - para mostrar o valor do somatório dos elementos do vetOriginal");
	printf("\nDigite 5 - para mostrar os elementos do vetorOriginal na ordem inversa");
	printf("\nDigite 6 – para ordenar o vetor crescentemente");
	printf("\nDigite 7 - para sair");
}

// Função para criar um vetor com 10 números aleatórios
void createVector(int v[]){
	int i;
	srand(time(NULL));
	
	// Popular o vetor
	for(i=0; i<10; i++){
		v[i]=(rand()%101);
	}
	
	// Printar o vetor na tela
	printf("Vetor gerado: [ ");
	for(i=0; i<10; i++){
		printf("%d ", v[i]);
	}
	printf("]");
}

// Função para mostrar o elemento de maior valor do vetOriginal
void biggestNumber(int v[]){
	int i, bigger = v[0];
	for(i=0; i<10; i++){
		if(v[i]>bigger){
			bigger=v[i];
		}
	}
	printf("O maior valor do vetor é: %d", bigger);
}

// Função para contabilizar quantos elementos são pares no vetOriginal
void evenNumbers(int v[]){
	int sumEven, i;
	for(i=0; i<10; i++){
		int even = v[i];
		if(even%2==0){
			sumEven++;
		}
	}
	printf("Existem %d números pares no vetor", sumEven);
}

// Função para mostrar o valor do somatório dos elementos do vetOriginal
void sumVet(int v[]){
	int sumNumbers, i;
	for(i=0; i<10; i++){
		sumNumbers = sumNumbers+v[i];
	}
	printf("Soma dos itens do vetor é: %d", sumNumbers);
}

// Função para mostrar os elementos do vetorOriginal na ordem inversa
void invertVector(int v[]){
	int i;
	int vetInvertido[9];
		
	printf("Vetor original: [ ");
	for(i=0; i<10; i++){
		printf("%d ", v[i]);
	}
	printf("]\n");
				
	for(i=0; i<10; i++){
		vetInvertido[i] = v[10-i-1];
	}
				
	printf("Vetor invertido: [ ");
	for(i=0; i<10; i++){
		printf("%d ", vetInvertido[i]);
	}
	printf("]");
}

void orderVector(int v[]){
	int i, j, aux;
	int vetOrdenado[10];
	
	printf("Vetor original: [ ");
	for(i=0; i<10; i++){
		printf("%d ", v[i]);
	}
	printf("]\n");
	
	for(i=0; i<10; i++){
		vetOrdenado[i] = v[i];
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(vetOrdenado[j] > vetOrdenado[i]){
				aux = vetOrdenado[i];
				vetOrdenado[i] = vetOrdenado[j];
				vetOrdenado[j] = aux;
			}
		}
	}
	
	printf("Vetor ordenado: [ ");			
	for(i=0; i<10; i++){
		printf("%d ", vetOrdenado[i]);
	}
	printf("]");
}

// Função para sair
void exit(){
	printf("\n ----| Obrigado por usar nossos serviços! |----");
}

// Função para tentar novamente
void error(){
	printf("Ops... Parece que você digitou um valor inválido. Vamos tentar novamente?\n\n");
	printf("----------------|| MENU DE OPÇÕES ||----------------\n");
	printf("\nDigite 1 - para criar um vetor com 10 números aleatórios");
	printf("\nDigite 2 - para mostrar o elemento de maior valor do vetOriginal");
	printf("\nDigite 3 - para contabilizar quantos elementos são pares no vetOriginal");
	printf("\nDigite 4 - para mostrar o valor do somatório dos elementos do vetOriginal");
	printf("\nDigite 5 - para mostrar os elementos do vetorOriginal na ordem inversa");
	printf("\nDigite 6 – para ordenar o vetor crescentemente");
	printf("\nDigite 7 - para sair");
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int choice, vetOriginal[9];
	
	showMenu();
	
	while(choice != 7){
		printf("\n\nEscolha uma opção: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				createVector(vetOriginal);
				break;
			
			case 2:
				biggestNumber(vetOriginal);
				break;
				
			case 3:
				evenNumbers(vetOriginal);
				break;
			
			case 4:
				sumVet(vetOriginal);
				break;
			
			case 5:
				invertVector(vetOriginal);
				break;
				
			case 6:
				orderVector(vetOriginal);
				break;
			
			case 7:
				exit();
				break;
							
			default:
				error();
				break;
		}
	}
}

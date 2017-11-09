/*
 ============================================================================
 Name        : FernandoMoreiraMendes.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int somarVetor(int *vet);
float digitaNum();
void aumentoSalario();

int main(void) {
	setbuf(stdout, NULL);

	int opcao, vet[2], resultado, i, pVet;

	do{

		printf("\nMenu\n"
				"1- Para exibir a solução da questão 10\n"
				"2- Para exibir a solução da questão 12\n"
				"3- Finalizar execução.\n");
		printf("Digite a opção.");
		fflush(stdin);
		scanf("%d", &opcao);
		switch (opcao){
		case 1:
			for(i=0; i < 2; i++){
				do{
					printf("Digite um número inteiro: ");
					scanf("%d", &vet[i]);
					if(vet[i]< 0 ){
						printf("Número inválido. Digite novametne.");
					}
				}while (vet[i]<0);
			}
			//pVet = vet; //Amanda - Não precisa passar para o ponteiro, faça isto através da passagem de parámetro.
			resultado = somarVetor(&vet);
			printf("Resultado da soma é: %d", resultado);
			break;
		case 2:
			aumentoSalario();
			break;
		case 3:
			break;
		default:
			break;
		}
	}while(opcao!=3);


	return 0;
}

int somarVetor(int *vet){
	int soma=0, i, j, prim, segu;
	prim = *vet+1;
	j = vet++;
	segu = *vet-1;

	for(i = prim; i <= segu; i++){
		soma += i;
	}


	return soma;
}

float digitaNum(){
	float num;
	do{
		printf("Digite um numero decimal: ");
		scanf("%f", &num);
		if(num < 0 ){
			printf("Número inválido. Digite novamente.");
		}
	}while(num<0);

	return num;

}
void aumentoSalario(){
	float salarioInicial, salarioFinal, porcentagem;
	salarioInicial = digitaNum();
	salarioFinal = digitaNum();

	porcentagem = (salarioInicial*100)/salarioFinal;
	printf("Porcentagem do salario: %.2f", porcentagem);

}

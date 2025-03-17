//programa que receba inf de uma pessoa e sejam armazenadas em
//uma struct com os atributos nome, idade e altura

//crie também uma função chamada crescer que irá receber um ponteiro
//que aponta para a struct pessoa e irá alterar os atributos idade e altura

//imprima o resultado no final do programa


#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "pt_BR.utf8");

 struct dadosPessoa{ //a struct é um tipo de dado criado e precisa ser chamado 
	
	char nome[50];
	int idade;
	float altura;
	
};

struct dadosPessoa pessoa; //criacao da variavel usando o tipo de dado feito na struct

void crescer (struct dadosPessoa  *p){
		
		p-> idade+=1;
		p-> altura+=0.05;
	}


	printf("Informe os dados da pessoa:\n");
	fgets( pessoa.nome, 50, stdin);
	scanf("%d", &pessoa.idade);
	scanf("%f", &pessoa.altura);
	
	printf("\nlendo os dados:\n");
	printf("Nome:%s", pessoa.nome);
	printf("Idade:%d\n", pessoa.idade);
	printf("Altura:%.2f\n", pessoa.altura);
	
	printf("----------------------------------------\n");
	
	crescer(&pessoa);
		
	printf("Depois da modificação: %s, %d anos, %.2f m\n", pessoa.nome, pessoa.idade, pessoa.altura);

}	
	


kkkkkkkkkkkkkkkkkk





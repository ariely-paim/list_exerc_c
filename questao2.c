#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[100];
  int idade;
  char endereco[100];
} Pessoa;

int main (){
  Pessoa pessoa;

  printf("Informe o seu nome: ");
  fgets(pessoa.nome, 100, stdin);
  pessoa.nome[strlen(pessoa.nome)-1 ]= '\0';

  printf("Informe o seu endereço: ");
  fgets(pessoa.endereco, 100, stdin);
  pessoa.endereco[strlen(pessoa.endereco)-1 ] = '\0';

  printf("Informe a sua idade: ");
  scanf("%d", &pessoa.idade);

  printf("\nO seu nome é: %s\n", pessoa.nome);
  printf("A sua idade é: %d\n", pessoa.idade);
  printf("O seu endereço é: %s\n", pessoa.endereco);
}

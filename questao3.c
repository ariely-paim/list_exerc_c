/*
Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct aluno{
  char nome[100];
  int numero_da_matricula;
  char curso[50];
};

int main() {
  int max_alunos = 5;
  struct aluno alunos[max_alunos];
  printf("\n---Informações dos alunos---\n");
  for(int i = 0; i < max_alunos; i++) {
    printf("Informe o nome do aluno N%d: ", i+1);
    fgets(alunos[i].nome, 50, stdin);
    printf("Informe o número da matrícula do aluno N%d: ", i+1);
    scanf("%d", &alunos[i].numero_da_matricula);
    getchar();
    printf("Informe o curso do aluno N%d: ", i+1);
    fgets(alunos[i].curso, 30, stdin);
    printf("\n");
  }
  printf("\n---Lista de alunos---\n");
  for(int i = 0; i < max_alunos; i++) {
    printf("Aluno N%d:\n", i+1);
    printf("Seu nome: %s", alunos[i].nome);
    printf("Seu nnúmero da matrícula: %d\n", alunos[i].numero_da_matricula);
    printf("Seu curso: %s\n", alunos[i].curso);
  }
  return 0;
}

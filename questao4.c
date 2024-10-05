/*
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
int matricula;
char nome[100];
float nota1;
float nota2;
float nota3;
} Aluno;

float calcular_media(float nota1, float nota2, float nota3) {
return (nota1 + nota2 + nota3) / 3;
}

int main() {
int max_alunos = 5;
Aluno alunos[max_alunos];
int i;
int Maior_nota1 = 0;
int Maior_media = 0;
int Menor_media = 0;

for (i = 0; i < max_alunos; i++) {
printf("Informe o número de matrícula do aluno %d: ", i + 1);
scanf("%d", &alunos[i].matricula);

printf("Informe o nome do aluno %d: ", i + 1);
getchar();
fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
alunos[i].nome[strlen(alunos[i].nome)-1 ] = '\0';
printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
scanf("%f", &alunos[i].nota1);

printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
scanf("%f", &alunos[i].nota2);

printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
scanf("%f", &alunos[i].nota3);

printf("\n");
}

for (int i = 1; i < max_alunos; i++) {
if (alunos[i].nota1 > alunos[Maior_nota1].nota1) {
Maior_nota1 = i;
}
}

float maior_media = calcular_media(alunos[0].nota1, alunos[0].nota2, alunos[0].nota3);
float menor_media = maior_media;

for (i = 1; i < max_alunos; i++) {
float media = calcular_media(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);

if (media > maior_media) {
maior_media = media;
Maior_media = i;
}

if (media < menor_media) {
menor_media = media;
Menor_media = i;
}

}


printf("---Dados dos alunos---\n");
for (i = 0; i < max_alunos; i++) {
float media = calcular_media(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);
char result;
printf("Aluno %d:\n", i + 1);
printf("Sua matrícula: %d\n", alunos[i].matricula);
printf("Seu nome: %s\n", alunos[i].nome);
printf("Sua primeira nota: %.2f\n", alunos[i].nota1);
printf("Sua segunda nota: %.2f\n", alunos[i].nota2);
printf("sua terceira nota: %.2f\n", alunos[i].nota3);
printf("Sua média: %.2f\n", media);
if (media >= 6) {
result = "Aprovado.";
printf(result);
} else {
result = "Reprovado.";
printf(result);
}
printf("Seu status: %s\n", result);
printf("\n");
}

printf("---Aluno com maior nota na primeira prova---\n");
printf("Seu nome: %s\n", alunos[Maior_nota1].nome);
printf("Sua primeira nota: %.2f\n\n", alunos[Maior_nota1].nota1);

printf("--Aluno com maior média geral---\n");
printf("Seu nome: %s\n", alunos[Maior_media].nome);
printf("Sua média: %.2f\n\n", maior_media);

printf("---Aluno com menor média geral---\n");
printf("Seu nome: %s\n", alunos[Menor_media].nome);
printf("Sua média: %.2f\n", menor_media);

return 0;
}
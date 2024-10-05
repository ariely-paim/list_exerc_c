#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Horario {
int hora;
int minutos;
int segundos;
};

typedef struct Data {
int dia;
int mes;
int ano;
};

typedef struct Compromisso {
struct Data data;
struct Horario horario;
char descricao[100];
};

int main() {
struct Horario horario;
struct Data data;
struct Compromisso compromisso;

printf("Informe a descrição do compromisso: ");
fgets(compromisso.descricao, 100, stdin);
compromisso.descricao[strlen(compromisso.descricao)-1 ] = '\0';

printf("Informe o horário (hora minutos segundos): ");
scanf("%d %d %d", &horario.hora, &horario.minutos, &horario.segundos);

printf("Informe a data (dia mês ano): ");
scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

compromisso.horario = horario;
compromisso.data = data;

printf("\n---Compromisso adicionado---\n");
printf("A data do compromisso é: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
printf("O horário do compromisso é: %d:%d:%d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
printf("A descrição do compromisso é: %s\n", compromisso.descricao);

return 0;
}
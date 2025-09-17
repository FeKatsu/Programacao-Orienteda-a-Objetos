#include <stdlib.h>
#include <string.h>

Professor *criaProfessor(char *nome, int idade, char *depart, float salario){
    Professor *a = (Professor*) malloc (sizeof(Professor));

    Pessoa *p = criaPessoa(nome, idade, a);

    a->departamento = depart;
    a->salario = 123.11;
    p->print = printProf;

    return a;
}

Adm *criaAdm(char *nome, int idade, char *cargo, char *chefe){
    Adm *t = (Adm*) malloc (sizeof(Adm));

    Pessoa* p = criaPessoa(nome, idade, t);

    t->cargo = cargo;
    t->chefe = chefe;
    p->print = printAdm;

    return t;
}

#ifndef CLASSES_H
#define CLASSES_H

typedef struct lista Lista;
typedef struct pessoa Pessoa;
typedef struct aluno Aluno;
typedef struct professor Professor;
typedef struct administrativo Adm;

Lista *criaLista(void * elem, Lista * curr);
Pessoa *criaPessoa(char *nome, int idade, void *a);
Aluno *criaAluno(char *nome, int idade, char *curso);
Professor *criaProfessor(char *nome, int idade, char *departamento, float salario);
Adm *criaAdm(char *nome, int idade, char *cargo, char *chefe);

void printAluno(void *p);
void printProf(void *p);
void printAdm(void *p);
void printLista(Lista *l);
#endif
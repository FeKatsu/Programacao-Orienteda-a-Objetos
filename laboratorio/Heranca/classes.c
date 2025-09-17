#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "classes.h"

typedef struct lista {
    void *elem;
    struct lista *prox;
} Lista;

typedef struct pessoa {
    void (*print)(void *);
    char *nome;
    int idade;    
} Pessoa;

typedef struct aluno { 
    Pessoa p;
    char *curso;
} Aluno;

typedef struct professor {
    Pessoa p;
    float salario;
    char *departamento;
} Professor;

typedef struct administrativo {
    Pessoa p;
    char *cargo;
    char *chefe;    
} Adm;

void printAluno(void *p){
    Aluno * a;
    a = (Aluno*) p;
    printf("Nome: %s\n", a->p.nome);
    printf("Idade: %d\n", a->p.idade);
    printf("Curso: %s\n", a->curso);
}

void printProf(void *p){
    Professor * a;
    a = (Professor*) p;
    printf("Nome: %s\n", a->p.nome);
    printf("Idade: %d\n", a->p.idade);
    printf("Departamento: %s\n", a->departamento);
    printf("Salario: %.2f\n", a->salario);
}

void printAdm(void *p){
    Adm * a;
    a = (Adm*) p;
    printf("Nome: %s\n", a->p.nome);
    printf("Idade: %d\n", a->p.idade);
    printf("Cargo: %s\n", a->cargo);
    printf("Chefe: %s\n", a->chefe);
}

void printLista(Lista *l){
    while(l!=NULL){
        Pessoa *p;
        p = (Pessoa*) l->elem;
        (*p->print)(p);
        printf("\n");
        l = l->prox;
    }
}

Lista *criaLista(void * elem, Lista * curr){
    Lista *l = (Lista*) malloc (sizeof(Lista));
    l->elem = elem;
    l->prox = curr;
    return l;
}

Pessoa *criaPessoa(char *nome, int idade, void *a){
    Pessoa *p;
    p = (Pessoa*)a;

    p->nome = nome;
    p->idade = idade;
    
    return p;
}

Aluno *criaAluno(char *nome, int idade, char *curso){
    Aluno *a = (Aluno*) malloc (sizeof(Aluno));

    Pessoa *p = criaPessoa(nome, idade, a);

    a->curso = curso;
    p->print = printAluno;

    return a;
}
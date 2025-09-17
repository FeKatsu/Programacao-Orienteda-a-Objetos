#include <stddef.h>
#include "classes.h"

int main() {
    Lista *lista = NULL;

    Aluno *a = criaAluno("Fulano", 19, "Turismo");
    Professor * p = criaProfessor("Beltrano", 25, "Física", 12414.08);
    Adm * t = criaAdm("Ciclano", 30, "Assistente", "Beltrano");

    lista = criaLista(a, lista);
    lista = criaLista(p, lista);
    lista = criaLista(t, lista);

    printLista(lista);

    return 0;
}

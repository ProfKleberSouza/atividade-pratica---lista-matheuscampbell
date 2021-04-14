#ifndef  LISTA_H
#define  LISTA_H
//========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// DEFINICAO DO TIPO PRODUTO
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;
// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;

Celula *new_celula();

// DEFINICAO DO TIPO LISTA
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;

void newLista(Lista *l);

#endif
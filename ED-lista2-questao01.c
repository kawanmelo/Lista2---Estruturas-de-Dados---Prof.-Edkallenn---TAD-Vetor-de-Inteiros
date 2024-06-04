#include <stdio.h>
#include <stdlib.h>
#include "ED-lista2-questao01.h"

/*
** Função : Implementar um TAD para representar dinamicamente um vetor de inteiros.
** Autor : Kawan Melo - 3º período turma F 2024.1
** Data : 26.05.2024
** Observações: Null
*/

struct array{
  int *vetor;
  int nextPosition;
  int len;
};

Array* CreateArray(int len){
  int *vetor = malloc(sizeof(int) * len);
  if(vetor == NULL){
    printf("Erro na alocação de memória!\n");
    return NULL;
  }
  Array *array = malloc(sizeof(Array));
  array->vetor = vetor;
  array->len = len;
  array->nextPosition = 0;
  return array;
}

int Add(Array *array, int n){
  if(array->nextPosition > array->len-1){
    printf("Insert the number %d had been not possible. Full array!\n", n);
    return 0;
  }
  array->vetor[array->nextPosition] = n;
  array->nextPosition++;
  return 1;
}

int IsEmpty(Array *array){
  return (array->nextPosition == 0);
}

int Remove(Array *array, int n) {
  if(IsEmpty(array)){
    printf("Empty array!\n");
    return 0;
  }
  int j;
  for (int i = 0; i < array->nextPosition; i++) {
    if (array->vetor[i] == n) {
      int aux = i;
      for (j = i + 1; j < array->nextPosition; j++) {
        array->vetor[aux] = array->vetor[j];
        aux++;
      }
      array->vetor[j - 1] = 0;
      array->nextPosition--;
      return 1;
    }
  }
  printf("Element not found!\n");
  return 0;
}

int RemoveOnPosition(Array *array, int position){
  if(IsEmpty(array)){
    printf("Empty array!\n");
    return 0;
  }
  if(position >= array->len){
    printf("Position out of array range!\n");
    return 0;
  }
  if(position >= array->nextPosition){
    printf("Unfilled position\n");
    return 0;
  }
  int j;
  int aux = position;
  for (j = position + 1; j <= array->nextPosition; j++) {
    array->vetor[aux] = array->vetor[j];
    aux++;
  }
  array->vetor[j - 1] = 0;
  array->nextPosition--;
  return 1;
}

int GetOnPosition(Array *array, int position){
  if(IsEmpty(array)){
    printf("Empty array!\n");
    return 0;
  }
  if(position >= array->len){
    printf("Position out of array range!\n");
    return 0;
  }
  if(position >= array->nextPosition){
    printf("Unfilled position\n");
    return 0;
  }
  return array->vetor[position];
}

void Print(Array *array){
  if(IsEmpty(array)){
    printf("Empty array!\n");
    return;
  }
  printf("[ ");
  for(int i = 0; i < array->nextPosition; i++){
    printf("%d, ", array->vetor[i]);
  }
  printf("\b\b ]\n");
}

void EraseAll(Array *array){
  if(IsEmpty(array)){
    printf("Empty array!\n");
    return;
  }
  for(int i = 0; i < array->nextPosition; i++){
    array->vetor[i] = 0;
  }
  printf("The array has been emptied!\n");
  array->nextPosition = 0;
}
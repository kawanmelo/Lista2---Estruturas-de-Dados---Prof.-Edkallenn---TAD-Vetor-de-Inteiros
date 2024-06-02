#include <stdio.h>
#include "Array.h"

/*
** Função : Implementar um TAD para representar dinamicamente um vetor de inteiros.
** Autor : Kawan Melo - 3º período turma F 2024.1
** Data : 26.05.2024
** Observações: Null
*/

int main(void) {
  Array *array = CreateArray(10);
  Add(array, 2);
  Add(array, 5);
  Add(array, 7);
  Add(array, 14);
  Add(array, 27);
  Add(array, 8);
  Add(array, 2);
  Add(array, 7);
  Add(array, 14);
  Add(array, 27);
  Add(array, 13);
  int n = GetOnPosition(array, 2);
  printf("%d\n", n);
  Print(array);
  Remove(array, 5);
  Print(array);
  RemoveOnPosition(array, 4);
  Print(array);
  EraseAll(array);
  return 0;
}
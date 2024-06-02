/*
** Função : Implementar um TAD para representar dinamicamente um vetor de inteiros.
** Autor : Kawan Melo - 3º período turma F 2024.1
** Data : 26.05.2024
** Observações: Null
*/


//  Definição da estrutura Array.
typedef struct array Array;

//  Cria o array.
Array* CreateArray(int len);

//  Insere um elemento no array.
int Add(Array *array, int n);

// Verifica se o array está vazio
int IsEmpty(Array *array);

// Remove o primeiro elemento n encontrado no array
int Remove(Array *array, int n);

//  Remove um elemento em determinada posição.
int RemoveOnPosition(Array *array, int position);

//  Consulta um elemento em determinada posição.
int GetOnPosition(Array *array, int position);

//  Imprimi todos os elementos do array.
void Print(Array *array);

//  "Apaga" todos os elementos do array.
void EraseAll(Array *array);

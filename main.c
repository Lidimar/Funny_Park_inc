/* Todas as declarações sobre bibliotecas foram feitas no arquivo umabiblioteca.h */
#include "umabiblioteca.h"
/*------------------------*/

#define DELIMITER " \n"

int main (){
  char *word = NULL, *palavra;

  /* Abrimos o arquivo e verificamos se realmente conseguimos abri-lo */
  FILE *IN_carros = fopen ("carros.txt", "r");

  if (IN_carros == NULL){
    printf("Não foi possivel ler o arquivo de configuração dos carros\n");
    return 0;
  }

  /* Pegar os dados do arquivo */
  while ((fscanf (IN_carros, "%m[^"DELIMITER"]%*["DELIMITER"]", &word)) != EOF){
    printf("WORD: %s\n", word);
    if (strlen(word) > 1){
      printf("Entrei em\n");
    }
  }

  return 0;
}

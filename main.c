/* Todas as declarações sobre bibliotecas foram feitas no arquivo umabiblioteca.h */
#include "umabiblioteca.h"
/*------------------------*/

#define DELIMITER "\n"

int main (){
  char word [2]; //Somente para guardar o lixo do arquivo
  int i = 0, n = 0, j = 1;
  /* Abrimos o arquivo e verificamos se realmente conseguimos abri-lo */
  FILE *IN_carros = fopen ("carros.txt", "r");

  if (IN_carros == NULL){
    printf("Não foi possivel ler o arquivo de configuração dos carros\n");
    return 0;
  }

  while ((fscanf (IN_carros, "%m[^"DELIMITER"]%*["DELIMITER"]", word)) != EOF){
    n++;
  }

  rewind(IN_carros);
  printf("N %i\n", n);
  /* Declaramos a quantidade de carros */
  _veiculo carros[n];

  /* Pegar os dados do arquivo */
  while ((fscanf (IN_carros, "%s %s %s %c%c%c%c", carros[i].nome, carros[i].tipo, carros[i].paralelo, word, carros[i].inicio_x, word, carros[i].inicio_y)) != EOF){
    i++;
  }

  printf("\nFora do Loop:%s\n",carros[1].inicio_x);

  fclose(IN_carros);
  return 0;
}

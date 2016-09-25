/* Todas as declarações sobre bibliotecas foram feitas no arquivo umabiblioteca.h */
#include "umabiblioteca.h"
/*------------------------*/

#define DELIMITER " \n"
#define DELIMI "\n"

int main (){
  char *word = NULL;
  int i = 1, n = 0, j = 1;
  /* Abrimos o arquivo e verificamos se realmente conseguimos abri-lo */
  FILE *IN_carros = fopen ("carros.txt", "r");

  if (IN_carros == NULL){
    printf("Não foi possivel ler o arquivo de configuração dos carros\n");
    return 0;
  }
  /* Vamos contar quantos carros tem */
  while ((fscanf (IN_carros, "%m[^"DELIMI"]%*["DELIMI"]", &word)) != EOF){
    n += 1;
  }
  /* Declaramos a quantidade de carros */
  _veiculo carros[n][n];
  /* Voltamos o arquivo para o começo dele */
  rewind(IN_carros);

  /* Pegar os dados do arquivo */
  while ((fscanf (IN_carros, "%m[^"DELIMITER"]%*["DELIMITER"]", &word)) != EOF){
    if (j == 1){
      strcpy(carros[i][j].nome, word);
    }
    if (j == 2){
      strcpy(carros[i][j].tipo, word);
      printf("Entrou %s %i %i\n", carros[i][j].tipo, i, j);
    }

    if (j == 4){
      i++;
      j = 0;
    }
    j++;
  }
  //printf("%i %i\n", i,j);
  i = 2;
  j = 2;
  printf("\nFora do Loop:%s\n",carros[i][j].tipo);

  return 0;
}

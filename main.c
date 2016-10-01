/* Todas as declarações sobre bibliotecas foram feitas no arquivo umabiblioteca.h */
#include "umabiblioteca.h"
#include "heuristica.h"
/*------------------------*/


int main (){
  char word [2]; //Somente para guardar o lixo do arquivo
  int i = 1, n = 0, j = 1;
  /*---------------------------LEITURA ARQUIVO-------------------------*/
  /* Abrimos o arquivo e verificamos se realmente conseguimos abri-lo */
  FILE *IN_carros = fopen ("carros.txt", "r");

  if (IN_carros == NULL){
    printf("Não foi possivel ler o arquivo de configuração dos carros\n");
    return 1;
  }

  while ((fscanf (IN_carros, "%m[^"DELIMITER"]%*["DELIMITER"]", word)) != EOF){
    n++;
  }
  rewind(IN_carros);

  /* Declaramos a quantidade de carros */
  _veiculo carros[n];

  /* Pegar os dados do arquivo */
  while ((fscanf (IN_carros, "%s %s %s %c%c%c%c", carros[i].nome, carros[i].tipo, carros[i].paralelo, word, carros[i].inicio_x, word, carros[i].inicio_y)) != EOF){
    i++;
  }
  fclose(IN_carros);
  /*---------------------------------------------------------------------*/

  FILE *IN_manobras = fopen("manabras.txt", "r");

  if (IN_carros == NULL){
    printf("Não foi possivel ler o arquivo de configuração dos carros\n");
    return 1;
  }
  
  return 0;
}

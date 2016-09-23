/* Todas as declarações sobre bibliotecas foram feitas no arquivo umabiblioteca.h */
#include "umabiblioteca.h"
/*------------------------*/

#define DELIMITER " \n"
#define DELIMI "\n"

int main (){
  char *word = NULL;
  int i = 0, n = 0;
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
  _veiculo carros[n];
  /* Voltamos o arquivo para o começo dele */
  rewind(IN_carros);

  /* Pegar os dados do arquivo */
  while ((fscanf (IN_carros, "%m[^"DELIMITER"]%*["DELIMITER"]", &word)) != EOF){
    /* Dependendo do valor do i vamos saber em qual variavel adicionar ele */
    if (i == 0){
      strcpy(carros[i].nome, word);
    }else if (i == 1){

    }else if (i == 2){

    }

    if (strlen(word) > 1){
    }

    i++;
  }
  
  return 0;
}

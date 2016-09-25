#ifndef UMABIBLIOTECA_H
#define UMABIBLIOTECA_H

/* DECLARAÇÃO DAS BIBLIOTECAS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*----------------------------*/

typedef struct veiculo{ //estrutura para definir onde cada carro começa
  char nome [2];
  char tipo [2]; // 2 = carro, 3 = caminhão
  char paralelo[2];
  int inicio_x;
  int inicio_y;
} _veiculo;

#endif

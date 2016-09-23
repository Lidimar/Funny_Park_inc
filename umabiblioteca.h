#ifndef UMABIBLIOTECA_H
#define UMABIBLIOTECA_H

/* DECLARAÇÃO DAS BIBLIOTECAS */
#include <stdio.h>
#include <string.h>
/*----------------------------*/

typedef struct veiculo{ //estrutura para definir onde cada carro começa
  char nome [30];
  int tipo; // 2 = carro, 3 = caminhão
  char paralelo;
  int inicio_x;
  int inicio_y;
} _veiculo;

#endif

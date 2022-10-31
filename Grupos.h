#pragma once
#ifndef __grupos_h__
#define __grupos_h__

#include "Tipos.h"
#include "Pessoas.h"

typedef struct GRUPO{
   int id_g;
   int *npessoa;
   int num_pessoas;
   char nome_g[LIM_MAX_NOME];
   bool_t valido_g;
}Grupo;

Grupo *mod_grupo(Grupo *g, Pessoa *p, int *num_g, int num_p);

#endif //__grupos_h__

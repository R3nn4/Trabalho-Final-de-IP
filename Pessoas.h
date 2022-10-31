#pragma once
#ifndef __pessoas_h__
#define __pessoas_h__

#include "Tipos.h"

typedef struct PESSOAS{
   int id_p;
   char nome_p[LIM_MAX_NOME];
   bool_t valido_p;
}Pessoa;

Pessoa *mod_pessoa(Pessoa *p, int *num_p);

#endif //__pessoas_h__

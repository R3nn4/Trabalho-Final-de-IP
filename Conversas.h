#pragma once
#ifndef __conversas_h__
#define __conversas_h__

#include "Tipos.h"

typedef struct MENSAGENS{
   int id_c;
   char mensagem[LIM_MAX_MSG]; 
   bool_t valido_c;
}Conversas;


#endif //__conversas_h__
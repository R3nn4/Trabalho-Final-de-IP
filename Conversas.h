#pragma once
#ifndef __conversas_h__
#define __conversas_h__

#include "Tipos.h"

typedef struct CONVERSAS {
	int ID_conversa;
	int ID_pessoa1;
	int ID_pessoa2;
	int numMensagens;
}Conversa;

typedef struct MENSAGENS{
   int id_c;
   char mensagem[LIM_MAX_MSG]; 
   bool_t valido_c;
}Mensagens;


#endif //__conversas_h__
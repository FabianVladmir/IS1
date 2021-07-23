/**
 * Project Untitled
 */


#ifndef _PARTICIPANTE_H
#define _PARTICIPANTE_H

#include "Persona.h"


class Participante: public Persona {
public: 
    vector<Evento> eventos_matriculados;
};

#endif //_PARTICIPANTE_H
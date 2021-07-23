/**
 * Project Untitled
 */


#ifndef _EVENTO_H
#define _EVENTO_H

class Evento {
public: 
    string nombre;
    string descripcion;
    TipoEvento tipoEvento;
    Topico topico;
    Programa programa;
    Organizador organizador;
    Coordinador coordinador;
    vector<Participante> participantes;
    vector<Actividad> actividades;
    
string getNombre();
    
/**
 * @param value
 */
void setNombre(string value);
    
string getDescripcion();
    
/**
 * @param value
 */
void setDescripcion(string value);
    
TipoEvento getTipoEvento();
    
/**
 * @param value
 */
void setTipoEvento(TipoEvento value);
    
Topico getTopico();
    
/**
 * @param value
 */
void setTopico(Topico value);
    
Programa getPrograma();
    
/**
 * @param value
 */
void setPrograma(Programa value);
    
Organizador getOrganizador();
    
/**
 * @param value
 */
void setOrganizador(Organizador value);
    
Coordinador getCoordinador();
    
/**
 * @param value
 */
void setCoordinador(Coordinador value);
    
vector<Participante> getParticipantes();
    
/**
 * @param value
 */
void setParticipantes(vector<Participante> value);
    
vector<Actividad> getActividades();
    
/**
 * @param value
 */
void setActividades(vector<Actividad> value);
};

#endif //_EVENTO_H
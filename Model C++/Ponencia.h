/**
 * Project Untitled
 */


#ifndef _PONENCIA_H
#define _PONENCIA_H

class Ponencia {
public: 
    string nombre;
    string especialidad;
    string universidad;
    vector<Materia> material;
    Coordinador coordinador;
    Sesion sesion;
    
string getNombre();
    
/**
 * @param value
 */
void setNombre(string value);
    
string getEspecialidad();
    
/**
 * @param value
 */
void setEspecialidad(string value);
    
string getUniversidad();
    
/**
 * @param value
 */
void setUniversidad(string value);
    
vector<Materia> getMaterial();
    
/**
 * @param value
 */
void setMaterial(vector<Materia> value);
};

#endif //_PONENCIA_H
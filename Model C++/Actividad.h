/**
 * Project Untitled
 */


#ifndef _ACTIVIDAD_H
#define _ACTIVIDAD_H

class Actividad {
public: 
    string nombre;
    vector<Ponencia> ponencias;
    
string getNombre();
    
/**
 * @param value
 */
void setNombre(string value);
    
vector<Ponencia> getPonencias();
    
/**
 * @param value
 */
void setPonencias(vector<Ponencia> value);
};

#endif //_ACTIVIDAD_H
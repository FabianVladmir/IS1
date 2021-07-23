/**
 * Project Untitled
 */


#ifndef _BOLSA_TRABAJO_H
#define _BOLSA_TRABAJO_H

class Bolsa_trabajo {
public: 
    string descripcion;
    string fecha_publicacion;
    string fecha_expiracion;
    string nombre;
    
string getDescripcion();
    
/**
 * @param value
 */
void setDescripcion(string value);
    
string getFecha_publicacion();
    
/**
 * @param value
 */
void setFecha_publicacion(string value);
    
string getFecha_expiracion();
    
/**
 * @param value
 */
void setFecha_expiracion(string value);
    
string getNombre();
    
/**
 * @param value
 */
void setNombre(string value);
};

#endif //_BOLSA_TRABAJO_H
/**
 * Project Untitled
 */


#ifndef _PROGRAMA_H
#define _PROGRAMA_H

class Programa {
public: 
    string fecha;
    float hora;
    string lugar;
    int year;
    
string getFecha();
    
/**
 * @param value
 */
void setFecha(string value);
    
float getHora();
    
/**
 * @param value
 */
void setHora(float value);
    
string getLugar();
    
/**
 * @param value
 */
void setLugar(string value);
    
int getYear();
    
/**
 * @param value
 */
void setYear(int value);
};

#endif //_PROGRAMA_H
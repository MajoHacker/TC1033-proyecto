// Incluir la clase avion (para heredar)
#include "Avion.h"
// Crear la clase Tipo
class Tipo:public Avion{
    private:
        // Declarar los atributos de la clase
        int pasajeros_discapacidad;
    public:
        // Constructor de la clase
        Tipo(int pasajero, int tipo_vue,int pasajeros_dis):Avion(pasajero, tipo_vue){
            pasajeros_discapacidad = pasajeros_dis;
        }
        // Métodos
        int resultado_pasajeros(){
            return (pasajeros)-(pasajeros_discapacidad);
        }
        int costo_extra(){
            return (pasajeros_discapacidad)*(250);
        }
        // Getters
        int getPasajeros_discapacidad(){
            return pasajeros_discapacidad;
        }
        // Setters 
        void setPasajeros_discapacidad(int pasajeros_dis){
            pasajeros_discapacidad = pasajeros_dis;
        }
    
};

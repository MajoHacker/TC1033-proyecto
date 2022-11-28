#include "Avion.h"

class Tipo:public Avion{
    private:
        int pasajeros_discapacidad;
    public:
        Tipo(int pasajero, int tipo_vue,int pasajeros_dis):Avion(pasajero, tipo_vue){
            pasajeros_discapacidad = pasajeros_dis;
        }
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

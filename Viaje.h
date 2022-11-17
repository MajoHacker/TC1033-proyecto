# include "Avion.h"
# include "Hotel.h"
# include "Partidos.h"

class Viaje{
    private: 
    Avion resultado_vuelo;
    Hotel resultado_hotel;
    Partidos resultado_partidos;
    public:
    Viaje(Avion r_v, Hotel r_h, Partidos r_p){
        resultado_vuelo=r_v;
        resultado_hotel=r_h;
        resultado_partidos=r_p;
    }
    int costo_viaje(){
        return resultado_vuelo+resultado_hotel+resultado_partidos;
    }
    // Getters
    Avion getResultado_vuelo(){
        return resultado_vuelo;
    }
    Hotel getResultado_hotel(){
        return resultado_hotel;
    }
    Partidos getResultado_partidos(){
        return resultado_partidos;
    }
    // Setters
    void setResultado_vuelo(Avion r_v){
        resultado_vuelo=r_v;
    }
    void setResultado_hotel(Hotel r_h){
        resultado_hotel=r_h;
    }
    void setResultado_partidos(Partidos r_p){
        resultado_partidos=r_p;
    }
};
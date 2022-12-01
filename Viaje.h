// Incluir las clases Tipo, Avion y Partidos (composición)
# include "Tipo.h"
# include "Hotel.h"
# include "Partidos.h"
// Crear la clase viaje 
class Viaje{
    private: 
        // Declarar los atributos de la clase 
        int resultado_vuelo;
        int resultado_hotel;
        int resultado_partidos;
    public:
        // Constructor
        Viaje(int r_v, int r_h, int r_p){
            resultado_vuelo=r_v;
            resultado_hotel=r_h;
            resultado_partidos=r_p;
        }
        // Métodos
        int costo_viaje(){
            return resultado_vuelo+resultado_hotel+resultado_partidos;
        }
        // Getters
        int getResultado_vuelo(){
            return resultado_vuelo;
        }
        int getResultado_hotel(){
            return resultado_hotel;
        }
        int getResultado_partidos(){
            return resultado_partidos;
        }
        // Setters
        void setResultado_vuelo(int r_v){
            resultado_vuelo=r_v;
        }
        void setResultado_hotel(int r_h){
            resultado_hotel=r_h;
        }
        void setResultado_partidos(int r_p){
            resultado_partidos=r_p;
        }
};

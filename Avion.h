// Crear la clase Avion 
class Avion{
    protected: 
        // Declarar los atributos de la clase (protected porque es la clase Padre)
        int pasajeros;
        int tipo_vuelo;
    public:
        // Constructor de la clase 
        Avion (int pasajero, int tipo_vue){
            pasajeros = pasajero;
            tipo_vuelo = tipo_vue;
        }
        // Métodos
        int resultado_vuelo(){
            return pasajeros*tipo_vuelo*2;
        }
        // Getters
        int getPasajeros(){
            return pasajeros;
        }
        int getTipo_vuelo(){
            return tipo_vuelo;
        }
        // Setters 
        void setPasajeros(int pasajero){
            pasajeros = pasajero;
        }
        void setTipo_vuelo(int tipo_vue){
            tipo_vuelo = tipo_vue;
        }
};

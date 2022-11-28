class Avion{
    protected: 
        int pasajeros;
        int tipo_vuelo;
    public:
        Avion (int pasajero, int tipo_vue){
            pasajeros = pasajero;
            tipo_vuelo = tipo_vue;
        }
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

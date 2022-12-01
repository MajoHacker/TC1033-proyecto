// Crear la clase Hotel 
class Hotel{
    private:
        // Declarar los atributos de la clase
        int habitaciones;
        int noches;
        int tipo_habitacion;
    public:
        // Constructor de la clase
        Hotel(int habitacion, int noche, int tipo){
            habitaciones = habitacion;
            noches = noche;
            tipo_habitacion = tipo;
        }
        // Métodos 
        int resultado_hotel(){
            return habitaciones*noches*tipo_habitacion;
        }
        // Getters
        int getHabitaciones(){
            return habitaciones;
        }
        int getNoches(){
            return noches;
        }
        int getTipo_habitacion(){
            return tipo_habitacion;
        }
        // Setters 
        void setHabitaciones(int habitacion){
            habitaciones = habitacion;
        }
        void setNoches(int noche){
            noches = noche;
        }
        void setTipo_habitacion(int tipo){
            tipo_habitacion = tipo;
        }
};

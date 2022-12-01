// Crear la clase Partidos
class Partidos{
    // Declarar los atributos de la clase
    private:
        int numero_partidos;
        int zona;
        int personas;
    public:
        // Constructor de la clase
        Partidos(int num_partidos, int zon, int pers){
            numero_partidos = num_partidos;
            zona = zon;
            personas = pers;
        }
        // Métodos
        int resultado_partidos(){
            return numero_partidos*zona*personas;
        }
        // Getters
        int getNumero_partidos(){
            return numero_partidos;
        }
        int getZona(){
            return zona;
        }
        int getPersonas(){
            return personas;
        }
        // Setters 
        void setNumero_partidos(int num_partidos){
            numero_partidos = num_partidos;
        }
        void setZona(int zon){
            zona = zon;
        }
        void setPersonas(int pers){
            personas = pers;
        }
};

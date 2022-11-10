class Partidos{
    private:
        int numero_partidos;
        int zona;
    public:
    Partidos(int num_partidos, int zon){
        numero_partidos = num_partidos;
        zona = zon;
    }
    int resultado_partidos(){
        return numero_partidos*zona;
    }
    // Getters
    int getNumero_partidos(){
        return numero_partidos;
    }
    int getZona(){
        return zona;
    }
    // Setters 
    void setNumero_partidos(int num_partidos){
        numero_partidos = num_partidos;
    }
    void setZona(int zon){
        zona = zon;
    }
};
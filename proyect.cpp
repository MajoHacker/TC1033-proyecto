# include <iostream>
using namespace std;

# include "Avion.h"
# include "Hotel.h"
# include "Partidos.h"

int main(){
    int num_pasajero;
    int precio_vuelo;
    cout<<"¿Cuántos pasajeros?\n"; cin>>num_pasajero;
    cout<<"¿Costo por boleto?\n"; cin>>precio_vuelo;
    Avion p1(num_pasajero,precio_vuelo);
    cout<<"El costo de vuelo ida y vuelta es: " <<p1.resultado_vuelo()<<endl;

    int num_habitacion;
    int num_noches;
    int precio_noche;
    cout<<"¿Cuántas habitaciones?\n"; cin>>num_habitacion;
    cout<<"¿Cuántas noches?\n"; cin>>num_noches;
    cout<<"¿Costo por noche de cada habitación?\n"; cin>>precio_noche;    
    Hotel p2(num_habitacion,num_noches,precio_noche);
    cout<<"El costo de hotel es: "<<p2.resultado_hotel()<<endl;

    int num_partidos;
    int costo_boleto;
    cout<<"¿Cuántos partidos?\n"; cin>>num_partidos;
    cout<<"¿Precio por boleto?\n"; cin>>costo_boleto;    
    Partidos p3(num_partidos,costo_boleto,num_pasajero);
    cout<<"El costo de partidos es: "<<p3.resultado_partidos()<<endl;

    int total;
    total=p1.resultado_vuelo()+p2.resultado_hotel()+p3.resultado_partidos();
    cout<<"\nEl costo total del viaje es: "<<total<<endl;

    return 0;
}   

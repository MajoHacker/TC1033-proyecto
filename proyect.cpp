# include <iostream>
using namespace std;

# include "Viaje.h"


int main(){
    int final_mejora;
    int num_mejora;
    int mejora_vuelo;
    int nuevo_vuelo;
    int nuevo_hotel;
    int mejora_hotel;
    int mejora_partidos;
    int nuevo_partidos;
    int res_mejora;

    cout<<"Los precios que el programa te solicita, es un aproximado a la cantidad que estas dispuesto a pagar"<<endl;

    int num_pasajero;
    int precio_vuelo;
    cout<<"¿Cuántos pasajeros?\n"; cin>>num_pasajero;
    cout<<"¿Costo por boleto?\n"; cin>>precio_vuelo;
    Avion p1(num_pasajero,precio_vuelo);
    nuevo_vuelo = p1.resultado_vuelo();
    cout<<"El costo de vuelo ida y vuelta es: " <<nuevo_vuelo<<endl;

    int num_habitacion;
    int num_noches;
    int precio_noche;
    cout<<"¿Cuántas habitaciones?\n"; cin>>num_habitacion;
    cout<<"¿Cuántas noches?\n"; cin>>num_noches;
    cout<<"¿Costo por noche de cada habitación?\n"; cin>>precio_noche;    
    Hotel p2(num_habitacion,num_noches,precio_noche);
    nuevo_hotel = p2.resultado_hotel();
    cout<<"El costo de hotel es: "<<nuevo_hotel<<endl;

    int num_partidos;
    int costo_boleto;
    cout<<"¿Cuántos partidos?\n"; cin>>num_partidos;
    cout<<"¿Precio por boleto?\n"; cin>>costo_boleto;    
    Partidos p3(num_partidos,costo_boleto,num_pasajero);
    nuevo_partidos = p3.resultado_partidos();
    cout<<"El costo de partidos es: "<<nuevo_partidos<<endl;

    int total;
    Viaje p4(nuevo_vuelo,nuevo_hotel,nuevo_partidos);
    total=p4.costo_viaje();
    cout<<"\nEl costo total del viaje es: "<<total<<endl;


    while (true){
    cout<<"\n¿Quieres mejorar tu viaje?\n1=sí\n0=no\n"; cin>>res_mejora;
    if (res_mejora==1){
        cout<<"Perfecto, selecciona que te gustaria mejorar:\n1:Vuelos\n2:Hotel\n3:Partidos\n"; cin>>num_mejora;
        if (num_mejora==1){
            cout<<"Para mejorar el precio de tus vuelos tenemos estas opciones, selecciona la que sea de tu interés:\n1:Viajar en un horario de madrugrada\n2:Viajar sin maleta documentada\n3:Qué los pasajeros viajen en vuelos separados\n"; cin>>mejora_vuelo;
            if (mejora_vuelo==1){
                nuevo_vuelo=(nuevo_vuelo)-(nuevo_vuelo*0.10);
                cout<<"Nuevo costo de vuelo: "<<nuevo_vuelo<<endl;
            }
            else if (mejora_vuelo==2)
            {
                nuevo_vuelo=(nuevo_vuelo)-(nuevo_vuelo*0.25);
                cout<<"Nuevo costo de vuelo: "<<nuevo_vuelo<<endl;
            }
            else if (mejora_vuelo==3)
            {
                nuevo_vuelo=(nuevo_vuelo)-(nuevo_vuelo*0.40);
                cout<<"Nuevo costo de vuelo: "<<nuevo_vuelo<<endl;
            }
        }
        if (num_mejora==2){
            cout<<"Para mejorar el precio de tu hotel tenemos estas opciones, selecciona la que sea de tu interés:\n1:Eliminar una habitación\n2:Eliminar las comidas del hotel\n3:Cambiar tipo de habitación\n"; cin>>mejora_hotel;
            if (mejora_hotel==1){
                nuevo_hotel=(nuevo_hotel)-(num_noches*precio_noche);
                cout<<"Nuevo costo de hotel: "<<nuevo_hotel<<endl;
            }
            else if (mejora_hotel==2)
            {
                nuevo_hotel=(nuevo_hotel)-(nuevo_hotel*.20);
                cout<<"Nuevo costo de hotel: "<<nuevo_hotel<<endl;
            }
            else if (mejora_hotel==3)
            {
                nuevo_hotel=(nuevo_hotel)-(nuevo_hotel*.15);
                cout<<"Nuevo costo de hotel: "<<nuevo_hotel<<endl;
            }
        }
        if (num_mejora==3){
            cout<<"Para mejorar el precio de tus partidos tenemos estas opciones, selecciona la que sea de tu interés:\n1:Eliminar un partido\n2:Comprar un boleto más económico (más lejos al campo de juego)\n3:Cambiar el juego por uno con menos demanda\n"; cin>>mejora_partidos;
            if(mejora_partidos==1){
                nuevo_partidos=(nuevo_partidos)-(costo_boleto*num_pasajero);
                cout<<"Nuevo costo de partidos: "<<nuevo_partidos<<endl;
            }
            else if (mejora_partidos==2)
            {
                nuevo_partidos=(nuevo_partidos)-(nuevo_partidos*0.15);
                cout<<"Nuevo costo de partidos: "<<nuevo_partidos<<endl;
            }
            else if (mejora_partidos==3)
            {
                nuevo_partidos=(nuevo_partidos)-(nuevo_partidos*.20);
                cout<<"Nuevo costo de partidos: "<<nuevo_partidos<<endl;
            }
        }
    }
    if (res_mejora==0){
        final_mejora = nuevo_vuelo+nuevo_hotel+nuevo_partidos;
        cout<<"Perfecto hemos terminado la creación de tu viaje, el costo será de:\n"<<final_mejora<<" pesos"<<endl;
        break;
    }
    }
    return 0;
}

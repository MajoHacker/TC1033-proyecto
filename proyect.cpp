# include <iostream>
using namespace std;
// Incluir la clase Viaje
# include "Viaje.h"

// Iniciar el programa 
int main(){

    // Declarar las variabes
    int final_mejora;
    int num_mejora;
    int mejora_vuelo;
    int nuevo_vuelo;
    int nuevo_hotel;
    int mejora_hotel;
    int mejora_partidos;
    int nuevo_partidos;
    int res_mejora;
    int pasajeros_dis;
    int cost_extra;

    // Mensaje inicial al usuario
    cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Los precios que el programa te solicita, es un aproximado a la cantidad que estas dispuesto a pagar"<<endl;
    cout<<"Además los precios estan en MXN, utiliza solo números enteros"<<endl;
    cout<<"Si la respuesta es SI ocupa el número 1"<<endl;
    cout<<"Si la respuesta es NO ocupa el número 2"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------"<<endl;

    // Preguntar al usuario del número de pasajeros y costo del avión, usando la clase Avion
    int num_pasajero;
    int precio_vuelo;
    cout<<"\n¿Cuántos pasajeros?\n"; cin>>num_pasajero;
    cout<<"\n¿Costo por boleto?\n"; cin>>precio_vuelo;
    Avion p1(num_pasajero,precio_vuelo);
    nuevo_vuelo = p1.resultado_vuelo();

    // Preguntar al usuario si hay pasajeros con discapacidad, usando la clase Tipo
    int discapacidad;
    cout<<"\n¿Cuantos pasajeros tienen alguna discapacidad?\n"; cin>>discapacidad;
    Tipo p2(num_pasajero,precio_vuelo,discapacidad);
    pasajeros_dis = p2.resultado_pasajeros();
    cost_extra = p2.costo_extra();

    // Mostrar al usuario el precio del avión en ese momento del avion y en caso de que haya algun costo extra
    cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
    cout<<"El costo de vuelo ida y vuelta es: " <<nuevo_vuelo<<endl;
    cout<<"\nAdemas los pasajeros sin discapacidad son: "<<pasajeros_dis<<endl;
    cout<<"\nPor los pasajeros con discapacidad se cobrara un monto extra de: "<<cost_extra<<endl;
    cout<<"---------------------------------------------------------------------------------------------------"<<endl;

    // Pregunatr al usuario por el hotel, usando la clase Hotel
    int num_habitacion;
    int num_noches;
    int precio_noche;
    cout<<"\n¿Cuántas habitaciones?\n"; cin>>num_habitacion;
    cout<<"\n¿Cuántas noches?\n"; cin>>num_noches;
    cout<<"\n¿Costo por noche de cada habitación?\n"; cin>>precio_noche;    
    Hotel p3(num_habitacion, num_noches,precio_noche);
    nuevo_hotel = p3.resultado_hotel();

    // Mostrar al usuario el precio en ese momento del hotel
    cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
    cout<<"El costo de hotel es: "<<nuevo_hotel<<endl;
    cout<<"---------------------------------------------------------------------------------------------------"<<endl;

    // Preguntar al usuario por los partidos, usando la clase Partidos
    int num_partidos;
    int costo_boleto;
    cout<<"\n¿Cuántos partidos?\n"; cin>>num_partidos;
    cout<<"\n¿Precio por boleto?\n"; cin>>costo_boleto;    
    Partidos p4(num_partidos,costo_boleto,num_pasajero);
    nuevo_partidos = p4.resultado_partidos();

    // Mostrar al usuario el precio en ese momento de partidos 
    cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
    cout<<"El costo de partidos es: "<<nuevo_partidos<<endl;
    cout<<"---------------------------------------------------------------------------------------------------"<<endl;

    // Usar la clase viaje para saber el costo total
    int total;
    Viaje p5(nuevo_vuelo,nuevo_hotel,nuevo_partidos);
    total=p5.costo_viaje()+p2.costo_extra();

    // Mostar al usuario el precio total de su viaje en ese momento
    cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
    cout<<"El costo total del viaje es: "<<total<<endl;
    cout<<"---------------------------------------------------------------------------------------------------"<<endl;

    // Crear un ciclo para que el usuario pueda hacer el número de modificaciones que el quiera al precio 
    while (true){
    
    // Preguntar al usuario si desea modificaciones
    cout<<"\n¿Quieres mejorar tu viaje?\n1=sí\n0=no\n"; cin>>res_mejora;

    // Si la respuesta del usuario fue si, mostrarle que puede modificar
    if (res_mejora==1){
        cout<<"\nPerfecto, selecciona que te gustaria mejorar:\n1:Vuelos\n2:Hotel\n3:Partidos\n"; cin>>num_mejora;

        // Si el usuario elige modificar Vuelos, desplegar las opciones 
        if (num_mejora==1){
            cout<<"\nPara mejorar el precio de tus vuelos tenemos estas opciones, selecciona la que sea de tu interés:\n1:Viajar en un horario de madrugrada\n2:Viajar sin maleta documentada\n3:Qué los pasajeros viajen en vuelo separados\n"; cin>>mejora_vuelo;

            // Aplicar la opción del usuario, y mostrar el nuevo precio de vuelos
            if (mejora_vuelo==1){
                nuevo_vuelo=(nuevo_vuelo)-(nuevo_vuelo*0.10);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de vuelo: "<<nuevo_vuelo<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }

            // Aplicar la opción del usuario, y mostrar el nuevo precio de vuelos
            else if (mejora_vuelo==2)
            {
                nuevo_vuelo=(nuevo_vuelo)-(nuevo_vuelo*0.25);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de vuelo: "<<nuevo_vuelo<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }

            // Aplicar la opción del usuario, y mostrar el nuevo precio de vuelos
            else if (mejora_vuelo==3)
            {
                nuevo_vuelo=(nuevo_vuelo)-(nuevo_vuelo*0.40);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de vuelo: "<<nuevo_vuelo<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }
        }

        // Si el usuario elige modificar Hotel, desplegar las opciones
        if (num_mejora==2){
            cout<<"\nPara mejorar el precio de tu hotel tenemos estas opciones, selecciona la que sea de tu interés:\n1:Eliminar una habitación\n2:Eliminar las comidas del hotel\n3:Cambiar tipo de habitación\n"; cin>>mejora_hotel;

            // Aplicar la opción del usuario, y mostrarle el nuevo precio de hotel
            if (mejora_hotel==1){
                nuevo_hotel=(nuevo_hotel)-(num_noches*precio_noche);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de hotel: "<<nuevo_hotel<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }

            // Aplicar la opción del usuario, y mostrarle el nuevo precio de hotel
            else if (mejora_hotel==2)
            {
                nuevo_hotel=(nuevo_hotel)-(nuevo_hotel*.20);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de hotel: "<<nuevo_hotel<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }

            // Aplicar la opción del usuario, y mostrarle el nuevo precio de hotel
            else if (mejora_hotel==3)
            {
                nuevo_hotel=(nuevo_hotel)-(nuevo_hotel*.15);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de hotel: "<<nuevo_hotel<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }
        }

        // Si el usuario elige modificar partidos, desplegar las opciones
        if (num_mejora==3){
            cout<<"\nPara mejorar el precio de tus partidos tenemos estas opciones, selecciona la que sea de tu interés:\n1:Eliminar un partido\n2:Comprar un boleto más económico (más lejos al campo de juego)\n3:Cambiar el juego por uno con menos demanda\n"; cin>>mejora_partidos;

            // Aplicar la opción del usuario, y mostrarle el nuevo precio de partidos
            if(mejora_partidos==1){
                nuevo_partidos=(nuevo_partidos)-(costo_boleto*num_pasajero);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de partidos: "<<nuevo_partidos<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }

            // Aplicar la opción del usuario, y mostrarle el nuevo precio de partidos
            else if (mejora_partidos==2)
            {
                nuevo_partidos=(nuevo_partidos)-(nuevo_partidos*0.15);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de partidos: "<<nuevo_partidos<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }

            // Aplicar la opción del usuario, y mostrarle el nuevo precio de partidos
            else if (mejora_partidos==3)
            {
                nuevo_partidos=(nuevo_partidos)-(nuevo_partidos*.20);
                cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Nuevo costo de partidos: "<<nuevo_partidos<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }
        }
    }

    // Si el usuario ya no desea hacer modificaciones a su viaje, desplegar el costo final del viaje
    if (res_mejora==0){
        final_mejora = nuevo_vuelo+nuevo_hotel+nuevo_partidos;
        cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Perfecto hemos terminado la creación de tu viaje, el costo será de:\n"<<final_mejora<<" pesos"<<endl;
        cout<<"---------------------------------------------------------------------------------------------------"<<endl;
        // romper el ciclo
        break;
    }
    }
    return 0;
}
// Fin del programa 

# include <iostream>
using namespace std;

# include "Avion.h"
# include "Hotel.h"
# include "Partidos.h"

int main(){
    Avion p1(2,1000);
    cout<<"El costo de vuelo es: " <<p1.resultado_vuelo()<<endl;

    Hotel p2(3,9,3400);
    cout<<"El costo de hotel es: "<<p2.resultado_hotel()<<endl;

    Partidos p3(3,7800);
    cout<<"El costo de partidos es: "<<p3.resultado_partidos()<<endl;

    int total;
    total=p1.resultado_vuelo()+p2.resultado_hotel()+p3.resultado_partidos();
    cout<<"El costo total del viaje es: "<<total<<endl;
    
    return 0;
}
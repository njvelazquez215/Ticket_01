#include <iostream>
#include<iomanip>
#include "Ticket.h"

using namespace std;

int main() {

    Ticket ticketUno("8356293644");
    Ticket ticketDos("7392644228");
    Ticket ticketTres;

    ticketTres.AsignarDatos("3982346723");

    cout << endl << "Datos de Ticket Uno" << endl << flush;
    ticketUno.MostrarDatos();
    cout << endl << "Datos de Ticket Dos" << endl << flush;
    ticketDos.MostrarDatos();
    cout << endl << "Datos de Ticket Tres" << endl << flush;
    ticketTres.MostrarDatos();

    return 0;
}

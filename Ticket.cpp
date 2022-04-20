//
// Created by Nicolas Velazquez on 20/04/2022.
//

#include "Ticket.h"

#include <iostream>
using namespace std;

//Constructor
Ticket::Ticket()
{}

Ticket::Ticket(string datos)
{
    this->datos = datos;
    this->nro = datos;
}

//Destructor
Ticket::~Ticket()
{}


void Ticket::AsignarDatos(string datos)
{
    this->datos = datos;
    this->nro = datos;
}

void Ticket::MostrarDatos()
{
    cout << "Datos: " << this->ObtenerDatos() << endl << flush;
    cout << "Nro: " << this->ObtenesNro() << endl << flush;
}

string Ticket::ObtenesNro()
{
    return this->nro;
}

string Ticket::ObtenerDatos()
{
    return this->datos;
}

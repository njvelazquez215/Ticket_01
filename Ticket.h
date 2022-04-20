//
// Created by Nicolas Velazquez on 20/04/2022.
//

#ifndef TICKET_01_TICKET_H
#define TICKET_01_TICKET_H

#include <iostream>
using namespace std;

class Ticket
{

    public:
        //Constructor
        Ticket();
        Ticket(string datos);

        //Destructor
        ~Ticket();

        //Asignar Atributos
        void AsignarDatos(string datos);

        //Obtener Atributo
        string ObtenesNro();
        string ObtenerDatos();

        //Servicio
        void MostrarDatos();

    private:
        string datos;
        string nro;

    protected:

};

#endif //TICKET_01_TICKET_H

#ifndef INTERFAZ_H
#define INTERFAZ_H

#include<iostream>
#include<string>
#include<sstream>
#include <vector>

#include"Medico.h"
#include "Cama.h"
#include "Especialidad.h"
#include "Pabellon.h"
#include "Paciente.h"

using namespace std;
class Interfaz {
public:

	void menu();

	void menuDoctor();

	void menuPaciente();

	void menuPabellon();

	void menuCamas();

	void menuEspecialidades();
};

#endif // !INTERFAZ_H


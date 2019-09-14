#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "Paciente.h"
#include "Especialidad.h"

class Paciente;

class Medico
{
private:
	string nombre;
	int cantidad;
	string especialidad;
	vector<Paciente*> paciente;
public:
	Medico();
	Medico(string nombre, string _especialidad);
	~Medico();
	void setNombre(string _nombre);
	void setEspecialidad(string);
	string getNombre();
	string getEspecialidad();
	void agregarPaciente(Paciente*);
	Paciente getPacientes();
	string reporteMedico();
};

#endif // !MEDICO_H


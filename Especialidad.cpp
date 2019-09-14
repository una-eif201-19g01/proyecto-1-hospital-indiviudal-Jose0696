#include "Especialidad.h"

Especialidad::Especialidad()
{
	cantidad = 0;
	for (int i = 0; i < 10; i++)
		especialidades[i] = "null";
}

Especialidad::Especialidad(string _especialidad)
{
	cantidad = 0;
	for (int i = 0; i < 10; i++)
	{
		especialidades[i] = _especialidad;
		cantidad++;
	}
}

Especialidad::~Especialidad()
{
	//delete[] especialidades;
}

void Especialidad::setEspecialidades(string _especialidad)
{
	for (int i = 0; i < 10; i++)
		especialidades[i] = _especialidad;
}

string Especialidad::getEspecialidades()
{
	for (int i = 0; i < 10; i++)
		return especialidades[i];
}

int Especialidad::getCantidadEspecialidad()
{
	for (int i = 0; i < 10; i++)
	{
		if (especialidades[i] != "null") {
			cantidad++;
		}

	}
	return cantidad;
}

string Especialidad::buscarEspecialidad(string _especialidad)
{
	string __especialidad = "No existe especialidad";
	for (int i = 0; i < 10; i++)
	{
		if (especialidades[i] == _especialidad)
			__especialidad = especialidades[i];
	}
	return __especialidad;
}

void Especialidad::cambiarEspecialidadEnPosicion(int posicion, string _especialidad)
{
	if (posicion <= 10 && posicion >= 1)
		especialidades[posicion - 1] = _especialidad;
}

void Especialidad::setEspecialidadEnPosicion(int posicion, string _especialidad)
{
	especialidades[posicion] = _especialidad;
}

string Especialidad::getEspecialidadEnPosicion(int posicion)
{
	//if (posicion > 0 && posicion >= 0)
	return especialidades[posicion];
}

string Especialidad::toStringEspecialidades()
{
	stringstream reporte;

	reporte << "Lista de especialidades:" << endl;
	for (int i = 0; i < 10; i++)
	{
		reporte << "[" << i + 1 << "]:" << getEspecialidadEnPosicion(i) << endl;
	}
	return reporte.str();
}

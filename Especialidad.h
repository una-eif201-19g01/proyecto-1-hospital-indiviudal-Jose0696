#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Especialidad {
private:
	int cantidad = 0;
	string especialidades[10];
public:
	Especialidad();
	Especialidad(string _especialidad);
	~Especialidad();

	void setEspecialidades(string _especialidad);
	string getEspecialidades();
	int getCantidadEspecialidad();
	string buscarEspecialidad(string _especialidad);

	void cambiarEspecialidadEnPosicion(int posicion, string _especialidad);
	void setEspecialidadEnPosicion(int posicion, string _especialidad);
	string getEspecialidadEnPosicion(int posicion);
	string toStringEspecialidades();
};

#endif // !ESPECIALIDAD_H


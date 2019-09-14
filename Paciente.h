//	Proyecto 1 - Hospital
//	Por José Miguel Sequeira Hernández 
//	Universidad Nacional de Costa Rica - UNA
//	Curso: Programacion - 1

#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include<sstream>

//char const MASCULINO = 'M';
//char const FEMENINO = 'F';

using namespace std;

class Paciente {
private:
	string cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia;
	bool estadoPaciente;
	char generoPaciente;
public:
	Paciente();
	Paciente(string _cedula, string _nombre, string _dirrecion, string _patologia, string _tipoCirugia,
		string _prioridadPaciente, string _fechaCirugia, bool _estadoPaciente, char _generoPaciente);
	string getCedula();
	string getNombre();
	string getDireccion();
	string getPatologia();
	string getTipoCirugia();
	string getPrioridadPaciente();
	string getFechaCirugia();
	char getGeneroPaciente();
	bool getEstadoPaciente();

	void setCedula(string _cedula);
	void setNombre(string _nombre);
	void setDireccion(string _direccion);
	void setPatologia(string _patologia);
	void setTipoCirugia(string _tipoCirugia);
	void setPrioridadPaciente(string _prioridadPaciente);
	void setFechaCirugia(string _fechaCirugia);
	void setEstadoPaciente(bool _estadoPaciente);
	void setGeneroPaciente(char _generoPaciente);

	std::string reportePaciente();
};
#endif // !1


/*
NOTAS:
bool estado se refiere a si esta dado de alta o no. Por lo tanto: true significa esta en el hospital, false esta dado de alta.
*/
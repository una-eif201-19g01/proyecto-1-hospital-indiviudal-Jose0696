#ifndef CAMA_H
#define CAMA_H

#include "Paciente.h"

class Cama {
private:
	string codigo;
	bool disponibilidad;
	Paciente* paciente;
public:
	Cama();
	Cama(string _codigo, Paciente* _paciente, bool disponible);
	~Cama();

	void setDisponibilidad(bool _disponibilidad);
	void setCodigo(string _codigo);
	void setPaciente(Paciente* _paciente);
	string getCodigo();
	bool isDisponibilidad();
	Paciente getPaciente();
	void asignarLetraPabellon();
	string toStringCama();
};

#endif // !CAMA_H

/*
NOTA: Disponibilidad: true -> disponible || false -> no disponible
*/

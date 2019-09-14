#ifndef PABELLON_H
#define PABELLON_H

#include "Cama.h"
#include "Paciente.h"
class Pabellon {
private:
	int fila;
	int colum;
	Cama*** pabellon;
public:
	Pabellon();
	Pabellon(int, int);
	~Pabellon();

	void setPabellon(Cama**);
	Cama getPabellon();
	void setCamaEnPosicion(Cama*, int, int);
	char vereficarGeneroPabellon();
	bool hayDisponibilidad();
	int totalDisponibilidad();
	void cambiarPacienteCama(Paciente*);
	string toStringPabellon();
};

#endif // !PABELLON_H



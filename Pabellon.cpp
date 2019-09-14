#include "Pabellon.h"

Pabellon::Pabellon()
{
	fila = 10;
	colum = 20;
	pabellon = new Cama * *[fila];
	for (int i = 0; i < fila; i++) {
		pabellon[i] = new Cama * [colum];
	}
}

Pabellon::Pabellon(int f, int c)
{
	fila = f;
	colum = c;
	pabellon = new Cama * *[fila];
	for (int i = 0; i < fila; i++) {
		pabellon[i] = new Cama * [colum];
	}
}

Pabellon::~Pabellon()
{
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			delete pabellon[i][j];
		}
	}
	for (int i = 0; i < fila; i++) {
		delete[]pabellon[i];

	}

	delete[]pabellon;

}

void Pabellon::setPabellon(Cama** _cama)
{
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < colum; j++)
		{
			pabellon[i][j] = *_cama;
		}
	/*for (int i = 0; i < fila; i++) {
		pabellon[i] = _cama;
	}*/
}

Cama Pabellon::getPabellon()
{
	return ***pabellon;
}

char Pabellon::vereficarGeneroPabellon()
{
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			if (pabellon[i][j]->getPaciente().getGeneroPaciente() == 'M') {
				return 'M';
			}
			else {
				return 'F';
			}
		}
	}
}

bool Pabellon::hayDisponibilidad()
{
	bool disponible = false;

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			if (pabellon[i][j]->isDisponibilidad() == true)
				disponible = true;
			else
				disponible = false;
		}
	}
	return disponible;
}

int Pabellon::totalDisponibilidad()
{
	int contador = 0;

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			if (pabellon[i][j]->isDisponibilidad() == true)
				contador++;
		}
	}
	return contador;
}

void Pabellon::setCamaEnPosicion(Cama* _cama, int _fila, int _columna)
{
	//if (_fila < fila && _columna < colum)
	pabellon[_fila][_columna] = _cama;
}

void Pabellon::cambiarPacienteCama(Paciente*)
{
}

string Pabellon::toStringPabellon()

{
	stringstream _reporte;

	_reporte << "Pabellon: " << endl;
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colum; j++) {
			_reporte << pabellon[i][j]->getCodigo() << endl;
			_reporte << pabellon[i][j]->getPaciente().getNombre() << endl;
			if (pabellon[i][j]->isDisponibilidad())
				_reporte << "Disponible" << endl;
			else
				_reporte << "No disponible" << endl;
		}
	}

	return _reporte.str();
}

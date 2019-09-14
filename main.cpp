#include<iostream>
#include"Interfaz.h"



using namespace std;
int main() {
	//Interfaz* i = new Interfaz();
	//i->menu();

	vector<Medico*> vectorMedico; //aqui los 20 doctores

	Especialidad _especialidad;
	Paciente* _paciente;

	//datos paciente
	string cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia;
	bool estadoPaciente = true;
	char generoPaciente;

	//especialidad
	string especialidadd;
	for (int i = 0; i < 10; i++)
	{
		cout << "Especialidad: "; cin >> especialidadd;
		_especialidad.setEspecialidadEnPosicion(i, especialidadd);
		cout << "Especialidad ha sido añadida, nombre de la especialidad: " << especialidadd << endl;
		system("pause");
		system("cls");
	}
	system("pause");
	system("cls");
	cout << _especialidad.toStringEspecialidades() << endl;
	system("pause");

	int fila = 2;
	int columna = 2;

	Pabellon* _pabellon = new Pabellon(fila, columna);
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < columna; j++)
		{
			{
				//se crea paciente
				system("cls");

				cout << "Ingrese los datos del paciente: " << endl << endl;
				cout << "Nombre: "; cin >> nombre; cout << endl;
				cout << "Cedula: "; cin >> cedula; cout << endl;
				cout << "direccion: "; cin >> direccion; cout << endl;
				cout << "Patologia: "; cin >> patologia; cout << endl;
				cout << "Tipo de Cirugia: "; cin >> tipoCirugia; cout << endl;
				cout << "Prioridad del Paciente: "; cin >> prioridadPaciente; cout << endl;
				cout << "Fecha Cirugia: "; cin >> fechaCirugia; cout << endl;
				cout << "Genero del paciente: "; cin >> generoPaciente; cout << endl;

				_paciente = new Paciente(cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia, true, generoPaciente);
				cout << "Paciente creado exitosamente" << endl;

				system("pause");

				system("cls");
				cout << _paciente->reportePaciente() << endl << endl;
				system("pause");

				Cama* _cama = new Cama("PLACEHOLDER", _paciente, false);

				system("cls");
				cout << _cama->toStringCama() << endl << endl;
				system("pause");


				_pabellon->setCamaEnPosicion(_cama, i, j);

			}
		}
	cout << _pabellon->toStringPabellon() << endl;

	//----------//

	string esp;

	for (int i = 0; i < 3; i++)
	{
		{
			cout << "Nombre del medico: "; cin >> nombre;
			cout << "Especialidad: "; cin >> esp;

			for (int j = 0; j < 10; j++)
				if (_especialidad.getEspecialidadEnPosicion(j) == esp)
				{
					Medico* _medico = new Medico(nombre, esp);
					//repetir = false;
					vectorMedico.push_back(_medico);
					cout << "Digite el nombre del paciente: "; cin >> nombre;
					vectorMedico[i]->agregarPaciente(&_pabellon->getPabellon().getPaciente());

					cout << "[" << i + 1 << "] ";
					cout << vectorMedico[i]->reporteMedico();
					cout << endl << endl;
				}
			system("pause");
			system("cls");
		}

	}
	string eliminarPaciente;
	cout << "Eliminar Paciente en especifico: "; cin >> eliminarPaciente;
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < columna; j++)
		{
			if (_pabellon->getPabellon().getPaciente().getNombre() == eliminarPaciente);
			_pabellon->getPabellon().getPaciente().~Paciente();
		}
	}

	cout << "Final del programa";
	system("pause");
	return 0;
}
#include"Interfaz.h"

/*
HACER:
Doctor[]: creacion[], visualizacion[], listado de pacientes[], lista de doctores[], asignar especialidad[]
Paciente[X]: creacion[X], visualizacion[X], cambiar de cama[], dar de alta/cambiar estadoPaciente[X]
Pabellon[]: creacion[], visualizacion[], añadir camas con datos del paciente(estado y nombre de paciente)[]
Cama[]: creacion[], visualizacion[], cambiar de cama?[], asignar codigo[]
Especialidades[X]: creacion[X], visualizacion[X], añadir especialidades al vector[X],
*/


vector<Medico*> vectorMedico; //aqui los 20 doctores

Medico _medico;
Especialidad _especialidad;
Paciente* _paciente;
Cama* _cama = new Cama();
Pabellon _pabellon;

void Interfaz::menu() {
	int respuesta = 0;

	do {                                    //metodo menu 
		system("cls");
		cout << "  Menu Hospital" << endl;
		cout << " Hospital Esperanza" << endl;
		cout << " ====================================\n" << endl;
		cout << "  1.Menu doctor " << endl;
		cout << "  2.Menu Paciente " << endl;
		cout << "  3.Menu Pabellones" << endl;
		cout << "  4.Menu camas  " << endl;
		cout << "  5.Menu Espeialidades  " << endl;
		cout << "\n";
		cout << "  6.  Salir \n";
		cout << "  ====================================\n";
		cout << "  Enter your selection: ";

		cin >> respuesta;
		//system("cls");
		switch (respuesta) {

		case 1:
			system("cls");
			menuDoctor();
			cin.ignore();
			cin.get();
			break;
		case 2:
			menuPaciente();
			cin.ignore();
			cin.get();
			break;
		case 3:
			menuPabellon();
			cin.ignore();
			cin.get();
			break;
		case 4:
			menuCamas();
			cin.ignore();
			cin.get();
			break;
		case 5:
			menuEspecialidades();
			cin.ignore();
			cin.get();
			break;
		case 6:
			cout << "Muchas Gracias";
			break;
		default:
			cout << respuesta << "Numero Invalido";
			break;
		}

		if (cin.fail()) {
			cout << "Entrada no permitida, use un numero" << endl;
			//menu();
		}
		if (respuesta <= 0 || respuesta >= 6)
			cout << "Estrada no permitida, no se aceptan numeros menores a 1 o mayores a 5" << endl;

		cout << endl;

	} while (respuesta != 6);
	system("pause");
}


void Interfaz::menuDoctor() {
	//system("cls");
	int respuesta = 0;
	cout << "  Menu Doctor" << endl;
	cout << "  ====================================\n" << endl;
	cout << "  1.Ingresar doctor " << endl;
	cout << "  2.Datos de un doctor especifico " << endl;
	cout << "  3.Datos de todos los doctores " << endl;
	cout << "  4.Eliminar Doctor" << endl;
	cout << "  5.Menu Principal" << endl;
	cin >> respuesta;

	string nombre;

	string nombreMedico;
	string especialidad;

	switch (respuesta) {
	case 1:
		//for (int i = 0; i < 20; i++)
		/*cout << "Nombre: "; cin >> nombre; cout << endl;
		if (_especialidad.getCantidadEspecialidad() == 0) {
			cout << "No hay Especialidades" << endl;
			system("pause");
			menu();
		}
		else
			cout << "Especialidad:";
		cin >> especialidad;//.setEspecialidades(); cout << endl;
		for (int j = 0; j < 10; j++)
			if (_especialidad.getEspecialidadEnPosicion(j) == especialidad) {
				vectorMedico[j] = new Medico(nombre, especialidad);
			}*/
			/*for (int i = 0; i < 20; i++)
			{
				cout << "Nombre: ";
				cin >> nombre; cout << endl;
				cout << "Especialidad: " << endl; cin >> especialidad;
				if (especialidad == _especialidad.buscarEspecialidad(especialidad))
					vectorMedico.push_back(_medico = new Medico(nombre, _especialidad));
				else
					cout << "No existe Especialidad" << endl << endl;
			}
			menuDoctor();*/
		break;
	case 2:

		if (vectorMedico.size() == 0)
			cout << "No hay doctores registrados." << endl; menuDoctor();

		cout << "Nombre del Medico: "; cin >> nombreMedico; cout << endl;
		if (cin.fail()) {
			cout << "Entrada invalida" << endl; menuDoctor();
		}
		else

			for (int i = 0; i < 20; i++)
				if (vectorMedico[i]->getNombre() == nombreMedico)
					cout << vectorMedico[i]->reporteMedico();
		break;

	case 3:
		for (int i = 0; i < 20; i++)
		{
			cout << "[" << i + 1 << "]" << vectorMedico[i]->reporteMedico() << endl;
		}


	case 4:
		cout << "Nombre del medico a eliminar del sistema: "; cin >> nombreMedico; cout << endl;
		if (cin.fail()) {
			cout << "Entrada invalida" << endl; menuDoctor();
		}
		else
			for (int i = 0; i < 20; i++)
				if (vectorMedico[i]->getNombre() == nombreMedico /*&& vectorMedico[i].paciente.size() == 0*/)
					delete vectorMedico[i];
				else
					cout << "El doctor no se puede eliminar mientras tenga pacientes asignados" << endl;
	case 5:
		menu();

	default:
		std::cout << respuesta << " es un número inválido\n";

		std::cout << std::endl;

	} while (respuesta != 5)
		system("pause");
}




void Interfaz::menuPaciente() {
	system("cls");
	int respuesta = 0;
	std::cout << "  Menu Paciente" << endl;
	cout << "  ====================================\n";
	cout << "  1.Ingresar Paciente " << endl;
	cout << "  2.Imprimir Paciente" << endl;
	cout << "  3.cambiar la cama" << endl;
	cout << "  4.Dar alta paciente" << endl;
	cout << "  5.volver al menu" << endl;
	cin >> respuesta;

	string cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia;
	bool estadoPaciente = true;
	char generoPaciente;

	switch (respuesta)
	{
	case 1:
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

		_paciente = new Paciente(cedula, nombre, direccion, patologia, tipoCirugia, prioridadPaciente, fechaCirugia, estadoPaciente, generoPaciente);
		cout << "Paciente creado exitosamente" << endl;

		system("pause");
		system("cls");
		menuPaciente();
		break;
	case 2:
		system("cls");
		cout << _paciente->reportePaciente() << endl;

		system("pause");
		system("cls");
		menuPaciente();
		break;
	case 3:
		system("cls");
		cout << "No implementado" << endl << endl;

		system("pause");
		system("cls");
		menuPaciente();
		break;
	case 4:
		system("cls");
		_paciente->setEstadoPaciente(false);
		cout << "Paciente dado de alta" << endl << endl;

		system("pause");
		system("cls");
		menuPaciente();
		break;
	case 5:
		system("cls");
		menu();
		break;
	}
}

void Interfaz::menuPabellon() {
	/*
	DATOS DE PRUEBA:
	MATRIZ 2X2
	*/
	Pabellon* _pabellon = new Pabellon();
	Cama* _cama = new Cama("2B", _paciente, false);
	Paciente* _paciente = new Paciente("1111", "Mario", "Izquierda", "Memeitis", "Meme intensiva", "SUPER ALTA", "PARA AYER", true, 'M');

	/*----------------------------------------------------------------------------------------------------------------------------------------------*/
	system("cls");
	int respuesta = 0;
	cout << "  Menu Pabellon" << endl;
	cout << "  ====================================\n";
	cout << "  1.Crear Pabellon " << endl;
	cout << "  2.Imprimir Pabellon" << endl;
	cout << "  3.Añadir camas al Pabellon" << endl;
	cout << "  4.Eliminar datos de una cama" << endl;
	cout << "  5.volver al menu" << endl;
	cin >> respuesta;

	int fila = 2;
	int columna = 2;

	switch (respuesta)
	{
	case 1:
	{
		system("cls");
		Pabellon* _pabellon = new Pabellon(fila, columna);

		cout << "Pabellon creado, tamanno: [" << fila << "] [" << columna << "]." << endl;
		for (int i = 0; i < fila; i++) {
			for (int j = 0; j < columna; j++) {
				_pabellon->setCamaEnPosicion(_cama, i, j);
				cout << _pabellon->getPabellon().getCodigo() << endl;
			}
		}
		cout << "Camas añadidas" << endl;

		system("pause");
		system("cls");
		menuPabellon();
	}
	break;
	case 2:
	{
		system("cls");
		cout << _pabellon->toStringPabellon() << endl;

		system("pause");
		system("cls");
		menuPabellon();
	}
	break;
	case 3:
	{
		cout << "Sin implementar 3" << endl;
		system("pause");
		system("cls");
		menuPabellon();
	}
	break;
	case 4:
	{
		cout << "Sin implementar 4" << endl;
		system("pause");
		system("cls");
		menuPabellon();
	}
	break;
	case 5:
	{
		cout << "Sin implementar 5" << endl;
		system("pause");
		system("cls");
		menuPabellon();
	}
	break;
	default:
	{
		cout << respuesta << "Numero Invalido" << endl;
		system("pause");
		system("cls");
		menuPabellon();
	}
	break;
	}

}

void Interfaz::menuCamas() {
	system("cls");
	int respuesta = 0;
	std::cout << "  Menu Cama" << endl;
	cout << "  ====================================\n";
	cout << "  1.Ingresar Cama " << endl;
	cout << "  2.Imprimir Cama" << endl;
	cout << "  3.cambiar la cama??" << endl;
	cout << "  4.Dar de alta el paciente" << endl;
	cout << "  5.volver al menu" << endl;
	cin >> respuesta;

	switch (respuesta)
	{
	case 1:
		system("cls");
		cout << "Sin implementar" << endl << endl;

		system("pause");
		system("cls");
		break;
	case 2:
		system("cls");
		cout << _cama->toStringCama() << endl << endl;

		system("pause");
		system("cls");
		break;
	case 3:
		break;
	}
}

void Interfaz::menuEspecialidades() {
	int respuesta = 0;
	cout << "  Especialidades" << endl;
	cout << "  ====================================\n";
	cout << "  1.Ingresar Especialidades" << endl;
	cout << "  2.Listado de Especialidades" << endl;
	cout << " 3.Menu " << endl;
	cin >> respuesta;

	string especialidadd;

	switch (respuesta)
	{
	case 1:
		system("cls");

		cout << "Especialidad: "; cin >> especialidadd;
		_especialidad.setEspecialidades(especialidadd);
		cout << "Especialidad ha sido añadida, nombre de la especialidad: " << especialidadd << endl;
		menuEspecialidades();
		break;
	case 2:
		system("cls");
		cout << _especialidad.toStringEspecialidades() << endl;
		menuEspecialidades();
		break;
	case 3:
		system("cls");
		menu();
		break;
	}
}


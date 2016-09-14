/*
	Nombre: Gabriel Filtzer Gorbach

*/

#include "Nodo.h"

class Cola{

private:
	Nodo *H;
	Nodo *T;

public:
	Cola();
	void Encolar(int Dato);
	int Desencolar();
	void Show();
	bool ColaVacia();
	void VaciarCola();
};

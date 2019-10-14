#pragma once
#include "Carta.h"
#include "Nodo.h"
class Pila
{
private:
	Nodo* Head = nullptr;// siempre inicializar punteros en nulo
private:
	int NElementos = 0;
public:
	void Apilar(Carta valor); // Recibe carta para ingresar a la pila
public:
	Carta Desapilar(); //Sacar carta de la pila
public:
	Carta ObtenerCima(); //Obtener Carta en la cima sin sacarla
public:
	Pila();
	~Pila();
};


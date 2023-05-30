#pragma once
#include "Pila.h"
#include <iostream>
#include <string>
#include "MiClase.h"
using namespace std;
template<typename T>
void Tipos() {
	Pila<T> variablePila;
	const size_t tamVariablePila = 10;
	int intValor = 1;
	cout << "\n- - > Insertar elementos en mcPila\n";
	for (size_t i = 0; i < tamVariablePila; ++i){
		variablePila.insertar(intValor);
		cout << intValor++ << ' ';
	}
}
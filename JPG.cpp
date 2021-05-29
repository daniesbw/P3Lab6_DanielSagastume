#include "JPG.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
JPG::JPG() {
	largo=0;
	ancho=0;
}

JPG::JPG(string pAutor, string pNombre, FileSystemNode* padre, bool pConFlash, string pResolucion, double largo, double ancho): Archivo(pAutor, pNombre, padre) {
	this->conFlash=pConFlash;
	this->resolucion=pResolucion;
	this->largo=largo;
	this->ancho=ancho;
}

bool JPG::getFlash() {
	return this->conFlash;
}

string JPG::getResolucion() {
	return this->resolucion;
}

double JPG::getLargo() {
	return this->largo;
}

double JPG::getAncho() {
	return this->ancho;
}


string JPG::toString() {
	stringstream stream;
	string retorno;
	stream<<this->nombre+"\n";
	stream<<"	ConFlas: ";
	stream<<conFlash+"\n";
	stream<<"	Resolucion: ";
	stream<<resolucion+"\n";
	stream<<"	Largo: ";
	stream<<largo;
	stream<<"\n";
	stream<<"	Ancho: ";
	stream<<ancho;
	stream<<"\n";

	retorno=stream.str();
	return retorno;
}
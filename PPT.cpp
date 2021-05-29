#include "PPT.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
PPT::PPT() {
	this->numSlides=this->numPlantilla=0;

}

PPT::PPT(string pAutor, string pNombre, FileSystemNode* padre, string pTitulo, int pNumSlides,int pNumPlantilla, bool pTieneAnimaciones): Archivo(pAutor, pNombre, padre) {
	this->titulo=titulo;
	this->numSlides=pNumSlides;
	this->numPlantilla=pNumPlantilla;
	this->tieneAnimaciones=pTieneAnimaciones;
}

string PPT::getTitulo(){
	return this->titulo;
}

int PPT::getPlantilla(){
	return this->numPlantilla;
}

int PPT::getSlides(){
	return this->numSlides;
}

bool PPT::getAnimaciones(){
	return this->tieneAnimaciones;
}

string PPT::toString() {
	stringstream stream;
	string retorno;

	stream<<this->nombre+"\n";
	stream<<"	Titulo: ";
	stream<<titulo+"\n";
	stream<<"	numSlides: ";
	stream<<numSlides+"\n";
	stream<<"	numPlantilla: ";
	stream<<numPlantilla;
	stream<<"\n";
	stream<<"	numSlides: ";
	stream<<numSlides;
	stream<<"\n";
	stream<<"	numSlides: ";
	stream<<tieneAnimaciones;
	stream<<"\n";

	retorno=stream.str();
	return retorno;
}
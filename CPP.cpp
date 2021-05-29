#include "CPP.h"

CPP::CPP() {
	lineasCodigo=0;
	numErrores=0;
}

CPP::CPP(string pAutor, string pNombre, FileSystemNode* padre, int linea, int error) : Archivo(pAutor, pNombre, padre) {
	this->lineasCodigo=linea;
	this->numErrores=error;
}

int CPP::getLineas(){
	return this->lineasCodigo;
}

int CPP::getErrores(){
	return this->numErrores;
}

string CPP::toString() {
	string retorno="";
	retorno+=this->nombre+"\n";
	retorno+="lineasCodigo: ";
	retorno+=lineasCodigo+"\n";
	retorno+="numErrores: ";
	retorno+=numErrores+"\n";
	return retorno;
}
#include "Archivo.h"

Archivo::Archivo() {
}

Archivo::Archivo(string pAutor, string pNombre, FileSystemNode* padre): FileSystemNode(pAutor,pNombre, padre) {

}

string Archivo::toString() {
	return "";
}
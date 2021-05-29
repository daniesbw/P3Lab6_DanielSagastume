#include "FileSystemNode.h"
#include <string>

using namespace std;
FileSystemNode::FileSystemNode() {
}

FileSystemNode::FileSystemNode(string pAutor, string pNombre, FileSystemNode* pPadre) {
	this->autor=pAutor;
	this->nombre=pNombre;
	this->padre=padre;
}
string FileSystemNode::getNombre() {
	return this->nombre;
}
string FileSystemNode::toString() {
	return "";
}
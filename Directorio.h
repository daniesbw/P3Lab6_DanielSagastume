#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include <vector>
#include "FileSystemNode.h"
#include <string>

using namespace std;
class Directorio : public FileSystemNode {
	public:
		Directorio();
		Directorio(string, string, FileSystemNode*);
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		string toString();
	protected:
		vector<FileSystemNode*> hijos;
};

#endif
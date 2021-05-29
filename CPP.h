#ifndef CPP_H
#define CPP_H

#include "Archivo.h"

class CPP : public Archivo {
	public:
		CPP();
		CPP(string, string, FileSystemNode*, int, int);
		virtual string toString();
		int getLineas();
		int getErrores();
	protected:
		int lineasCodigo;
		int numErrores;
};

#endif
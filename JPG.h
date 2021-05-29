#ifndef JPG_H
#define JPG_H
#include "FileSystemNode.h"
#include "Archivo.h"
#include <iostream>
#include <string>

using namespace std;
class JPG: public Archivo {
	public:
		JPG();
		JPG(string, string, FileSystemNode*, bool, string, double, double);
		virtual string toString();
		bool getFlash();
		string getResolucion();
		double getLargo();
		double getAncho();
	protected:
		bool conFlash;
		string resolucion;
		double largo;
		double ancho;
};

#endif
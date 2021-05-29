#ifndef PPT_H
#define PPT_H
#include "FileSystemNode.h"
#include "Archivo.h"
#include <iostream>
#include <string>

using namespace std;
class PPT : public Archivo
{
	public:
		PPT();
		PPT(string, string, FileSystemNode*, string, int, int, bool);
		virtual string toString();
		string getTitulo();
		int getSlides();
		int getPlantilla();
		bool getAnimaciones();
	protected:
		string titulo;
		int numSlides;
		int numPlantilla;
		bool tieneAnimaciones;
};

#endif
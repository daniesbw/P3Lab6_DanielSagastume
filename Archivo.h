#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <iostream>
#include <string>
#include "FileSystemNode.h"
using namespace std;
class Archivo : public FileSystemNode
{
	public:
		Archivo();
		Archivo(string, string, FileSystemNode*);
		virtual string toString()=0;
	protected:
		
};

#endif
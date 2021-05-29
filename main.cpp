#include <iostream>
#include "Directorio.h"
#include "FileSystem.h"
#include "FileSystemNode.h"
#include "JPG.h"
#include "PPT.h"
#include "CPP.h"
#include <string>
int menu();

using namespace std;
int main(int argc, char** argv) {

	FileSystem* fs =new FileSystem();
	Directorio* carpeta1=new Directorio("Daniel", "Carpeta 1", fs->getRoot());

	fs->getRoot()->agregarDirectorio(carpeta1);

	carpeta1->agregarArchivo(new CPP("Daniel", "lab.cpp", fs->getRoot(), 45, 0) );
	carpeta1->agregarArchivo(new JPG("Daniel", "playa.jpg", fs->getRoot(), true, "1280", 123.3, 111.2));
	carpeta1->agregarArchivo(new PPT("Daniel", "expo.ppt", fs->getRoot(), "Energia", 10, 2, false));

	Directorio* carpeta2=new Directorio("Daniel", "Carpeta 2", fs->getRoot());

	carpeta2->agregarArchivo(new CPP("Daniel", "err.cpp", fs->getRoot(), 45, 0) );
	carpeta2->agregarArchivo(new JPG("Daniel", "copan.jpg", fs->getRoot(), true, "1360", 111.3, 111.2));
	carpeta2->agregarArchivo(new PPT("Daniel", "expo2.ppt", fs->getRoot(), "C++", 10, 2, false));

	Directorio* carpeta3=new Directorio("Daniel", "Carpeta 3", fs->getRoot());

	carpeta3->agregarArchivo(new CPP("Daniel", "abc.cpp", fs->getRoot(), 2000, 21) );
	carpeta3->agregarArchivo(new JPG("Daniel", "miami.jpg", fs->getRoot(), false, "720", 321.3, 10.2));
	carpeta3->agregarArchivo(new PPT("Daniel", "Awesome_12041018.ppt", fs->getRoot(), "Java", 20, 0, false));

	carpeta1->agregarDirectorio(carpeta2);

	carpeta2->agregarDirectorio(carpeta3);
	int op=0;
	while(op!=5) {
		switch(op=menu()) {
			case 1: {
				cout<<"==============Imprimir FileSystem=============="<<endl;
				fs->getRoot()->imprimirRecursivo(0);
				cout<<"==============REGRESANDO AL MENU=============="<<endl;
				break;
			}
			case 2: {
				cout<<"==============Agregar Directorios=============="<<endl;
				cin.ignore();
				string nom, autor;

				cout<<"Ingrese el autor: ";
				getline(cin, autor);

				cout<<"Ingrese el nombre: ";
				getline(cin, nom);

				Directorio* as=new Directorio(autor, nom, fs->getRoot());
				fs->getRoot()->agregarDirectorio(as);
				cout<<"==============REGRESANDO AL MENU=============="<<endl;
				break;
			}
			case 3: {
				cout<<"==============Agregar Archivos=============="<<endl;
				int opc=0;
				cout<<"1. Crear CPP"<<endl
				    <<"2. Crear PTT"<<endl
				    <<"1. Crear JPG"<<endl;
				cin>>opc;
				if(opc==1) {
					cin.ignore();
					string nom, autor;

					cout<<"Ingrese el autor: ";
					getline(cin, autor);

					cout<<"Ingrese el nombre: ";
					getline(cin, nom);
					int linea, error=0;
					cout<<"Ingrese el numero de lineas: "<<endl;
					cin>>linea;
					cout<<"Ingrese los errores: "<<endl;
					cin>>error;
					fs->getRoot()->agregarArchivo(new CPP(autor, nom, fs->getRoot(), linea, error));
				}
				cout<<"==============REGRESANDO AL MENU=============="<<endl;
				break;
			}
			case 4: {
				cout<<"==============Buscar por nombre=============="<<endl;
				cin.ignore();
				string palabra;

				cout<<"Ingrese el nombre: ";
				getline(cin, palabra);
				fs->getRoot()->buscarPorNombre(palabra);
				cout<<"==============REGRESANDO AL MENU=============="<<endl;
				break;
			}
			case 5: {
				cout<<"==============Saliendo=============";
				break;
			}
		}
	}
	delete fs;
	delete carpeta1;
	delete carpeta2;
	delete carpeta3;
	return 0;
}

int menu() {
	int op=0;
	while(true) {
		cout<<"1) Imprimir FileSystem"<<endl
		    <<"2) Agregar Directorios"<<endl
		    <<"3) Agregar Archivos"<<endl
		    <<"4) Buscar por nombre"<<endl
		    <<"5) Salir"<<endl;
		cout<<"Ingrese la opcion: ";
		cin>>op;
		if(op>0&&op<6) {
			break;
		} else {
			cout<<"La opcion debe estar entre 1 y 5"<<endl;
		}
	}
	return op;
}
#include "Directorio.h"
#include <string>
#include "JPG.h"
#include "PPT.h"
#include "CPP.h"

using namespace std;
Directorio::Directorio(string pAutor, string pNombre, FileSystemNode* padre): FileSystemNode(pAutor, pNombre, padre) {

}

void Directorio::imprimirRecursivo(int iteracciones) {
	for(int i=0; i<hijos.size(); i++) {
		for(int j=0; j<iteracciones*6; j++) {
			cout<<" ";
		}
		Directorio* ahora;
		CPP* cpp;
		JPG* jpg;
		PPT* ppt;
		if(dynamic_cast<Directorio*> (hijos[i])) {
			ahora=dynamic_cast <Directorio*> (hijos[i]);
			cout<<"Carpeta Name: ";
			cout<<ahora->toString();
			cout<<endl;
			ahora->imprimirRecursivo(iteracciones+1);
		} else if(dynamic_cast<JPG*> (hijos[i])) {
			jpg=dynamic_cast <JPG*> (hijos[i]);
			cout<<jpg->getNombre()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"Ancho: "<<jpg->getAncho()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"Largo: "<<jpg->getLargo()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"conFlash: "<<jpg->getFlash()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"Resolucion: "<<jpg->getResolucion()<<endl;
			cout<<endl;
		} else if(dynamic_cast<PPT*> (hijos[i])) {
			ppt=dynamic_cast <PPT*> (hijos[i]);
			cout<<ppt->getNombre()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"Titulo: "<<ppt->getTitulo()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"numSlides: "<<ppt->getSlides()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"numPlantillas: "<<ppt->getPlantilla()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"tieneAnimaciones: "<<ppt->getAnimaciones()<<endl;
			cout<<endl;
		} else if(dynamic_cast<CPP*> (hijos[i])) {
			cpp=dynamic_cast <CPP*> (hijos[i]);
			cout<<cpp->getNombre()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"lineas de codigo: "<<cpp->getLineas()<<endl;
			for(int z=0; z<iteracciones*6; z++) {
				cout<<" ";
			}
			cout<<"numero de errores"<<cpp->getErrores()<<endl;
			cout<<endl;
		}
	}
}

void Directorio::agregarArchivo(FileSystemNode* pArchivo) {
	hijos.push_back(pArchivo);
}

void Directorio::agregarDirectorio(FileSystemNode* pDirectorio) {
	hijos.push_back(pDirectorio);
}

void Directorio::buscarPorNombre(string nom) {
	for(int i=0; i<hijos.size(); i++) {
		if(dynamic_cast<Directorio*> (hijos[i])) {
			Directorio* temp;
			temp= dynamic_cast<Directorio*> (hijos[i]);
			if(temp->getNombre()==nom) {
				cout<<temp->toString();
			}
		} else if(dynamic_cast<JPG*> (hijos[i])) {
			JPG* temp;
			temp= dynamic_cast<JPG*> (hijos[i]);
			if(temp->getNombre()==nom) {
				cout<<	temp->toString();
			}
		} else if(dynamic_cast<PPT*> (hijos[i])) {
			PPT* temp;
			temp= dynamic_cast<PPT*> (hijos[i]);
			if(temp->getNombre()==nom) {
				cout<<temp->toString();
			}
		} else if(dynamic_cast<CPP*> (hijos[i])) {
			CPP* temp;
			temp= dynamic_cast<CPP*> (hijos[i]);
			if(temp->getNombre()==nom) {
				cout<<temp->toString();
			}
		}
	}
}


string Directorio::toString() {
	return this->getNombre();
}
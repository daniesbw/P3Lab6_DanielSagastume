#include "FileSystem.h"
FileSystem::FileSystem(){
	this->root=new Directorio("Daniel", "Root", NULL);
}

Directorio* FileSystem::getRoot(){
	return this->root;
}

FileSystem::~FileSystem(){
	delete root;
}
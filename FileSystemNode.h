#ifndef FILESYSTEMNODE_H
#define FILESYSTEMNODE_H
#include <iostream>
#include <string>

using namespace std;
class FileSystemNode {
	public:
		FileSystemNode();
		FileSystemNode(string, string, FileSystemNode*);
		virtual string toString()=0;
		string getNombre();

	protected:
		string nombre;
		string autor;
		FileSystemNode* padre;
};

#endif
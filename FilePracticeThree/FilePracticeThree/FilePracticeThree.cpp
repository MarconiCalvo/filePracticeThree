#include <iostream>
#include "FileManager.h"
int main(){
	FileManager fileManger;
	string filePath = "/Users/Marconi/Documents/Ejercicio 21/filePracticeThree/FilePracticeThree/FilePracticeThree/anime";

	string* data = fileManger.getDirectories(filePath);
	string directoryPath = data[1];

	fileManger.getFiles(directoryPath);
	//fileManger.showDirectory(directoryPath);
}

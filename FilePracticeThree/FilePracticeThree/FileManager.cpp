#include "FileManager.h"

FileManager::FileManager(){

}

string* FileManager::getFiles(string directoryPath){ 
	string* directory = nullptr;
    int filesInDirectory = 0;
    for (const auto& file : filesystem::recursive_directory_iterator(directoryPath)) {
        cout << file.path()<<endl;
        filesInDirectory++;
    }
    if (filesInDirectory>0) {
        directory = new string[filesInDirectory];
    }
    int index = 0;
	for (const auto& file : filesystem::recursive_directory_iterator(directoryPath)) {
        directory[index] = file.path().generic_string();
        index++;
	}

	return directory;
}

void FileManager::showDirectory(string directotyPath){
	for (const auto& file : filesystem::recursive_directory_iterator(directotyPath)) {
		cout << file.path() << endl;
	}
}

string* FileManager::getDirectories(string directoryPath){
    int numbDirectoriesInCarpet = 0;
    string* directoriesInCarpet = nullptr;
    string x;
    for (const auto& file : directory_iterator(directoryPath)) {
        if (is_directory(file.path())) {
            numbDirectoriesInCarpet++;
        }
    }

    cout << "Cantidad de carpetas: " << numbDirectoriesInCarpet << endl;

    if (numbDirectoriesInCarpet > 0) {
        directoriesInCarpet = new string[numbDirectoriesInCarpet];
        int index = 0;

        for (const auto& file : directory_iterator(directoryPath)) {
            if (is_directory(file.path())) {
                directoriesInCarpet[index] = file.path().generic_string();
                index++;
            }
        }
    }
    return directoriesInCarpet;
}
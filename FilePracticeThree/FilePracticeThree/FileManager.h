#pragma once
#include <iostream>
#include <fstream>
#include <direct.h>
#include <filesystem>
#include <string>
using std::filesystem::directory_iterator;

using namespace std;

class FileManager{
	private:

	public:
		FileManager();
		string* getFiles(string directoryPath);
		void showDirectory(string directotyPath);
		string* getDirectories(string directoryPath);
};


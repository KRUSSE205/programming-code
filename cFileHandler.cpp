/*
=================
- cTileMap.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cFileHandler.h"

/*
=================================================================
Default Constructor
=================================================================
*/
cFileHandler::cFileHandler()
{
	m_filename = "";
}
cFileHandler::cFileHandler(string fileName)
{
	m_filename = fileName;
}

int cFileHandler::openFile(int mode)
{
	theFile.open(m_filename, mode);
	if (!theFile.is_open()) {
		// Can not open file
		return ERROR;
	}
	else {
		return TRUE;
	}
}

void cFileHandler::closeFile()
{
	theFile.close();
}

string cFileHandler::readDataFromFile()
{
	string lineFromFile;
	string output;
	while (getline(theFile, lineFromFile))
	{
		output += lineFromFile + ",";
	}
	return output;
}

void cFileHandler::writeDataToFile(string textLine)
{
	theFile << textLine;
}

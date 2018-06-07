/***********************************************************************
// OOP244 Workshop 1: Compiling modular source code
// File	tools.h
// Version 1.0
// Date	2018/05/18
// Author	Jeffrey Gurfinkel, jegurfinkel@myseneca.ca, 066364092
// Description
// provides tools
//
/////////////////////////////////////////////////////////////////
***********************************************************************/

#ifndef sict_tools_H
#define sict_tools_H
namespace sict {
	// Displays the user interface menu
	int menu();
	// Performs a fool-proof integer entry
	int getInt(int min, int max);
}
#endif
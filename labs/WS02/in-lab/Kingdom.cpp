/***********************************************************
// Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 2.0
// Date May 25 2018
// Author Jeffrey Gurfinkel, jegurfinkel@myseneca.ca, 066364092
// Description
// kingdom struct
///////////////////////////////////////////////////////////
***********************************************************/

#include <iostream>
#include "Kingdom.h"

using namespace std;
namespace sict {
	void display(Kingdom& const  K)
	{
		cout << K.m_name << ", population " << K.m_population << endl;
	}
	
}
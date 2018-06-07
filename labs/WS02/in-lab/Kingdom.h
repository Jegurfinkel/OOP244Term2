/***********************************************************
// Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 2.0
// Date May 25 2018
// Author Jeffrey Gurfinkel, jegurfinkel@myseneca.ca, 066364092
// Description
// kingdom header
///////////////////////////////////////////////////////////
***********************************************************/


#pragma once


namespace sict {
	struct Kingdom{
		// a statically allocated array of characters of size 32 (including '\0') that holds the name of the kingdom
		char m_name[32];

		//an integer that stores the number of people living in the kingdom
		int m_population;
	};
	//function display prints out the name and population of a kingdom
	void display(Kingdom& const K );
}

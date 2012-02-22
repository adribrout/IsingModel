/*
 *
 * //Ising Model Project part of M1 computing project
 * Copyright (c) 2012 Rémi Eté & Adrien Girard,
 * All Right Reserved.
 *
 * Use and copying of this software and preparation of derivative works
 * based upon this software are permitted. Any copy of this software or
 * of any derivative work must include the above copyright notice, this
 * paragraph and the one after it.
 *
 *
 */

#ifndef MENU_H
#define MENU_H

#include <map>
#include <string>
//#include "../msgstream/include/MsgStream.h"

class Menu
{
private :
	std::map <char,bool> optionCharacterMap ;
	std::map <std::string,bool> optionWordMap ;
	std::string size ;
	std::string lerror ;


public:
	Menu() ;
	~Menu() ;
	bool CharacterOptionInMap(char character) const ;
	bool WordOptionInMap(std::string word) const ;
	void Usage() const ;
	int CommandAnalysis(int argc, char *argv[]) ;
	bool CharOptionSet(char opt) ;
	bool WordOptionSet(std::string opt) ;
};

#endif //MENU_H

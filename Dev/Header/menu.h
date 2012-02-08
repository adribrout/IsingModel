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

class Menu
{
private :
	list <char> optionCharacterList ;
	list <std::string> optionWordList ;
	bool alreadyInstanciated ;


public:
	Menu();
	bool CharacterOptionInList(char character) const ;
	bool WordOptionInList(std::string word) const ;
	void Usage() const ;
	void CommandAnalysis() ;

};

#endif //MENU_H

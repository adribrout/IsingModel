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

#include <iostream>
#include "menu.h"
#include <string>
using namespace std;

/*
 * Implementation of Menu Class
 */

Menu::Menu()
{
	/*
	 * Menu constructor. Set all options.
	 */

	optionCharacterMap['e'] = false ;		// show errors in console
	optionCharacterMap['g'] = false ;		// begin in graphic mode
	optionCharacterMap['d'] = false ;		// forward error message in /dev/null
	optionCharacterMap['n'] = false ;		// set the size of the solid as n x n atoms

	optionWordMap["graphic"] = false ;		// begin in graphic mode
	optionWordMap["error"] = false ;			// show error in console
	optionWordMap["help"] = false ;			// display the usage of the command
	optionWordMap["null"] = false ;			// forward error message in /dev/null
	optionWordMap["element"] = false ;		// set the Studied Element
	optionWordMap["inputFile"] = false ;		// set the input file
	optionWordMap["outputFile"] = false ;	// set the output file

}


Menu::~Menu()
{
	/*
	 * Default destructor
	 */
}


void Menu::Usage() const
{
	/*
	 * Display usage of the command
	 */

	cout << "Usage: isingmodel [OPTION]" << endl ;
	cout << "Exemple : \"isingmodel -g\" to start with graphic mode" << endl ;
	cout << endl ;
	cout << "Display Options :" << endl;
	cout << "   -g,  --graphic                Start with graphic mode" << endl ;
	cout << "   -e,  --error                  Error messages in console mode." << endl ;
	cout << "                                 Default mode store error messages in a log file" << endl ;
	cout << "        --help                   Display help message and quit" << endl ;
	cout << "   -d,  --null                   Forward error messages in /dev/null" << endl << endl ;
	cout << "File Options :" << endl;
	cout << "        --inputFile=INPUTFILE    Set INPUTFILE as input file" << endl ;
	cout << "        --outputFile=OUTPUTFILE  Set OUTPUTFILE as output data file" << endl << endl ;
	cout << "Analysis Options :" << endl;
	cout << "   -n,  --size=N                 Set the size of the solid as N x N atoms" << endl ;
	cout << "        --element=ELT            Studied element for Ising model wiil be ELT" << endl << endl ;
	cout << "Report bug to remi.ete@gmail.com" << endl ;
	cout << "Source code can be downloaded on github : <https://github.com/rete/IsingModel>" << endl ;

}

void Menu::CommandAnalysis(int argc, char * argv[])
{
	/*
	 * Analyze argument passed in console
	 */

	char c ;
	for (int i=1 ; i<argc ; i++)
	{
		char * cmd = argv[i] ;
		if (*cmd == '-')  // It's an option
		{
			cmd++ ;
			if (*cmd == '-')  // It's an word option
			{
				cmd++ ;
				string word = "" ;
				while ((c=*cmd++)!= '=')
				{
					word.push_back(c) ;
				}
				if (word == "help")
					cout << "help option passed" << endl ;

			}
			while ((c=*cmd++)!=0)	//else it's a character option
			{
				switch (c)
				{
				case 'g' :
				optionCharacterMap['g'] = true ;
				cout << "graphic mode actived" << endl ;
				break ;

				case 'e' :
				cout << "error message will be written in the console" << endl ;
				break ;

				case 'n' :
				cout << "error message forwarded in /dev/null"<< endl ;
				break ;

				}
			}
		}
	}
}

bool Menu::CharacterOptionInMap(char character) const
{
	for (int i=0; i<optionCharacterMap.size() ; i++)
		{
		if (optionCharacterMap.count(character) != 0) return true ;
		else return false ;
		}
}

bool Menu::WordOptionInMap(string word) const
{
	for (int i=0; i<optionWordMap.size() ; i++)
		{
		if (optionWordMap.count(word) != 0) return true ;
		else return false ;
		}
}

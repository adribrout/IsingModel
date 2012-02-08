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

	optionCharacterList.push_back('e') ;		// show errors in console
	optionCharacterList.push_back('g') ;		// begin in graphic mode
	optionCharacterList.push_back('d') ;		// forward error message in /dev/null
	optionCharacterList.push_back('n') ;		// set the size of the solid as n x n atoms

	optionWordList.push_back("graphic") ;		// begin in graphic mode
	optionWordList.push_back("error") ;			// show error in console
	optionWordList.push_back("help") ;			// display the usage of the command
	optionWordList.push_back("null") ;			// forward error message in /dev/null
	optionWordList.push_back("element") ;		// set the Studied Element
	optionWordList.push_back("inputFile") ;		// set the input file
	optionWordList.push_back("outputFile") ;	// set the output file

}


Menu::~Menu()
{
	/*
	 * Default destructor
	 */
}


void Menu::usage()
{
	/*
	 * Display usage of the command
	 */

	cout << "Usage: isingmodel [OPTION]" << endl ;
	cout << "Exemple : \"isingmodel -g\" to start with graphic mode" << endl ;
	cout << endl ;
	cout << "Display Options :" << endl;
	cout << "   -g   --graphic :    Start with graphic mode" << endl ;
	cout << "   -e   --error    :    Error messages in console mode." << endl ;
	cout << "                        Default mode store error in a log file" << endl ;
	cout << "        --help     :    Display help message and quit" << endl ;
	cout << "   -n   --null     :    Forward error messages in /dev/null" << endl ;

}

void Menu::commandLineAnalysis(int argc, char * argv[])
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
				if (word == 'help')
					cout << "help option passed" << endl ;

			}
			while ((c=*cmd++)!=0)	//else it's a character option
			{
				switch (c)
				{
				case 'g' :
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

bool Menu::CharacterOptionInList(char character)
{
	for (int i=0; i<Menu.optionCharacterList.size() ; i++)
		{
		if (character == Menu.optionCharacterList[i]) return True ;
		else return False ;
		}
}

bool Menu::WordOptionInList(string word)
{
	for (int i=0; i<Menu.optionWordList.size() ; i++)
		{
		if (word == Menu.optionWordList[i]) return True ;
		else return False ;
		}
}

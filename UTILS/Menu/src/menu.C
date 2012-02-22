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
#include "../include/menu.h"
//#include "../msgstream/include/MsgStream.h"

using namespace std;


Menu::Menu()
{

	optionCharacterMap['g'] = false ;		// begin in graphic mode
	optionCharacterMap['n'] = false ;		// set the size of the solid as n x n atoms

	optionWordMap["graphic"] = false ;		// begin in graphic mode
	optionWordMap["help"] = false ;			// display the usage of the command
	optionWordMap["element"] = false ;		// set the Studied Element
	optionWordMap["inputFile"] = false ;	// set the input file
	optionWordMap["outputFile"] = false ;	// set the output file
	optionWordMap["size"] = false ;			// set the size of the solid as n x n atoms

}


Menu::~Menu()
{
	/*
	 * Default destructor
	 */
}

bool Menu::CharOptionSet(char opt)
{
	return optionCharacterMap[opt] ;
}

bool Menu::WordOptionSet(string opt)
{
	return optionWordMap[opt] ;
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
	cout << "        --help                   Display help message and quit" << endl << endl ;
	cout << "File Options :" << endl;
	cout << "        --inputFile=INPUTFILE    Set INPUTFILE as input file. Format is .ism" << endl ;
	cout << "        --GnuOutput=OUTPUTFILE   Set OUTPUTFILE as output data file" << endl ;
	cout << "        --DataOutput=OUTPUTFILE  Set OUTPUTFILE as output data file. Format is .dat" << endl << endl ;
	cout << "Analysis Options :" << endl;
	cout << "   -n,  --size=N                 Set the size of the solid as N x N atoms" << endl ;
	cout << "        --element=ELT            Studied element for Ising model will be ELT" << endl << endl ;
	cout << "Report bug to remi.ete@gmail.com" << endl ;
	cout << "Source code can be downloaded on github : <https://github.com/rete/IsingModel>" << endl ;

}

int Menu::CommandAnalysis(int argc, char * argv[])
{
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
				while ( ((c=*cmd++)!=0) )
				{
					if(c=='=') break ;
					word.push_back(c) ;
				}
				char * arg = cmd ;
				if (word == "help")
				{
					Usage() ;
					return 0 ;
				}
				if (word == "graphic")
				{
					optionCharacterMap['g'] = true ;
					cout << "graphic mode actived" << endl ;
				}
				if(word == "size")
				{
					while ( ((c=*arg++)!=0) )
					{
						size.push_back(c) ;
					}
					cout << "Size set to " << size << endl ;
				}
			}
			else
			{
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
	return 0 ;
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

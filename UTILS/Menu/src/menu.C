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


#include "../include/menu.h"

using namespace std;


Menu::Menu()
{

	optionCharacterMap['g'] = false ;		// begin in graphic mode
	optionCharacterMap['n'] = false ;		// set the size of the solid as n x n atoms
	optionCharacterMap['x'] = false ;		// begin the default analysis

	optionWordMap["graphic"] = false ;		// begin in graphic mode
	optionWordMap["help"] = false ;			// display the usage of the command
	optionWordMap["element"] = false ;		// set the Studied Element
	optionWordMap["inputFile"] = false ;	// set the input file
	optionWordMap["outputFile"] = false ;	// set the output file
	optionWordMap["size"] = false ;			// set the size of the solid as n x n atoms

	optionMap["graphic"] = "off" ;
	optionMap["size"] = "" ;
	optionMap["element"] = "" ;
	optionMap["inputFile"] = "" ;
	optionMap["dataOutputFile"] = "" ;
	optionMap["gnuplotFile"] = "" ;
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
	cout << "   -g,  --graphic                    Start with graphic mode" << endl ;
	cout << "        --help                       Display help message and quit" << endl << endl ;
	cout << "File Options :" << endl;
	cout << "        --inputFile=INPUTFILE        Set INPUTFILE as input file. Format is .ism" << endl ;
	cout << "        --gnuplotFile=GNUPLOTFILE    Set GNUFILE as gnuplot file" << endl ;
	cout << "        --dataOutputFile=OUTPUTFILE  Set OUTPUTFILE as output data file. Format is .dat" << endl << endl ;
	cout << "Analysis Options :" << endl;
	cout << "   -n,  --size=N                     Set the size of the solid as N x N atoms" << endl ;
	cout << "   -x                                Execute the default analysis" << endl ;
	cout << "        --element=ELT                Studied element for Ising model will be ELT" << endl << endl ;
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
					return 1 ;
				}
				else if (word == "graphic")
				{
					optionCharacterMap['g'] = true ;
					optionMap["gnuplotFile"] = "on" ;
				}
				else if(word == "size")
				{
					optionCharacterMap['n'] = true ;
					optionWordMap["size"] = true ;
					while ( ((c=*arg++)!=0) )
					{
						optionMap["size"].push_back(c) ;
					}
				}
				else if(word == "element")
				{
					optionWordMap["element"] = true ;
					while ( ((c=*arg++)!=0) )
					{
						optionMap["element"].push_back(c) ;
					}
				}
				else if(word == "inputFile")
				{
					optionWordMap["inputFile"] = true ;
					while ( ((c=*arg++)!=0) )
					{
						optionMap["inputFile"].push_back(c) ;
					}
				}
				else if(word == "dataOutputFile")
				{
					optionWordMap["dataOutputFile"] = true ;
					while ( ((c=*arg++)!=0) )
					{
						optionMap["dataOutputFile"].push_back(c) ;
					}
				}
				else if(word == "gnuplotFile")
				{
					optionWordMap["gnuplotFile"] = true ;
					while ( ((c=*arg++)!=0) )
					{
						optionMap["gnuplotFile"].push_back(c) ;
					}
				}
				else
				{
					cout << "Error : argument passed \'" << word << "\' to command line does not exists!" << endl ;
					return 1 ;
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
						optionMap["gnuplotFile"] = "on" ;
						break ;

					case 'n' :
						optionCharacterMap['n'] = true ;
						optionMap["gnuplotFile"] = string(argv[i+1]) ;
						break ;
					default :
						cout << "Error : argument passed \'" << c << "\' to command line does not exists!" << endl ;
						return 1 ;
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


void Menu::showAllOptions()
{
	cout << "All Options :" << endl ;
	cout << "graphic : " << optionMap["graphic"] << endl ;
	cout << "size : " << optionMap["size"] << endl ;
	cout << "element : " << optionMap["element"] << endl ;
	cout << "inputFile : " << optionMap["inputFile"] << endl ;
	cout << "dataOutputFile : " << optionMap["dataOutputFile"] << endl ;
	cout << "gnuplotFile : " << optionMap["gnuplotFile"] << endl ;

}

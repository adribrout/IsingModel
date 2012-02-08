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


void usage()
{
	cout << "Usage: isingmodel [OPTION]" << endl ;
	cout << "Exemple : \"isingmodel -g\" to start with graphic mode" << endl ;
	cout << endl ;
	cout << "Display Options :" << endl;
	cout << "   -g   --graphics :    Start with graphic mode" << endl ;
	cout << "   -e   --error    :    Error messages in console mode." << endl ;
	cout << "                        Default mode store error in a log file" << endl ;
	cout << "        --help     :    Display help message and quit" << endl ;
	cout << "   -n   --null     :    Forward error messages in /dev/null" << endl ;

}

void commandLineAnalysis(int argc, char * argv[])
{
	char c ;        // character option
	for (int i=1 ; i<argc ; i++)
	{
		char * cmd = argv[i] ;
		if (*cmd == "-")  // It's an option
		{
			cmd++ ;
			if (*cmd == "-")  // It's an entire option
			{
				cmd++ ;
				string word ;
				while ((c=*cmd++)!= "=")
				{
					word.push_back(c) ;
				}

			}
			while ((c=*cmd++)!=0)
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

				} // switch
			}  // while
		}  // if
	}  // for
}

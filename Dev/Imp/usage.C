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
#include "usage.h"
using namespace std;


void usage()
{
	cout << "Usage: isingmodel [OPTION]" << endl ;
	cout << "Exemple : \"isingmodel -g\" to start with graphic mode" << endl ;
	cout << endl ;
	cout << "Display Options :" << endl;
	cout << "   -g   --graphics :    Start with graphic mode" << endl ;
	cout << "   -e   --error    :    Error message in console mode." << endl ;
	cout << "                        Default mode store error in a log file" << endl ;
	cout << "        --help     :    Display help message and quit" << endl ;
	cout << "   -n   --null     :    Forward error message in /dev/null" << endl ;

}

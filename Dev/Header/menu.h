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

// Display help if no argument passed to executable.
// Equivalent to "isingmodel --help"
void usage();

// Analyze main arguments.
// Different behaviors for different options
void commandLineAnalysis(int argc, char * argv[]) ;


#endif //MENU_H

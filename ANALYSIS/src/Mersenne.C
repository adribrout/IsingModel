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
#include <mersenne>
using namespace std ;

void RandomMersenneFillingTab(double tab[], int sizeTab)
{
	int seed = (int)time(0) ;
	CRandomMersenne MersenneRandomInstance(seed);
	for (int i=0;i<sizeTab;i++) tab[i] = MersenneRandomInstance.Random() ;
}

void printTab(double tab[], int sizeTab)
{
	for (int i=0 ; i<sizeTab ; i++)
		cout << "tab[" <<i<< "] = " << tab[i] << endl ;
}

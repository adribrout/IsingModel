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
#include <QApplication>
#include <QPushButton>
#include "UTILS/include/menu.h"
#include "ANALYSIS/include/Mersenne.h"
#include "GUI/include/GraphicMain.h"

using namespace std ;

int main(int argc, char* argv[])
{

	Menu isingMenu ;

	if (argc==1) isingMenu.Usage() ;

	isingMenu.CommandAnalysis(argc,argv) ;

	//double tab[10] = {0} ;

	//RandomMersenneFillingTab(tab,10) ;
	//printTab(tab,10) ;

	if(isingMenu.CharOptionSet('g')) return GraphicMain(argc,argv) ;
	else
	{

	}

    return 0 ;

}

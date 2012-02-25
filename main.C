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
#include "UTILS/Menu/include/menu.h"
#include "GUI/GraphicMain.h"


using namespace std ;

int main(int argc, char* argv[])
{
	Menu isingMenu ;

	if (argc==1) isingMenu.Usage() ;
	else
	{
		int ret = isingMenu.CommandAnalysis(argc,argv) ;
		if (ret==0) isingMenu.showAllOptions() ;
	}
	if(isingMenu.CharOptionSet('g')) return GraphicMain(argc,argv) ;

    return 0 ;

}

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
#include "UTILS/Menu/include/menu.h"
#include "ANALYSIS/include/Mersenne.h"
#include "GUI/GraphicMain.h"
//#include "UTILS/Log/include/LogFile.h"

using namespace std ;

int main(int argc, char* argv[])
{
	//LogFile *logfile = LogFile::getInstance("/home/remi/.isingmodel/logfile.log") ;
	//logfile->info("LogFile created !") ;
	Menu isingMenu ;

	if (argc==1) isingMenu.Usage() ;

	isingMenu.CommandAnalysis(argc,argv) ;

	if(isingMenu.CharOptionSet('g')) return GraphicMain(argc,argv) ;

    return 0 ;

}

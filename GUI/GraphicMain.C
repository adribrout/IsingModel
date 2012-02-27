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




#include <QApplication>
#include <QtGui>
#include "GraphicMain.h"
//#include "MainWindow/include/MainWindow.h"
#include "./gnuplot/GnuplotWindow/Window/include/GnuplotWindow.h"

using namespace std ;

int GraphicMain(int argc, char * argv[])
{
	QApplication app(argc, argv) ;
	GnuplotWindow gnuWin ;
	gnuWin.show() ;

	return  app.exec() ;
}

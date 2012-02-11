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
#include <QPushButton>
#include "../include/GraphicMain.h"

using namespace std ;

int GraphicMain(int argc, char * argv[])
{
	QApplication app(argc, argv) ;
	QPushButton bouton("Salut les Zéros, la forme ?") ;
    bouton.setText("Pimp mon bouton !") ;
    bouton.show() ;
    return  app.exec() ;
}

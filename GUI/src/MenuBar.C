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
#include <QMenu>
#include <QAction>
#include <QMenuBar>
#include "../include/MenuBar.h"
#include "../include/MainWindow.h"

MenuBar::MenuBar(MainWindow *mainWin)
{
	QMenu *isingFile = new  QMenu ;
	QMenu *isingHelp = new  QMenu ;
	QMenu *isingEdit = new  QMenu ;
	QMenu *isingAnalysis = new  QMenu ;

	isingFile->addMenu("&File") ;
	isingEdit->addMenu("&Edit") ;
	isingAnalysis->addMenu("&Analysis") ;
	isingHelp->addMenu("&Help") ;

	QAction *quitAction = new QAction("&Quit",mainWin);
	QAction *launchAnalysis = new QAction("&Launch",mainWin) ;

	isingFile->addAction(quitAction) ;
	isingAnalysis->addAction(launchAnalysis) ;

	connect(quitAction,SIGNAL(triggered()), qApp, SLOT(quit())) ;
	quitAction->setShortcut(QKeySequence("Ctrl+Q")) ;

}

MenuBar::~MenuBar()
{

}


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


#include "../include/GnuplotWindow.h"
using namespace std ;

GnuplotWindow::GnuplotWindow()
{
	setWindowIcon(QIcon("fractal.png")) ;
	setWindowTitle("Gnuplot Window") ;
	setGeometry(50,80,1100,650) ;
	setMinimumSize(600,600) ;

	existingGB = new ExistingGroupBox ;
	newFileGB = new NewFileGroupBox ;
	plotAndSaveGB = new PlotAndSaveGroupBox ;
	mainLayout = new QVBoxLayout ;

	mainLayout->addWidget(existingGB) ;
	mainLayout->addWidget(newFileGB) ;
	mainLayout->addWidget(plotAndSaveGB) ;
	setLayout(mainLayout) ;

	connect(existingGB,SIGNAL(toggled(bool)),newFileGB,SLOT(setUnchecked(bool))) ;
	connect(newFileGB,SIGNAL(toggled(bool)),existingGB,SLOT(setUnchecked(bool))) ;

	connect(plotAndSaveGB->plotButton,SIGNAL(clicked()),this,SLOT(plotExistingFile()));
}

GnuplotWindow::~GnuplotWindow()
{

}

void GnuplotWindow::plotExistingFile()
{
	CommandSystemThread *CSThread = new CommandSystemThread ;
	string file = existingGB->existingFile->text().toStdString() ;
	CSThread->setCommand("/usr/bin/gnuplot "+file) ;
	CSThread->start() ;
}


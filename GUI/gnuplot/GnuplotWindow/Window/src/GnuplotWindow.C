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

GnuplotWindow::GnuplotWindow()
{
	setWindowIcon(QIcon("fractal.png")) ;

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

}

GnuplotWindow::~GnuplotWindow()
{

}

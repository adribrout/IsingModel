/*
 *
 * //Ising Model Project part of M1 computing project
 * Copyright (c) 2012 Rémi Eté & Adrien Girard,
 * All Right Reserved.
 *
 * Use and copying of this software and preparation of derivative works
 * based upon this software are permitted. Any copy of this software or
 * of any derivative work must include the above copyright notice.
 *
 *
 */


#include "../include/NewFileSettingsGroupBox.h"
#include <QtGui>

NewFileSettingsGroupBox::NewFileSettingsGroupBox()
{
	setTitle("File Settings") ;

	settingsLayout = new QVBoxLayout ;

	dataLayout = new QHBoxLayout ;
	browseFileDataButton = new QPushButton("Browse") ;
	dataFile = new QLineEdit ;
	dataLabel = new QLabel("Data File :") ;
	dataLayout->addWidget(dataLabel) ;
	dataLayout->addWidget(dataFile) ;
	dataLayout->addWidget(browseFileDataButton) ;


	gnuLayout = new QHBoxLayout ;
	browseFileGnuButton = new QPushButton("Browse") ;
	gnuFile = new QLineEdit ;
	gnuLabel = new QLabel("Gnuplot File :") ;
	gnuLayout->addWidget(gnuLabel) ;
	gnuLayout->addWidget(gnuFile) ;
	gnuLayout->addWidget(browseFileGnuButton) ;

	settingsLayout->addLayout(dataLayout) ;
	settingsLayout->addLayout(gnuLayout) ;

	setLayout(settingsLayout) ;

	QObject::connect(browseFileDataButton,SIGNAL(clicked()),this,SLOT(browseExistingDataFile())) ;
	QObject::connect(browseFileGnuButton,SIGNAL(clicked()),this,SLOT(browseExistingGnuFile())) ;

}

NewFileSettingsGroupBox::~NewFileSettingsGroupBox()
{
	// Default destructor
}

void NewFileSettingsGroupBox::browseExistingGnuFile()
{
	QString fileName = QFileDialog::getOpenFileName(this,"Select a Gnuplot file","/home","Gnuplot file (*.gnu)") ;
	gnuFile->setText(fileName) ;
}

void NewFileSettingsGroupBox::browseExistingDataFile()
{
	QString fileName = QFileDialog::getOpenFileName(this,"Select a data file","/home","Data file (*.dat)") ;
	dataFile->setText(fileName) ;
}

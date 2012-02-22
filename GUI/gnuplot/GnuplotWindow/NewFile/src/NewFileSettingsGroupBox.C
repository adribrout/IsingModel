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

	settingsGridLayout = new QGridLayout ;

	browseFileDataButton = new QPushButton("Browse") ;
	dataFile = new QLineEdit ;
	dataLabel = new QLabel("Main .dat file :") ;
	settingsGridLayout->addWidget(dataLabel,0,0) ;
	settingsGridLayout->addWidget(dataFile,0,1) ;
	settingsGridLayout->addWidget(browseFileDataButton,0,2) ;

	browseFileGnuButton = new QPushButton("Browse") ;
	gnuFilePath = new QLabel ;
	gnuLabel = new QLabel("File Folder :") ;
	settingsGridLayout->addWidget(gnuLabel,1,0) ;
	settingsGridLayout->addWidget(gnuFilePath,1,1) ;
	settingsGridLayout->addWidget(browseFileGnuButton,1,2) ;


	gnuFileNameLabel = new QLabel("Gnuplot file name :") ;
	gnuFileName = new QLineEdit ;
	settingsGridLayout->addWidget(gnuFileNameLabel) ;
	settingsGridLayout->addWidget(gnuFileName) ;

	setLayout(settingsGridLayout) ;

	QObject::connect(browseFileDataButton,SIGNAL(clicked()),this,SLOT(browseExistingDataFile())) ;
	QObject::connect(browseFileGnuButton,SIGNAL(clicked()),this,SLOT(browseExistingGnuFile())) ;

}

NewFileSettingsGroupBox::~NewFileSettingsGroupBox()
{
	// Default destructor
}

void NewFileSettingsGroupBox::browseExistingGnuFile()
{
	QString filePath = QFileDialog::getExistingDirectory(this) ;
	gnuFilePath->setText(filePath) ;
}

void NewFileSettingsGroupBox::browseExistingDataFile()
{
	QString fileName = QFileDialog::getOpenFileName(this,"Select a data file","/home","Data file (*.dat)") ;
	dataFile->setText(fileName) ;
}

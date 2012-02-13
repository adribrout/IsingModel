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

#include "../../include/gnuplot/ExistingGroupBox.h"


ExistingGroupBox::ExistingGroupBox()
{
	setTitle("Use existing file") ;
	setChecked(true) ;
	setCheckable(false) ;

	existingLayout = new QVBoxLayout ;
	browseFileButton = new QPushButton("Browse") ;
	existingFile = new QLabel ;

	existingLayout->addWidget(browseFileButton) ;
	existingLayout->addWidget(existingFile) ;
	setLayout(existingLayout) ;

	QObject::connect(browseFileButton,SIGNAL(clicked()),this,SLOT(browseExistingFile())) ;

}

ExistingGroupBox::~ExistingGroupBox()
{
	// Default Destructor
}

void ExistingGroupBox::browseExistingFile()
{
	QString fileName = QFileDialog::getOpenFileName(this,"Select a file","/home","Gnuplot File (*.gnu)") ;
	existingFile->setText(fileName) ;
}

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

#include "../include/ExistingGroupBox.h"


ExistingGroupBox::ExistingGroupBox()
{
	setTitle("Use existing file") ;
	setChecked(false) ;
	setCheckable(true) ;

	existingLayout = new QHBoxLayout ;
	browseFileButton = new QPushButton("Browse") ;
	existingFile = new QLineEdit ;

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
	QString file = QFileDialog::getOpenFileName(this,"Select a file","/home","file (*.gnu)") ;
	existingFile->setText(file) ;
}

void ExistingGroupBox::setUnchecked(bool unchecked)
{
	if(unchecked) setChecked(false);
	else setChecked(true) ;
}

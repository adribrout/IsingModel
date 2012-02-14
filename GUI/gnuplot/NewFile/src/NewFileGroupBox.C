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

#include "../include/NewFileGroupBox.h"

NewFileGroupBox::NewFileGroupBox()
{
	setTitle("New File") ;
	setCheckable(true) ;
	setChecked(false) ;

	fileSettingsGB = new NewFileSettingsGroupBox;
	plotSettingsGB = new PlotSettingsGroupBox ;
	newFileLayout = new QVBoxLayout ;


	newFileLayout->addWidget(fileSettingsGB) ;
	newFileLayout->addWidget(plotSettingsGB) ;

	setLayout(newFileLayout) ;

}

NewFileGroupBox::~NewFileGroupBox()
{
}

void NewFileGroupBox::setUnchecked(bool unchecked)
{
	if(unchecked) setChecked(false);
	else setChecked(true) ;
}

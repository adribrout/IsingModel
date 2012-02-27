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
	setTitle("Create a new .gnu file") ;
	setCheckable(true) ;
	setChecked(false) ;

	fileSettingsGB = new NewFileSettingsGroupBox;
	plotSettingsGB = new PlotSettingsGroupBox ;
	plotTV  = new PlotTableView ;
	curveSettingsGB = new CurveSettingsGroupBox ;

	settingsAndTableLayout = new QVBoxLayout ;
	filePlotLayout = new QVBoxLayout ;
	fileCurvePlotLayout = new QHBoxLayout ;
	curveSettingsLayout = new QHBoxLayout ;
	tableLayout = new QVBoxLayout ;

	filePlotLayout->addWidget(fileSettingsGB) ;
	filePlotLayout->addWidget(plotSettingsGB) ;
	curveSettingsLayout->addWidget(curveSettingsGB) ;
	tableLayout->addWidget(plotTV) ;

	fileCurvePlotLayout->addLayout(filePlotLayout) ;
	fileCurvePlotLayout->addLayout(curveSettingsLayout) ;

	settingsAndTableLayout->addLayout(fileCurvePlotLayout) ;
	settingsAndTableLayout->addLayout(tableLayout) ;

	setLayout(settingsAndTableLayout) ;

}

NewFileGroupBox::~NewFileGroupBox()
{
}

void NewFileGroupBox::setUnchecked(bool unchecked)
{
	if(unchecked) setChecked(false);
	else setChecked(true) ;
}

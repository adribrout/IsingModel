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


#include "../include/CurveSettingsGroupBox.h"

CurveSettingsGroupBox::CurveSettingsGroupBox()
{
	setTitle("Curve Settings") ;

	//General Layout
	curveSettingsLayout = new QVBoxLayout ;

	//Tab Space
	settingsTab = new QTabWidget ;
	settingsTabLayout = new QVBoxLayout ;
	settingsTabLayout->addWidget(settingsTab) ;

	//General Settings Page
	generalSettingsPage = new QWidget ;
	generalSettingsPageLayout = new QVBoxLayout ;


	//Specific Settings Page
	specificSettingsPage = new QWidget ;
	specificSettingsLayout = new QVBoxLayout ;

	// Button Space
	addButton = new QPushButton("Add Curve") ;
	resetButton = new QPushButton("Reset") ;
	deleteButton = new QPushButton("Delete") ;
	buttonLayout = new QHBoxLayout ;
	buttonLayout->addWidget(addButton) ;
	buttonLayout->addWidget(deleteButton) ;
	buttonLayout->addWidget(resetButton) ;

	//Layout Settings
	curveSettingsLayout->addLayout(settingsTabLayout) ;
	curveSettingsLayout->addLayout(buttonLayout) ;
	setLayout(curveSettingsLayout) ;

	settingsTab->addTab(generalSettingsPage,"General Settings") ;
	settingsTab->addTab(specificSettingsPage,"Specific Settings") ;
}

CurveSettingsGroupBox::~CurveSettingsGroupBox()
{


}

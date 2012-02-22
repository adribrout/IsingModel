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
	buttonLayout->addWiget(addButton) ;
	buttonLayout->addWiget(deleteButton) ;
	buttonLayout->addWiget(resetButton) ;

	//Layout Settings
	curveSettingsLayout->addLayout(settingsTabLayout) ;
	curveSettingsLayout->addLayout(buttonLayout) ;
	setLayout(curveSettingsLayout) ;
}

CurveSettingsGroupBox::~CurveSettingsGroupBox()
{


}

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

#include "../include/PlotSettingsGroupBox.h"

PlotSettingsGroupBox::PlotSettingsGroupBox()
{
	setTitle("Plot Settings") ;

	// Main Layout

	settingsAndTableLayout = new QHBoxLayout;
	settingsLayout = new QVBoxLayout;

	// Radio Button zone

	twoDButton = new QRadioButton("2D") ;
	twoDButton->setChecked(true) ;
	threeDButton = new QRadioButton("3D") ;
	dimensionLayout = new QHBoxLayout ;

	dimensionLayout->addWidget(twoDButton) ;
	dimensionLayout->addWidget(threeDButton) ;

	settingsLayout->addLayout(dimensionLayout) ;

	// Coordinates zone

	coordinatesLayout = new QHBoxLayout ;
	coordinatesLabel = new QLabel("Coordinates") ;
	coordinatesBox = new QComboBox ;
	coordinatesLayout->addWidget(coordinatesLabel) ;
	coordinatesLayout->addWidget(coordinatesBox) ;

	settingsLayout->addLayout(coordinatesLayout) ;

	connect(twoDButton , SIGNAL(toggled(bool)) , this , SLOT(setTwoDCoordinates(bool)) ) ;
	connect(threeDButton , SIGNAL(toggled(bool)) , this , SLOT(setThreeDCoordinates(bool)) ) ;

	// Range Zone

	rangeLayout = new QVBoxLayout ;
	rangeGB = new RangeGroupBox;
	rangeLayout->addWidget(rangeGB) ;

	settingsLayout->addLayout(rangeLayout) ;

	// Button Zone

	addCurveButton = new QPushButton("Add Curve") ;
	moreSettingsButton = new QPushButton("More Settings") ;
	deleteCurveButton = new QPushButton("Delete Curve") ;
	buttonLayout = new QHBoxLayout ;

	buttonLayout->addWidget(addCurveButton) ;
	buttonLayout->addWidget(moreSettingsButton) ;
	buttonLayout->addWidget(deleteCurveButton) ;

	settingsLayout->addLayout(buttonLayout) ;

	// Table Zone

	tableLayout = new QVBoxLayout ;
	plotTV = new PlotTableView ;
	tableLayout->addWidget(plotTV) ;

	connect(coordinatesBox,SIGNAL(activated(QString)),this,SLOT(setRange(QString))) ;
	connect(twoDButton,SIGNAL(toggled(bool)),rangeGB,SLOT(hideThirdCoordinate(bool))) ;


	// Main Layout

	settingsAndTableLayout->addLayout(settingsLayout) ;
	settingsAndTableLayout->addLayout(tableLayout) ;

	setLayout(settingsAndTableLayout) ;



}

PlotSettingsGroupBox::~PlotSettingsGroupBox()
{
	// Default destructor
}

void PlotSettingsGroupBox::setTwoDCoordinates(bool checked)
{
	if(checked)
	{
		coordinatesBox->clear() ;
		coordinatesBox->addItem("Cartesian") ;
		coordinatesBox->addItem("Polar") ;
	}
}

void PlotSettingsGroupBox::setRange(QString coordinatesType)
{
	if(coordinatesType == "Cartesian" )
	{
		rangeGB->setFirstRangeLabelText("x range : ") ;
		rangeGB->setSecondRangeLabelText("y range : ") ;
		rangeGB->setThirdRangeLabelText("z range : ") ;
	}

	if(coordinatesType == "Polar" || coordinatesType == "Sperical")
	{
		rangeGB->setFirstRangeLabelText("r range : ") ;
		rangeGB->setSecondRangeLabelText("theta range : ") ;
		rangeGB->setThirdRangeLabelText("phi range : ") ;
	}

	if(coordinatesType == "Cylindrical" )
	{
		rangeGB->setFirstRangeLabelText("r range : ") ;
		rangeGB->setSecondRangeLabelText("theta range : ") ;
		rangeGB->setThirdRangeLabelText("z range : ") ;
	}
}

void PlotSettingsGroupBox::setThreeDCoordinates(bool checked)
{
	if(checked)
	{
		coordinatesBox->clear() ;
		coordinatesBox->addItem("Cartesian") ;
		coordinatesBox->addItem("Cylindrical") ;
		coordinatesBox->addItem("Spherical") ;
	}
}

/*
 * //Ising Model Project part of M1 computing project
 * Copyright (c) 2012 Rémi Eté & Adrien Girard,
 * All Right Reserved.
 *
 * Use and copying of this software and preparation of derivative works
 * based upon this software are permitted. Any copy of this software or
 * of any derivative work must include the above copyright notice, this
 * paragraph and the one after it.
 *
 */


#include "../include/AddCurveWindow.h"

AddCurveWindow::AddCurveWindow()
{
	setWindowTitle("Add Curve") ;

	mainLayout = new QVBoxLayout ;

    addAndCancelGroupBox = new AddAndCancelGroupBox ;
    curveSettingsGB = new CurveSettingsGroupBox ;
    useDataFileGB = new UseDataFileGroupBox ;
    plotFunctionGroupBox = new PlotFunctionGroupBox ;

    mainLayout->addWidget(addAndCancelGroupBox) ;
    mainLayout->addWidget(curveSettingsGB) ;
    mainLayout->addWidget(useDataFileGB) ;
    mainLayout->addWidget(plotFunctionGroupBox) ;

    setLayout(mainLayout) ;

}

AddCurveWindow::~AddCurveWindow()
{


}

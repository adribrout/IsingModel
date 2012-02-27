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


#include "../include/PlotAndSaveGroupBox.h"

PlotAndSaveGroupBox::PlotAndSaveGroupBox()
{
	plotAndSaveLayout = new QHBoxLayout ;
	saveButton = new QPushButton("Save Graph") ;
	plotButton = new QPushButton("Plot") ;

	plotAndSaveLayout->addWidget(plotButton) ;
	plotAndSaveLayout->addWidget(saveButton) ;
	setLayout(plotAndSaveLayout) ;


}

PlotAndSaveGroupBox::~PlotAndSaveGroupBox()
{
	// Default destructor
}



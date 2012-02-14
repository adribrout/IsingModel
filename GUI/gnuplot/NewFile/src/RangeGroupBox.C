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

#include "../include/RangeGroupBox.h"

RangeGroupBox::RangeGroupBox()
{
	rangeLayout = new QVBoxLayout ;

	firstRangeLayout = new QHBoxLayout ;
	secondRangeLayout = new QHBoxLayout ;
	thirdRangeLayout = new QHBoxLayout ;

	toFirstLabel = new QLabel("to") ;
	toSecondLabel = new QLabel("to") ;
	toThirdLabel = new QLabel("to") ;

	minFirstRangeLine = new QLineEdit ;
	maxFirstRangeLine = new QLineEdit ;
	minSecondRangeLine = new QLineEdit ;
	maxSecondRangeLine = new QLineEdit ;
	minThirdRangeLine = new QLineEdit ;
	maxThirdRangeLine = new QLineEdit ;

	firstRangeLabel = new QLabel("x range :") ;
	secondRangeLabel = new QLabel("y range :") ;
	thirdRangeLabel = new QLabel("z range :") ;

	firstRangeLayout->addWidget(firstRangeLabel) ;
	firstRangeLayout->addWidget(minFirstRangeLine) ;
	firstRangeLayout->addWidget(toFirstLabel) ;
	firstRangeLayout->addWidget(maxFirstRangeLine) ;

	secondRangeLayout->addWidget(secondRangeLabel) ;
	secondRangeLayout->addWidget(minSecondRangeLine) ;
	secondRangeLayout->addWidget(toSecondLabel) ;
	secondRangeLayout->addWidget(maxSecondRangeLine) ;

	thirdRangeLayout->addWidget(thirdRangeLabel) ;
	thirdRangeLayout->addWidget(minThirdRangeLine) ;
	thirdRangeLayout->addWidget(toThirdLabel) ;
	thirdRangeLayout->addWidget(maxThirdRangeLine) ;

	rangeLayout->addLayout(firstRangeLayout) ;
	rangeLayout->addLayout(secondRangeLayout) ;
	rangeLayout->addLayout(thirdRangeLayout) ;

	setLayout(rangeLayout) ;
}

RangeGroupBox::~RangeGroupBox()
{
	//Default destructor
}

void RangeGroupBox::setFirstRangeLabelText(QString text)
{
	firstRangeLabel->setText(text) ;
}

void RangeGroupBox::setSecondRangeLabelText(QString text)
{
	secondRangeLabel->setText(text) ;
}

void RangeGroupBox::setThirdRangeLabelText(QString text)
{
	thirdRangeLabel->setText(text) ;
}

void RangeGroupBox::hideThirdCoordinate(bool value)
{
	if(value) thirdRangeLayout->setEnabled(false);
}


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
	rangeGridLayout = new QGridLayout ;

	toFirstLabel = new QLabel("to") ;
	toSecondLabel = new QLabel("to") ;
	toThirdLabel = new QLabel("to") ;

	minFirstRangeLine = new QLineEdit ;
	maxFirstRangeLine = new QLineEdit ;
	minSecondRangeLine = new QLineEdit ;
	maxSecondRangeLine = new QLineEdit ;
	minThirdRangeLine = new QLineEdit ;
	maxThirdRangeLine = new QLineEdit ;
	firstRangeTitle = new QLineEdit ;
	secondRangeTitle = new QLineEdit ;
	thirdRangeTitle = new QLineEdit ;

	firstRangeLabel = new QLabel ;
	secondRangeLabel = new QLabel ;
	thirdRangeLabel = new QLabel ;
	axisTitleLabel = new QLabel("Axis Title") ;
	minLabel = new QLabel("Minimum") ;
	maxLabel = new QLabel("Maximum")  ;

	rangeGridLayout->addWidget(minLabel,0,1) ;
	rangeGridLayout->addWidget(maxLabel,0,3) ;
	rangeGridLayout->addWidget(axisTitleLabel,0,4) ;

	rangeGridLayout->addWidget(firstRangeLabel,1,0) ;
	rangeGridLayout->addWidget(minFirstRangeLine,1,1) ;
	rangeGridLayout->addWidget(toFirstLabel,1,2) ;
	rangeGridLayout->addWidget(maxFirstRangeLine,1,3) ;
	rangeGridLayout->addWidget(firstRangeTitle,1,4) ;

	rangeGridLayout->addWidget(secondRangeLabel,2,0) ;
	rangeGridLayout->addWidget(minSecondRangeLine,2,1) ;
	rangeGridLayout->addWidget(toSecondLabel,2,2) ;
	rangeGridLayout->addWidget(maxSecondRangeLine,2,3) ;
	rangeGridLayout->addWidget(secondRangeTitle,2,4) ;

	rangeGridLayout->addWidget(thirdRangeLabel,3,0) ;
	rangeGridLayout->addWidget(minThirdRangeLine,3,1) ;
	rangeGridLayout->addWidget(toThirdLabel,3,2) ;
	rangeGridLayout->addWidget(maxThirdRangeLine,3,3) ;
	rangeGridLayout->addWidget(thirdRangeTitle,3,4) ;

	setLayout(rangeGridLayout) ;
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

/*void RangeGroupBox::hideThirdCoordinate(bool value)
{
	if(value) thirdRangeLayout->setEnabled(false);
}
*/

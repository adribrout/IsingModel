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

	firstRangeLabel = new QLabel ;
	secondRangeLabel = new QLabel ;
	thirdRangeLabel = new QLabel ;

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

}

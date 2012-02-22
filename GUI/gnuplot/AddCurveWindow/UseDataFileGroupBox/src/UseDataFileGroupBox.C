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


UseDataFileGroupBox::UseDataFileGroupBox()
{
	setTitle("Use data file") ;

	setCheckable(true) ;
	setChecked(true) ;

    mainLayout = new QGridLayout ;

    mainDataFileButton = new QRadioButton("Use the main file data") ;
    otherDataFileButton = new QRadioButton("Use an other file data") ;
    browseButton = new QPushButton("Browse") ;
    otherDataFile = new QLineEdit ;

    mainLayout->addWidget(mainDataFileButton,0,0) ;
    mainLayout->addWidget(otherDataFileButton,1,0) ;
    mainLayout->addWidget(browseButton,1,1) ;
    mainLayout->addWidget(otherDataFile,1,2) ;

    setLayout(mainLayout) ;
}

UseDataFileGroupBox::~UseDataFileGroupBox()
{


}

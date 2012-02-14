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

#ifndef GNUPLOTWINDOW_H
#define GNUPLOTWINDOW_H

#include <QtGui>
#include "../../ExistingFile/include/ExistingGroupBox.h"
#include "../../NewFile/include/NewFileGroupBox.h"
#include "../../PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h"


class GnuplotWindow : public QWidget
{


public :
	GnuplotWindow() ;
	~GnuplotWindow() ;

private:

	ExistingGroupBox *existingGB ;
	NewFileGroupBox *newFileGB ;
	PlotAndSaveGroupBox *plotAndSaveGB ;
	QVBoxLayout *mainLayout ;


};


#endif  //GNUPLOTWINDOW_H

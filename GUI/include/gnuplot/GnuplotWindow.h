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
#include "../../include/gnuplot/ExistingGroupBox.h"


class GnuplotWindow : public QWidget
{
	Q_OBJECT

public :
	GnuplotWindow() ;
	~GnuplotWindow() ;


private:

	ExistingGroupBox *existingGroupBox ;
/*
	QGroupBox *newGnuplotFile ;
	QGroupBox *fileSettings ;
	QLineEdit *gnuplotFileName ;
	QLineEdit *dataFileName ;

	QTableView *curveTab ;
	QGroupBox *plotSettings ;
	QLineEdit *xRange ;
	QLineEdit *yRange ;
	QLineEdit *zRange ;
	QLineEdit *rRange ;
	QLineEdit *thetaRange ;
	QLineEdit *phiRange ;

	QComboBox *coordinates ;

	QFormLayout *twoDRange ;
	QFormLayout *threeDRange ;

	QPushButton *addCurve ;
	QPushButton *deleteCurve ;
	QPushButton *plotCommand ;
	QPushButton *moreSettings ;
	QPushButton *saveCommand ;

	QRadioButton *twoD ;
	QRadioButton *threeD ;
	QRadioButton *useExistingFile ;
	QRadioButton *createANewFile ;
*/
	QVBoxLayout *mainLayout ;




};


#endif  //GNUPLOTWINDOW_H

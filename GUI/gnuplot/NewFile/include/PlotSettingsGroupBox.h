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

#ifndef PLOTSETTINGSGROUPBOX_H
#define PLOTSETTINGSGROUPBOX_H

#include <QtGui>
#include "RangeGroupBox.h"
#include "PlotTableView.h"

class PlotSettingsGroupBox : public QGroupBox
{
	Q_OBJECT

public slots :
	void setThreeDCoordinates(bool checked) ;
	void setTwoDCoordinates(bool checked) ;

public :
	PlotSettingsGroupBox() ;
	~PlotSettingsGroupBox() ;

private :
	QRadioButton *twoDButton ;
	QRadioButton *threeDButton ;
	QHBoxLayout *dimensionLayout ;

	QHBoxLayout *coordinatesLayout ;
	QLabel *coordinatesLabel ;
	QComboBox *coordinatesBox ;

	QVBoxLayout *rangeLayout;
	RangeGroupBox *rangeGB ;

	QPushButton *addCurveButton ;
	QPushButton *moreSettingsButton ;
	QPushButton *deleteCurveButton ;
	QHBoxLayout *buttonLayout ;

	QVBoxLayout *tableLayout;
	PlotTableView *plotTV ;

	QHBoxLayout *settingsAndTableLayout ;
	QVBoxLayout *settingsLayout ;




};


#endif  // PLOTSETTINGSGROUPBOX_H

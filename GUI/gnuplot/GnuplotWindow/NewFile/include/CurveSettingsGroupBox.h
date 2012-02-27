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

#ifndef CURVESETTINGSGROUPBOX_H
#define CURVESETTINGSGROUPBOX_H

#include <QtGui>

class CurveSettingsGroupBox : public QGroupBox
{

private :
	QVBoxLayout *curveSettingsLayout ;
	QVBoxLayout *settingsTabLayout ;
	QVBoxLayout *generalSettingsPageLayout ;
	QVBoxLayout *specificSettingsLayout;
	QTabWidget *settingsTab ;
	QPushButton *addButton ;
	QPushButton *resetButton ;
	QPushButton *deleteButton ;
	QHBoxLayout *buttonLayout ;
	QWidget *generalSettingsPage ;
	QWidget *specificSettingsPage ;

public :
	CurveSettingsGroupBox() ;
	~CurveSettingsGroupBox() ;


};





#endif  // CURVESETTINGSGROUPBOX_H

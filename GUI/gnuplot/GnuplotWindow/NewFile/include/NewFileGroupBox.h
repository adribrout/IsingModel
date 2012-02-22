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

#ifndef NEWFILEGROUPBOX_H
#define NEWFILEGROUPBOX_H

#include <QtGui>
#include "NewFileSettingsGroupBox.h"
#include "PlotSettingsGroupBox.h"

class NewFileGroupBox : public QGroupBox
{
	Q_OBJECT

public slots :
	void setUnchecked(bool unchecked) ;

private :
	NewFileSettingsGroupBox *fileSettingsGB ;
	PlotSettingsGroupBox *plotSettingsGB ;
	QVBoxLayout *newFileLayout ;

public :
	NewFileGroupBox() ;
	~NewFileGroupBox() ;

};



#endif  // NEWFILEGROUPBOX_H

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

#ifndef PLOTANDSAVEGROUPBOX_H
#define PLOTANDSAVEGROUPBOX_H

#include <QtGui>

class PlotAndSaveGroupBox : public QGroupBox
{
	Q_OBJECT


public :
	PlotAndSaveGroupBox() ;
	~PlotAndSaveGroupBox() ;


private :
	friend class GnuplotWindow ;
	QHBoxLayout *plotAndSaveLayout ;
	QPushButton *plotButton ;
	QPushButton *saveButton ;

};

#endif  // PLOTANDSAVEGROUPBOX_H

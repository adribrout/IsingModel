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

#ifndef EXISTINGGROUPBOX_H
#define EXISTINGGROUPBOX_H

#include <QtGui>

class ExistingGroupBox : public QGroupBox
{
	Q_OBJECT

private:
	QVBoxLayout *existingLayout ;
	QPushButton *browseFileButton ;
	QLabel *existingFile ;

public slots :
	void browseExistingFile() ;


public :

	ExistingGroupBox() ;
	~ExistingGroupBox() ;

};



#endif  // EXISTINGGROUPBOX_H

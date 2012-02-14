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


#ifndef NEWFILESETTINGSGROUPBOX_H
#define NEWFILESETTINGSGROUPBOX_H

#include <QtGui>

class NewFileSettingsGroupBox : public QGroupBox
{
	Q_OBJECT

private:

	QVBoxLayout *settingsLayout ;

	QHBoxLayout *dataLayout ;
	QPushButton *browseFileDataButton ;
	QLineEdit *dataFile ;
	QLabel *dataLabel ;

	QHBoxLayout *gnuLayout ;
	QPushButton *browseFileGnuButton ;
	QLineEdit *gnuFile ;
	QLabel *gnuLabel ;



public slots :

void browseExistingDataFile() ;
void browseExistingGnuFile() ;


public :

	NewFileSettingsGroupBox() ;
	~NewFileSettingsGroupBox() ;

};

#endif  // NEWFILESETTINGSGROUPBOX_H

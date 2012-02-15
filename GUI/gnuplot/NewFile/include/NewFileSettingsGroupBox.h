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

	QGridLayout *settingsGridLayout ;

	QPushButton *browseFileDataButton ;
	QLineEdit *dataFile ;
	QLabel *dataLabel ;

	QPushButton *browseFileGnuButton ;
	QLabel *gnuFilePath ;
	QLabel *gnuLabel ;

	QLabel *gnuFileNameLabel ;
	QLineEdit *gnuFileName ;



public slots :

void browseExistingDataFile() ;
void browseExistingGnuFile() ;


public :

	NewFileSettingsGroupBox() ;
	~NewFileSettingsGroupBox() ;

};

#endif  // NEWFILESETTINGSGROUPBOX_H

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

#ifndef RANGEGROUPBOX_H
#define RANGEGROUPBOX_H

#include <QtGui>

class RangeGroupBox : public QGroupBox
{
	Q_OBJECT

	public slots :
	void hideThirdCoordinate(bool value) ;

public :
	RangeGroupBox() ;
	~RangeGroupBox() ;
	void setFirstRangeLabelText(QString text) ;
	void setSecondRangeLabelText(QString text) ;
	void setThirdRangeLabelText(QString text) ;

private:
	QVBoxLayout *rangeLayout ;

	QHBoxLayout *firstRangeLayout ;
	QHBoxLayout *secondRangeLayout ;
	QHBoxLayout *thirdRangeLayout ;

	QLabel *toFirstLabel ;
	QLabel *toSecondLabel ;
	QLabel *toThirdLabel ;

	QLineEdit *minFirstRangeLine ;
	QLineEdit *maxFirstRangeLine ;
	QLineEdit *minSecondRangeLine ;
	QLineEdit *maxSecondRangeLine ;
	QLineEdit *minThirdRangeLine ;
	QLineEdit *maxThirdRangeLine ;

	QLabel *firstRangeLabel ;
	QLabel *secondRangeLabel ;
	QLabel *thirdRangeLabel ;

};

#endif  // RANGEGROUPBOX_H

/*
 * //Ising Model Project part of M1 computing project
 * Copyright (c) 2012 Rémi Eté & Adrien Girard,
 * All Right Reserved.
 *
 * Use and copying of this software and preparation of derivative works
 * based upon this software are permitted. Any copy of this software or
 * of any derivative work must include the above copyright notice, this
 * paragraph and the one after it.
 *
 */


#ifndef ADDCURVEWINDOW_H
#define ADDCURVEWINDOW_H

#include <QtGui>

class AddCurveWindow : public QWidget
{
    public:
        AddCurveWindow();
        ~AddCurveWindow();


    private:
        QVBoxLayout *mainLayout ;

        AddAndCancelGroupBox *addAndCancelGroupBox ;
        CurveSettingsGroupBox *curveSettingsGB ;
        UseDataFileGroupBox *useDataFileGB ;
        PlotFunctionGroupBox *plotFunctionGroupBox ;


};

#endif  //ADDCURVEWINDOW_H

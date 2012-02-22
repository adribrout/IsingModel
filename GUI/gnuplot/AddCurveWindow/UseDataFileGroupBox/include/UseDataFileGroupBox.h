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


#ifndef USEDATAFILEGROUPBOX_H
#define USEDATAFILEGROUPBOX_H

#include <QtGui>

class UseDataFileGroupBox : public QGroupBox
{
    public:
        UseDataFileGroupBox();
        ~UseDataFileGroupBox();


    private:
        QGridLayout *mainLayout ;
        QRadioButton *mainDataFileButton ;
        QRadioButton *otherDataFileButton ;
        QPushButton *browseButton ;
        QLineEdit *otherDataFile ;

};

#endif  //USEDATAFILEGROUPBOX_H

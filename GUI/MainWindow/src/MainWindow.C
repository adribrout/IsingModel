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

#include <QApplication>
#include <QtGui>
#include "../include/MainWindow.h"
#include "../include/MenuBar.h"

MainWindow::MainWindow()
{
	setWindowTitle("Ising Model");

	QPushButton *quitButton = new QPushButton("Quitter") ;

	QVBoxLayout *vlayout = new QVBoxLayout ;
	QFormLayout *layout = new QFormLayout ;


	QLineEdit *gnuplotFileName = new QLineEdit ;
	QLineEdit *dataFile = new QLineEdit ;

	layout->addRow("Nom du fichier gnuplot :",gnuplotFileName) ;
	layout->addRow("Fichier de donnees :",dataFile) ;

	vlayout->addLayout(layout) ;
	vlayout->addWidget(quitButton) ;

	setLayout(vlayout) ;

	connect(quitButton,SIGNAL(clicked()),qApp,SLOT(quit()));
}

MainWindow::~MainWindow()
{

}

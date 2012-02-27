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

#ifndef COMMANDSYTEMTHREAD_H
#define COMMANDSYTEMTHREAD_H

#include <iostream>
#include <QtGui>
#include <string>

class CommandSystemThread : public QThread
{
public :
	CommandSystemThread() ;
	virtual ~CommandSystemThread() ;
	void setCommand(std::string command) ;

protected :
	virtual void run() ;

private :
	std::string cmd ;

};


#endif  // COMMANDSYTEMTHREAD_H

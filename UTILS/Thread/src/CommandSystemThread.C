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

#include "../include/CommandSystemThread.h"

CommandSystemThread::CommandSystemThread()
{
	cmd = "" ;

}

CommandSystemThread::~CommandSystemThread()
{
	exit() ;
	wait() ;
}

void CommandSystemThread::run()
{
	if(cmd!="")
	{
		const char * CMD = cmd.c_str() ;
		system( CMD ) ;
	}
}

void CommandSystemThread::setCommand(std::string command)
{
	cmd = command ;
}

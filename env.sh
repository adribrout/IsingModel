#######################################################################
#
#//Ising Model Project part of M1 computing project
#
#Copyright (c) 2012 Rémi Eté & Adrien Girard,
#All Right Reserved.
#
#Use and copying of this software and preparation of derivative works
#based upon this software are permitted. Any copy of this software or
#of any derivative work must include the above copyright notice, this
#paragraph and the one after it.s
#
#######################################################################
#
#This script setups all environement variables needed to install,
#compile and run the program.
#Used via 'source env.sh' in Configure file
#
#######################################################################

#!/bin/bash

# Project folder

IsingFolder=/home/remi/IsingModel

#echo "Donner le dossier d'installation du projet (/home/remi/) : "
#read IsingFolder

# Needed for compilation

export IsingFolder

export $1 IsingFolder=
export $1 IsingUtils=
export $1 IsingAnalysis=
export $1 IsingGui=
export $1 IsingUtilsSRC=
export $1 IsingAnalysisSRC=
export $1 IsingGuiSRC=
export $1 IsingUtilsINCLUDE=
export $1 IsingAnalysisINCLUDE=
export $1 IsingGuiINCLUDE=



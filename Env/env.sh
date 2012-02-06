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
#paragraph and the one after it.
#
#######################################################################
#
#This script setups all environement variables needed to install,
#compile and run the program.
#Used via 'source env.sh' in Configure file
#
#######################################################################

#!/bin/bash

# Find the project's folder

cd ../
ISINGFOLDER=$(pwd)
cd Env/


# Needed for compilation

export ISINGFOLDER

export ISINGENV=$ISINGFOLDER/Env
export ISINGDEV=$ISINGFOLDER/Dev
export ISINGHEADER=$ISINGFOLDER/Dev/Header
export ISINGIMP=$ISINGFOLDER/Dev/Imp
export ISINGGUI=$ISNGFOLDER/Dev/GUI




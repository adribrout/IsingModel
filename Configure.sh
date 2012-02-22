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
echo ""

case "$#" in
	0)
	if  test ! -f /usr/include/c++/4.5/mersenne 
	then cp mersenne /usr/include/c++/4.5/ 
	fi
		
	#if test $? -eq 0
	#then rm -f mersenne 
	#fi
	
	if  test ! -f /usr/include/c++/4.5/randomc.h 
		then 
			cp randomc.h /usr/include/c++/4.5/ 
		fi
	
	#if test $? -eq 0
	#then rm -f randomc.h 
	#fi
	;;
	
	1)
	case "$1" in 
		install)
			echo "Mise a jour des paquets : "
			apt-get update
			echo ""
			echo "Installation de l'environnement Qt : "
			apt-get install qt4-qmake qt4-designer qt4-dev-tools
			echo ""
			echo "Installation de g++ : "
			apt-get install g++
			echo ""
			echo "Installtion de make : "
			apt-get install make
			echo ""
			echo "Installation de l'environnement Gnuplot"
			apt-get install gnuplot gnuplot-doc gnuplot-x11 gnuplot-mode
			echo ""
			echo "Installation des libraires BOOST :"
			apt-get install libboost*
			echo ""
			if [ -d  ~/.isingmodel ]
			then 
				echo "~/.isingmodel already exists"
			else
				mkdir ~/.isingmodel
			fi
			
			if [ -d  ~/.isingmodel/gnuplot ]
			then 
				echo "~/.isingmodel/gnuplot already exists"
			else
				mkdir ~/.isingmodel/gnuplot
			fi
			
			if [ -d  ~/.isingmodel/temp ]
			then 
				echo "~/.isingmodel already exists"
			else
				mkdir ~/.isingmodel/temp
			fi
			
			if [ -d  ~/.isingmodel/saved ]
			then 
				echo "~/.isingmodel/saved already exists"
			else
				mkdir ~/.isingmodel/saved
			fi
			
			if [ -e  ~/.isingmodel/logfile.log ]
			then 
				echo "~/.isingmodel/logfile already exists"
			else
				touch ~/.isingmodel/logfile.log
			fi
		;;
		compile)
			echo "Create the makefile via Qmake : "
			qmake -o makefile isingmodel.pro
			wait
			echo ""
			echo "Compilation of the whole project : "
			make
			wait
			echo ""
			echo "Move executable in /usr/bin"
			mv isingmodel /usr/bin
			echo ""
		;;
		clean)
			echo "Clean all futile files : "
			make clean
			wait
			echo ""
		;;
		uninstall)
		if  test -f /usr/include/c++/4.5/mersenne 
		then
			mv /usr/include/c++/4.5/mersenne .
			rm /usr/include/c++/4.5/mersenne 
		fi
	
		if  test -f /usr/include/c++/4.5/randomc.h 
		then 
			mv /usr/include/c++/4.5/randomc.h .
			rm /usr/include/c++/4.5/randomc.h 
		fi
		
		if test -f /usr/bin/isingmodel
		then rm /usr/bin/isingmodel
		fi
		;;
	esac
;;
esac



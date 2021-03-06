#############################################################################
# Makefile for building: isingmodel
# Generated by qmake (2.01a) (Qt 4.7.2) on: lun. f�vr. 20 18:14:09 2012
# Project:  isingmodel.pro
# Template: app
# Command: /usr/bin/qmake -o makefile isingmodel.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -D_REENTRANT -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -O2 -D_REENTRANT -Wall -W $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib -llog4cpp -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.C \
		ANALYSIS/src/Mersenne.C \
		GUI/GraphicMain.C \
		GUI/MainWindow/src/MainWindow.C \
		GUI/MainWindow/src/MenuBar.C \
		GUI/gnuplot/GnuplotWindow/Window/src/GnuplotWindow.C \
		GUI/gnuplot/GnuplotWindow/ExistingFile/src/ExistingGroupBox.C \
		GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileGroupBox.C \
		GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileSettingsGroupBox.C \
		GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/src/PlotAndSaveGroupBox.C \
		GUI/gnuplot/GnuplotWindow/NewFile/src/RangeGroupBox.C \
		GUI/gnuplot/GnuplotWindow/NewFile/src/PlotTableView.C \
		GUI/gnuplot/GnuplotWindow/NewFile/src/PlotSettingsGroupBox.C \
		UTILS/Menu/src/menu.C moc_MainWindow.cpp \
		moc_ExistingGroupBox.cpp \
		moc_NewFileGroupBox.cpp \
		moc_NewFileSettingsGroupBox.cpp \
		moc_PlotAndSaveGroupBox.cpp \
		moc_RangeGroupBox.cpp \
		moc_PlotSettingsGroupBox.cpp
OBJECTS       = main.o \
		Mersenne.o \
		GraphicMain.o \
		MainWindow.o \
		MenuBar.o \
		GnuplotWindow.o \
		ExistingGroupBox.o \
		NewFileGroupBox.o \
		NewFileSettingsGroupBox.o \
		PlotAndSaveGroupBox.o \
		RangeGroupBox.o \
		PlotTableView.o \
		PlotSettingsGroupBox.o \
		menu.o \
		moc_MainWindow.o \
		moc_ExistingGroupBox.o \
		moc_NewFileGroupBox.o \
		moc_NewFileSettingsGroupBox.o \
		moc_PlotAndSaveGroupBox.o \
		moc_RangeGroupBox.o \
		moc_PlotSettingsGroupBox.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		isingmodel.pro
QMAKE_TARGET  = isingmodel
DESTDIR       = 
TARGET        = isingmodel

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

makefile: isingmodel.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -o makefile isingmodel.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o makefile isingmodel.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/isingmodel1.0.0 || $(MKDIR) .tmp/isingmodel1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/isingmodel1.0.0/ && $(COPY_FILE) --parents ANALYSIS/include/Mersenne.h GUI/GraphicMain.h GUI/MainWindow/include/MainWindow.h GUI/MainWindow/include/MenuBar.h GUI/gnuplot/GnuplotWindow/Window/include/GnuplotWindow.h GUI/gnuplot/GnuplotWindow/ExistingFile/include/ExistingGroupBox.h GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileGroupBox.h GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h UTILS/Menu/include/menu.h .tmp/isingmodel1.0.0/ && $(COPY_FILE) --parents main.C ANALYSIS/src/Mersenne.C GUI/GraphicMain.C GUI/MainWindow/src/MainWindow.C GUI/MainWindow/src/MenuBar.C GUI/gnuplot/GnuplotWindow/Window/src/GnuplotWindow.C GUI/gnuplot/GnuplotWindow/ExistingFile/src/ExistingGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileSettingsGroupBox.C GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/src/PlotAndSaveGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/src/RangeGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/src/PlotTableView.C GUI/gnuplot/GnuplotWindow/NewFile/src/PlotSettingsGroupBox.C UTILS/Menu/src/menu.C .tmp/isingmodel1.0.0/ && (cd `dirname .tmp/isingmodel1.0.0` && $(TAR) isingmodel1.0.0.tar isingmodel1.0.0 && $(COMPRESS) isingmodel1.0.0.tar) && $(MOVE) `dirname .tmp/isingmodel1.0.0`/isingmodel1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/isingmodel1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_MainWindow.cpp moc_ExistingGroupBox.cpp moc_NewFileGroupBox.cpp moc_NewFileSettingsGroupBox.cpp moc_PlotAndSaveGroupBox.cpp moc_RangeGroupBox.cpp moc_PlotSettingsGroupBox.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_MainWindow.cpp moc_ExistingGroupBox.cpp moc_NewFileGroupBox.cpp moc_NewFileSettingsGroupBox.cpp moc_PlotAndSaveGroupBox.cpp moc_RangeGroupBox.cpp moc_PlotSettingsGroupBox.cpp
moc_MainWindow.cpp: GUI/MainWindow/include/MainWindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) GUI/MainWindow/include/MainWindow.h -o moc_MainWindow.cpp

moc_ExistingGroupBox.cpp: GUI/gnuplot/GnuplotWindow/ExistingFile/include/ExistingGroupBox.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) GUI/gnuplot/GnuplotWindow/ExistingFile/include/ExistingGroupBox.h -o moc_ExistingGroupBox.cpp

moc_NewFileGroupBox.cpp: GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileGroupBox.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileGroupBox.h -o moc_NewFileGroupBox.cpp

moc_NewFileSettingsGroupBox.cpp: GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h -o moc_NewFileSettingsGroupBox.cpp

moc_PlotAndSaveGroupBox.cpp: GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h -o moc_PlotAndSaveGroupBox.cpp

moc_RangeGroupBox.cpp: GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h -o moc_RangeGroupBox.cpp

moc_PlotSettingsGroupBox.cpp: GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h -o moc_PlotSettingsGroupBox.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.C UTILS/Menu/include/menu.h \
		ANALYSIS/include/Mersenne.h \
		GUI/GraphicMain.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.C

Mersenne.o: ANALYSIS/src/Mersenne.C 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Mersenne.o ANALYSIS/src/Mersenne.C

GraphicMain.o: GUI/GraphicMain.C GUI/GraphicMain.h \
		GUI/gnuplot/GnuplotWindow/Window/include/GnuplotWindow.h \
		GUI/gnuplot/GnuplotWindow/ExistingFile/include/ExistingGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h \
		GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GraphicMain.o GUI/GraphicMain.C

MainWindow.o: GUI/MainWindow/src/MainWindow.C GUI/MainWindow/include/MainWindow.h \
		GUI/MainWindow/include/MenuBar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MainWindow.o GUI/MainWindow/src/MainWindow.C

MenuBar.o: GUI/MainWindow/src/MenuBar.C GUI/MainWindow/include/MenuBar.h \
		GUI/MainWindow/include/MainWindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MenuBar.o GUI/MainWindow/src/MenuBar.C

GnuplotWindow.o: GUI/gnuplot/GnuplotWindow/Window/src/GnuplotWindow.C GUI/gnuplot/GnuplotWindow/Window/include/GnuplotWindow.h \
		GUI/gnuplot/GnuplotWindow/ExistingFile/include/ExistingGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h \
		GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GnuplotWindow.o GUI/gnuplot/GnuplotWindow/Window/src/GnuplotWindow.C

ExistingGroupBox.o: GUI/gnuplot/GnuplotWindow/ExistingFile/src/ExistingGroupBox.C GUI/gnuplot/GnuplotWindow/ExistingFile/include/ExistingGroupBox.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ExistingGroupBox.o GUI/gnuplot/GnuplotWindow/ExistingFile/src/ExistingGroupBox.C

NewFileGroupBox.o: GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o NewFileGroupBox.o GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileGroupBox.C

NewFileSettingsGroupBox.o: GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileSettingsGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o NewFileSettingsGroupBox.o GUI/gnuplot/GnuplotWindow/NewFile/src/NewFileSettingsGroupBox.C

PlotAndSaveGroupBox.o: GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/src/PlotAndSaveGroupBox.C GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PlotAndSaveGroupBox.o GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/src/PlotAndSaveGroupBox.C

RangeGroupBox.o: GUI/gnuplot/GnuplotWindow/NewFile/src/RangeGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RangeGroupBox.o GUI/gnuplot/GnuplotWindow/NewFile/src/RangeGroupBox.C

PlotTableView.o: GUI/gnuplot/GnuplotWindow/NewFile/src/PlotTableView.C GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PlotTableView.o GUI/gnuplot/GnuplotWindow/NewFile/src/PlotTableView.C

PlotSettingsGroupBox.o: GUI/gnuplot/GnuplotWindow/NewFile/src/PlotSettingsGroupBox.C GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h \
		GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PlotSettingsGroupBox.o GUI/gnuplot/GnuplotWindow/NewFile/src/PlotSettingsGroupBox.C

menu.o: UTILS/Menu/src/menu.C UTILS/Menu/include/menu.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o menu.o UTILS/Menu/src/menu.C

moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MainWindow.o moc_MainWindow.cpp

moc_ExistingGroupBox.o: moc_ExistingGroupBox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ExistingGroupBox.o moc_ExistingGroupBox.cpp

moc_NewFileGroupBox.o: moc_NewFileGroupBox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_NewFileGroupBox.o moc_NewFileGroupBox.cpp

moc_NewFileSettingsGroupBox.o: moc_NewFileSettingsGroupBox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_NewFileSettingsGroupBox.o moc_NewFileSettingsGroupBox.cpp

moc_PlotAndSaveGroupBox.o: moc_PlotAndSaveGroupBox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_PlotAndSaveGroupBox.o moc_PlotAndSaveGroupBox.cpp

moc_RangeGroupBox.o: moc_RangeGroupBox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_RangeGroupBox.o moc_RangeGroupBox.cpp

moc_PlotSettingsGroupBox.o: moc_PlotSettingsGroupBox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_PlotSettingsGroupBox.o moc_PlotSettingsGroupBox.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:


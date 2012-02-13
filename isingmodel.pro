###########################################
#          isingmodel.pro file            #
###########################################
#         Build a makefile via            #
#   "qmake -o makefile isingmodel.pro"    #
#     Type "make" for compilation of      #
#           the whole project             #
###########################################

TARGET = isingmodel

CONFIG +=qt

HEADERS += UTILS/include/menu.h \
           ANALYSIS/include/Mersenne.h \
           GUI/include/GraphicMain.h \
           GUI/include/MainWindow.h \
           GUI/include/MenuBar.h \
           GUI/include/gnuplot/GnuplotWindow.h \
           GUI/include/gnuplot/ExistingGroupBox.h
           

SOURCES += main.C \
           UTILS/src/menu.C \
           ANALYSIS/src/Mersenne.C \
           GUI/src/GraphicMain.C \
           GUI/src/MainWindow.C \
           GUI/src/MenuBar.C \
           GUI/src/gnuplot/GnuplotWindow.C \
           GUI/src/gnuplot/ExistingGroupBox.C
           
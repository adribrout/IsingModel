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
           GUI/GraphicMain.h \
           GUI/MainWindow/include/MainWindow.h \
           GUI/MainWindow/include/MenuBar.h \
           GUI/gnuplot/GnuplotWindow/include/GnuplotWindow.h \
           GUI/gnuplot/ExistingFile/include/ExistingGroupBox.h \
           GUI/gnuplot/NewFile/include/NewFileGroupBox.h \
           GUI/gnuplot/NewFile/include/NewFileSettingsGroupBox.h \
           GUI/gnuplot/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h \
           GUI/gnuplot/NewFile/include/RangeGroupBox.h \
           GUI/gnuplot/NewFile/include/PlotTableView.h \
           GUI/gnuplot/NewFile/include/PlotSettingsGroupBox.h
           

SOURCES += main.C \
           UTILS/src/menu.C \
           ANALYSIS/src/Mersenne.C \
           GUI/GraphicMain.C \
           GUI/MainWindow/src/MainWindow.C \
           GUI/MainWindow/src/MenuBar.C \
           GUI/gnuplot/GnuplotWindow/src/GnuplotWindow.C \
           GUI/gnuplot/ExistingFile/src/ExistingGroupBox.C \
           GUI/gnuplot/NewFile/src/NewFileGroupBox.C \
           GUI/gnuplot/NewFile/src/NewFileSettingsGroupBox.C \
           GUI/gnuplot/PlotAndSaveGroupBox/src/PlotAndSaveGroupBox.C \
           GUI/gnuplot/NewFile/src/RangeGroupBox.C \
           GUI/gnuplot/NewFile/src/PlotTableView.C \
           GUI/gnuplot/NewFile/src/PlotSettingsGroupBox.C
           
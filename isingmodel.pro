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

HEADERS += ANALYSIS/include/Mersenne.h \
           GUI/GraphicMain.h \
           GUI/MainWindow/include/MainWindow.h \
           GUI/MainWindow/include/MenuBar.h \
           GUI/gnuplot/GnuplotWindow/Window/include/GnuplotWindow.h \
           GUI/gnuplot/GnuplotWindow/ExistingFile/include/ExistingGroupBox.h \
           GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileGroupBox.h \
           GUI/gnuplot/GnuplotWindow/NewFile/include/NewFileSettingsGroupBox.h \
           GUI/gnuplot/GnuplotWindow/PlotAndSaveGroupBox/include/PlotAndSaveGroupBox.h \
           GUI/gnuplot/GnuplotWindow/NewFile/include/RangeGroupBox.h \
           GUI/gnuplot/GnuplotWindow/NewFile/include/PlotTableView.h \
           GUI/gnuplot/GnuplotWindow/NewFile/include/PlotSettingsGroupBox.h \
           GUI/gnuplot/GnuplotWindow/NewFile/include/CurveSettingsGroupBox.h \
           UTILS/Menu/include/menu.h \

SOURCES += main.C \
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
           GUI/gnuplot/GnuplotWindow/NewFile/src/CurveSettingsGroupBox.C \
           UTILS/Menu/src/menu.C \

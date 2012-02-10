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
           

SOURCES += main.C \
           UTILS/src/menu.C \
           ANALYSIS/src/Mersenne.C \
           GUI/src/GraphicMain.C \
           
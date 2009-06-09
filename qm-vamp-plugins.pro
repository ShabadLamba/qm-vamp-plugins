
TEMPLATE = lib
CONFIG += plugin warn_on release
CONFIG -= qt

linux-g++* {
    QMAKE_CXXFLAGS_RELEASE += -DNDEBUG -O3 -fno-exceptions -fPIC -ffast-math -msse -msse2 -ftree-vectorize -fomit-frame-pointer
    DEFINES += USE_PTHREADS
    INCLUDEPATH += ../vamp-plugin-sdk ../qm-dsp
    LIBPATH += ../vamp-plugin-sdk/vamp-sdk ../qm-dsp
}

linux-g++ {
    LIBS += -static-libgcc -Wl,-Bstatic -lqm-dsp -lvamp-sdk -L/usr/lib/sse2/atlas -L/usr/lib/atlas/sse -llapack -lblas $$system(g++ -print-file-name=libstdc++.a) -lc -Wl,-Bdynamic -lpthread -Wl,--version-script=vamp-plugin.map
}

linux-g++-64 {
    LIBS += -Lbuild/linux/amd64  -Wl,-Bstatic -lqm-dsp -lvamp-sdk -llapack -lcblas -latlas -Wl,-Bdynamic -lpthread -Wl,--version-script=vamp-plugin.map
}

macx-g++* {
    QMAKE_MAC_SDK=/Developer/SDKs/MacOSX10.4u.sdk
    QMAKE_CXXFLAGS_RELEASE += -O2 -g0
    CONFIG += x86 ppc
    DEFINES += USE_PTHREADS
    LIBS += -lqm-dsp -lvamp-sdk -framework Accelerate -lpthread -exported_symbols_list=vamp-plugin.list
    INCLUDEPATH += ../vamp-plugin-sdk ../qm-dsp
    LIBPATH += ../include ../lib ../qm-dsp
}

win32-x-g++ {
    QMAKE_CXXFLAGS_RELEASE += -DNDEBUG -O2 -march=pentium3 -msse
    INCLUDEPATH += ../include ../qm-dsp
    LIBPATH += ./build/mingw32 ../lib ../qm-dsp ../qm-dsp/release 
    LIBS += -shared -Wl,-Bstatic -lqm-dsp -lvamp-sdk -llapack -lcblas -latlas -lf77blas -lg2cstubs -Wl,-Bdynamic -Wl,--version-script=vamp-plugin.map
}

OBJECTS_DIR = tmp_obj
MOC_DIR = tmp_moc

DEPENDPATH += plugins
INCLUDEPATH += . plugins

# Input
HEADERS += plugins/AdaptiveSpectrogram.h \
           plugins/BarBeatTrack.h \
           plugins/BeatTrack.h \
           plugins/DWT.h \
           plugins/OnsetDetect.h \
           plugins/ChromagramPlugin.h \
           plugins/ConstantQSpectrogram.h \
           plugins/KeyDetect.h \
           plugins/MFCCPlugin.h \
           plugins/SegmenterPlugin.h \
           plugins/SimilarityPlugin.h \
           plugins/TonalChangeDetect.h \
           plugins/Transcription.h
SOURCES += g2cstubs.c \
           plugins/AdaptiveSpectrogram.cpp \
           plugins/BarBeatTrack.cpp \
           plugins/BeatTrack.cpp \
           plugins/DWT.cpp \
           plugins/OnsetDetect.cpp \
           plugins/ChromagramPlugin.cpp \
           plugins/ConstantQSpectrogram.cpp \
           plugins/KeyDetect.cpp \
           plugins/MFCCPlugin.cpp \
           plugins/SegmenterPlugin.cpp \
           plugins/SimilarityPlugin.cpp \
           plugins/TonalChangeDetect.cpp \
           plugins/Transcription.cpp \
           ./libmain.cpp


QT += declarative

OTHER_FILES += \
    main.qml

SOURCES += \
    main.cpp \
    openwnn/wnnEngine/composingtext.cpp \
    openwnn/wnnEngine/kanaconverter.cpp \
    openwnn/wnnEngine/letterconverter.cpp \
    openwnn/wnnEngine/openwnnclauseconverterjajp.cpp \
    openwnn/wnnEngine/openwnndictionary.cpp \
    openwnn/wnnEngine/openwnnenginejajp.cpp \
    openwnn/wnnEngine/romkan.cpp \
    openwnn/wnnEngine/romkanfullkatakana.cpp \
    openwnn/wnnEngine/romkanhalfkatakana.cpp \
    openwnn/wnnDictionary/engine/ndapi.c \
    openwnn/wnnDictionary/engine/ndbdic.c \
    openwnn/wnnDictionary/engine/ndcommon.c \
    openwnn/wnnDictionary/engine/ndfdic.c \
    openwnn/wnnDictionary/engine/ndldic.c \
    openwnn/wnnDictionary/engine/ndrdic.c \
    openwnn/wnnDictionary/engine/neapi.c \
    openwnn/wnnDictionary/engine/necode.c \
    openwnn/wnnDictionary/engine/nj_str.c \
    openwnn/wnnEngine/WnnJpnDic.c

HEADERS += \
    openwnn/wnnDictionary/include/nj_dic.h \
    openwnn/wnnDictionary/include/nj_err.h \
    openwnn/wnnDictionary/include/nj_ext.h \
    openwnn/wnnDictionary/include/nj_lib.h \
    openwnn/wnnDictionary/include/njd.h \
    openwnn/wnnDictionary/include/njx_lib.h \
    openwnn/wnnEngine/include/composingtext.h \
    openwnn/wnnEngine/include/kanaconverter.h \
    openwnn/wnnEngine/include/letterconverter.h \
    openwnn/wnnEngine/include/openwnnclauseconverterjajp.h \
    openwnn/wnnEngine/include/openwnndictionary.h \
    openwnn/wnnEngine/include/openwnnenginejajp.h \
    openwnn/wnnEngine/include/romkan.h \
    openwnn/wnnEngine/include/romkanfullkatakana.h \
    openwnn/wnnEngine/include/romkanhalfkatakana.h \
    openwnn/wnnEngine/include/strsegment.h \
    openwnn/wnnEngine/include/wnnword.h \
    openwnn/wnnEngine/predef_table.h

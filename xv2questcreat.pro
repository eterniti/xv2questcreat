#-------------------------------------------------
#
# Project created by QtCreator 2018-06-11T09:40:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xv2questcreat
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

QMAKE_POST_LINK += mt -nologo -manifest $$PWD/../xv2ins_common/manifest.xml -outputresource:$$OUT_PWD/release/$$TARGET".exe" $$escape_expand(\n\t)

SOURCES += \
    ../eternity_common/DBXV2/BdmFile.cpp \
    ../eternity_common/DBXV2/BpeFile.cpp \
    ../eternity_common/DBXV2/IkdFile.cpp \
    ../eternity_common/DBXV2/VlcFile.cpp \
    ../eternity_common/UtilsCrypto.cpp \
    ../eternity_common/UtilsFS.cpp \
    ../eternity_common/UtilsMisc.cpp \
    ../eternity_common/UtilsStr.cpp \
    ../eternity_common/UtilsXML.cpp \
    ../eternity_common/UtilsZlib.cpp \
        main.cpp \
        mainwindow.cpp \
    ../eternity_common/tinyxml/tinystr.cpp \
    ../eternity_common/tinyxml/tinyxml.cpp \
    ../eternity_common/tinyxml/tinyxmlerror.cpp \
    ../eternity_common/tinyxml/tinyxmlparser.cpp \
    ../eternity_common/Criware/AcbFile.cpp \
    ../eternity_common/Criware/Afs2File.cpp \
    ../eternity_common/DBXV2/BacFile.cpp \
    ../eternity_common/BaseFile.cpp \
    ../eternity_common/DBXV2/BcsFile.cpp \
    ../eternity_common/BitStream.cpp \
    ../eternity_common/DBXV2/BsaFile.cpp \
    ../eternity_common/DBXV2/CharaListFile.cpp \
    ../eternity_common/DBXV2/CmlFile.cpp \
    ../eternity_common/DBXV2/CmsFile.cpp \
    ../eternity_common/DBXV2/CncFile.cpp \
    ../eternity_common/DBXV2/CnsFile.cpp \
    ../eternity_common/Criware/CpkFile.cpp \
    ../eternity_common/Criware/CriFs.cpp \
    ../eternity_common/Criware/CrilaylaFixedBitStream.cpp \
    ../eternity_common/DBXV2/CsoFile.cpp \
    ../eternity_common/DBXV2/CusFile.cpp \
    ../eternity_common/Dimps/EmbFile.cpp \
    ../eternity_common/FileStream.cpp \
    ../eternity_common/FixedBitStream.cpp \
    ../eternity_common/FixedMemoryStream.cpp \
    ../eternity_common/Criware/HcaFile.cpp \
    ../eternity_common/DBXV2/IdbFile.cpp \
    ../eternity_common/Misc/IggyFile.cpp \
    ../eternity_common/IniFile.cpp \
    ../eternity_common/MemoryStream.cpp \
    ../eternity_common/DBXV2/MsgFile.cpp \
    ../eternity_common/DBXV2/PalFile.cpp \
    ../eternity_common/DBXV2/PsaFile.cpp \
    ../eternity_common/DBXV2/PscFile.cpp \
    ../eternity_common/DBXV2/PupFile.cpp \
    ../eternity_common/DBXV2/QbtFile.cpp \
    ../eternity_common/DBXV2/QedFile.cpp \
    ../eternity_common/DBXV2/QmlFile.cpp \
    ../eternity_common/DBXV2/QslFile.cpp \
    ../eternity_common/DBXV2/QxdFile.cpp \
    ../eternity_common/DBXV2/SevFile.cpp \
    ../eternity_common/Stream.cpp \
    ../eternity_common/SwfFile.cpp \
    ../eternity_common/DBXV2/TnlFile.cpp \
    ../eternity_common/DBXV2/TtbFile.cpp \
    ../eternity_common/DBXV2/TtcFile.cpp \
    ../eternity_common/Criware/UtfFile.cpp \
    ../eternity_common/WavFile.cpp \
    ../eternity_common/DBXV2/X2mCostumeFile.cpp \
    ../eternity_common/DBXV2/X2mFile.cpp \
    ../eternity_common/DBXV2/Xenoverse2.cpp \
    ../eternity_common/DBXV2/Xv2Fs.cpp \
    ../eternity_common/DBXV2/Xv2PatcherSlotsFile.cpp \
    ../eternity_common/DBXV2/Xv2PatcherSlotsFileStage.cpp \
    ../eternity_common/DBXV2/Xv2PreBakedFile.cpp \
    ../eternity_common/DBXV2/Xv2QuestCompiler.cpp \
    ../eternity_common/DBXV2/Xv2SavFile.cpp \
    ../eternity_common/DBXV2/Xv2StageDefFile.cpp \
    ../eternity_common/ZipFile.cpp \
    ../eternity_common/crypto/md5.c \
    ../eternity_common/crypto/rijndael.c \
    ../eternity_common/crypto/sha1.c \
    ../eternity_common/DBXV2/AurFile.cpp \
    debug.cpp \
    ../xv2ins_common/Config.cpp \
    ../xv2ins_common/listdialog.cpp \
    ../xv2ins_common/logdialog.cpp \
    ../xv2ins_common/requerimentsdialog.cpp \
    ../xv2ins_common/waitdialog.cpp \
    ../xv2ins_common/xv2ins_common.cpp \
    ../eternity_common/Thread.cpp \
    ../eternity_common/DBXV2/HciFile.cpp \
    ../eternity_common/DBXV2/QsfFile.cpp \
    ../eternity_common/DBXV2/ErsFile.cpp

HEADERS += \
    ../eternity_common/DBXV2/BdmFile.h \
    ../eternity_common/DBXV2/BpeFile.h \
    ../eternity_common/DBXV2/IkdFile.h \
    ../eternity_common/DBXV2/VlcFile.h \
    ../eternity_common/UtilsCrypto.h \
    ../eternity_common/UtilsFS.h \
    ../eternity_common/UtilsMisc.h \
    ../eternity_common/UtilsQt.h \
    ../eternity_common/UtilsStr.h \
    ../eternity_common/UtilsXML.h \
    ../eternity_common/UtilsZlib.h \
        mainwindow.h \
    ../eternity_common/crypto/md5.h \
    ../eternity_common/crypto/rijndael.h \
    ../eternity_common/crypto/sha1.h \
    ../eternity_common/tinyxml/tinystr.h \
    ../eternity_common/tinyxml/tinyxml.h \
    ../eternity_common/vs/dirent.h \
    ../eternity_common/Criware/AcbFile.h \
    ../eternity_common/Criware/Afs2File.h \
    ../eternity_common/AudioFile.h \
    ../eternity_common/DBXV2/AurFile.h \
    ../eternity_common/Criware/AwbFile.h \
    ../eternity_common/DBXV2/BacFile.h \
    ../eternity_common/BaseFile.h \
    ../eternity_common/DBXV2/BcsFile.h \
    ../eternity_common/BitStream.h \
    ../eternity_common/DBXV2/BsaFile.h \
    ../eternity_common/DBXV2/CharaListFile.h \
    ../eternity_common/DBXV2/CmlFile.h \
    ../eternity_common/DBXV2/CmsFile.h \
    ../eternity_common/DBXV2/CncFile.h \
    ../eternity_common/DBXV2/CnsFile.h \
    ../eternity_common/common.h \
    ../eternity_common/Criware/CpkFile.h \
    ../eternity_common/Criware/CriFs.h \
    ../eternity_common/Criware/CrilaylaFixedBitStream.h \
    ../eternity_common/Criware/CriwareAudioContainer.h \
    ../eternity_common/DBXV2/CsoFile.h \
    ../eternity_common/DBXV2/CusFile.h \
    ../eternity_common/debug.h \
    ../eternity_common/Dimps/EmbFile.h \
    ../eternity_common/FileStream.h \
    ../eternity_common/FixedBitStream.h \
    ../eternity_common/FixedMemoryStream.h \
    ../eternity_common/Criware/HcaFile.h \
    ../eternity_common/DBXV2/IdbFile.h \
    ../eternity_common/Misc/IggyFile.h \
    ../eternity_common/IniFile.h \
    ../eternity_common/MemoryStream.h \
    ../eternity_common/DBXV2/MsgFile.h \
    ../eternity_common/DBXV2/PalFile.h \
    ../eternity_common/DBXV2/PsaFile.h \
    ../eternity_common/DBXV2/PscFile.h \
    ../eternity_common/DBXV2/PupFile.h \
    ../eternity_common/DBXV2/QedFile.h \
    ../eternity_common/DBXV2/QmlFile.h \
    ../eternity_common/DBXV2/QslFile.h \
    ../eternity_common/DBXV2/QxdFile.h \
    ../eternity_common/DBXV2/SevFile.h \
    ../eternity_common/Stream.h \
    ../eternity_common/SwfFile.h \
    ../eternity_common/DBXV2/TnlFile.h \
    ../eternity_common/DBXV2/TtbFile.h \
    ../eternity_common/DBXV2/TtcFile.h \
    ../eternity_common/Criware/UtfFile.h \
    ../eternity_common/Utils.h \
    ../eternity_common/WavFile.h \
    ../eternity_common/DBXV2/X2mCostumeFile.h \
    ../eternity_common/DBXV2/X2mFile.h \
    ../eternity_common/DBXV2/Xenoverse2.h \
    ../eternity_common/DBXV2/Xv2Fs.h \
    ../eternity_common/DBXV2/Xv2PatcherSlotsFile.h \
    ../eternity_common/DBXV2/Xv2PatcherSlotsFileStage.h \
    ../eternity_common/DBXV2/Xv2PreBakedFile.h \
    ../eternity_common/DBXV2/Xv2QuestCompiler.h \
    ../eternity_common/DBXV2/Xv2SavFile.h \
    ../eternity_common/DBXV2/Xv2StageDefFile.h \
    ../eternity_common/ZipFile.h \
    ../eternity_common/DBXV2/AurFile.h \
    ../xv2ins_common/Config.h \
    ../xv2ins_common/listdialog.h \
    ../xv2ins_common/logdialog.h \
    ../xv2ins_common/requerimentsdialog.h \
    ../xv2ins_common/waitdialog.h \
    ../xv2ins_common/xv2ins_common.h \
    ../eternity_common/Thread.h \
    ../eternity_common/DBXV2/HciFile.h \
    ../eternity_common/DBXV2/QsfFile.h \
    ../eternity_common/DBXV2/ErsFile.h

FORMS += \
        mainwindow.ui \
    ../xv2ins_common/listdialog.ui \
    ../xv2ins_common/logdialog.ui \
    ../xv2ins_common/requerimentsdialog.ui \
    ../xv2ins_common/waitdialog.ui

INCLUDEPATH += ../eternity_common ../eternity_common/DBXV2 ../eternity_common/Dimps ../xv2ins_common

QMAKE_CXXFLAGS += -DTIXML_USE_STL
LIBS += -L"C:\Program Files (x86)\Microsoft SDKs\Windows\v7.1A\Lib\x64" -lversion -lzipstatic -lzlib_static

win32:RC_ICONS += DBXV2.ico

DISTFILES += \
    ../eternity_common/DBXV2/xv2_default_stage_slots.inc \
    ../eternity_common/DBXV2/xv2stagedef_default.inc

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *modInfoTab;
    QLineEdit *modAuthorEdit;
    QLabel *label;
    QLabel *label_4;
    QPushButton *guidButton;
    QLineEdit *modVersionEdit;
    QLineEdit *modNameEdit;
    QLabel *label_3;
    QLineEdit *modGuidEdit;
    QLabel *label_2;
    QPushButton *guidCopyButton;
    QWidget *filesTab;
    QLineEdit *questFilesEdit;
    QPushButton *questFilesButton;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *audioFilesEdit;
    QPushButton *audioFilesButton;
    QLabel *label_7;
    QLineEdit *atmodsEdit;
    QPushButton *atmodsButton;
    QLabel *label_8;
    QLineEdit *addDataEdit;
    QPushButton *addDataButton;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(560, 395);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 521, 291));
        modInfoTab = new QWidget();
        modInfoTab->setObjectName(QStringLiteral("modInfoTab"));
        modInfoTab->setAutoFillBackground(true);
        modAuthorEdit = new QLineEdit(modInfoTab);
        modAuthorEdit->setObjectName(QStringLiteral("modAuthorEdit"));
        modAuthorEdit->setGeometry(QRect(70, 58, 215, 20));
        label = new QLabel(modInfoTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(28, 20, 47, 13));
        label_4 = new QLabel(modInfoTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(31, 140, 47, 13));
        guidButton = new QPushButton(modInfoTab);
        guidButton->setObjectName(QStringLiteral("guidButton"));
        guidButton->setGeometry(QRect(300, 137, 91, 23));
        modVersionEdit = new QLineEdit(modInfoTab);
        modVersionEdit->setObjectName(QStringLiteral("modVersionEdit"));
        modVersionEdit->setGeometry(QRect(70, 98, 61, 20));
        modNameEdit = new QLineEdit(modInfoTab);
        modNameEdit->setObjectName(QStringLiteral("modNameEdit"));
        modNameEdit->setGeometry(QRect(70, 18, 315, 20));
        label_3 = new QLabel(modInfoTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 47, 13));
        modGuidEdit = new QLineEdit(modInfoTab);
        modGuidEdit->setObjectName(QStringLiteral("modGuidEdit"));
        modGuidEdit->setEnabled(false);
        modGuidEdit->setGeometry(QRect(70, 138, 215, 20));
        label_2 = new QLabel(modInfoTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(22, 60, 47, 13));
        guidCopyButton = new QPushButton(modInfoTab);
        guidCopyButton->setObjectName(QStringLiteral("guidCopyButton"));
        guidCopyButton->setGeometry(QRect(405, 137, 95, 23));
        tabWidget->addTab(modInfoTab, QString());
        filesTab = new QWidget();
        filesTab->setObjectName(QStringLiteral("filesTab"));
        filesTab->setAutoFillBackground(true);
        questFilesEdit = new QLineEdit(filesTab);
        questFilesEdit->setObjectName(QStringLiteral("questFilesEdit"));
        questFilesEdit->setGeometry(QRect(100, 18, 325, 20));
        questFilesButton = new QPushButton(filesTab);
        questFilesButton->setObjectName(QStringLiteral("questFilesButton"));
        questFilesButton->setGeometry(QRect(435, 17, 61, 23));
        label_6 = new QLabel(filesTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(38, 20, 61, 16));
        label_5 = new QLabel(filesTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(55, 60, 47, 13));
        audioFilesEdit = new QLineEdit(filesTab);
        audioFilesEdit->setObjectName(QStringLiteral("audioFilesEdit"));
        audioFilesEdit->setGeometry(QRect(100, 58, 325, 20));
        audioFilesButton = new QPushButton(filesTab);
        audioFilesButton->setObjectName(QStringLiteral("audioFilesButton"));
        audioFilesButton->setGeometry(QRect(435, 57, 61, 23));
        label_7 = new QLabel(filesTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(9, 100, 91, 16));
        atmodsEdit = new QLineEdit(filesTab);
        atmodsEdit->setObjectName(QStringLiteral("atmodsEdit"));
        atmodsEdit->setGeometry(QRect(100, 98, 325, 20));
        atmodsButton = new QPushButton(filesTab);
        atmodsButton->setObjectName(QStringLiteral("atmodsButton"));
        atmodsButton->setGeometry(QRect(435, 97, 61, 23));
        label_8 = new QLabel(filesTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(5, 140, 101, 16));
        addDataEdit = new QLineEdit(filesTab);
        addDataEdit->setObjectName(QStringLiteral("addDataEdit"));
        addDataEdit->setGeometry(QRect(100, 138, 325, 20));
        addDataButton = new QPushButton(filesTab);
        addDataButton->setObjectName(QStringLiteral("addDataButton"));
        addDataButton->setGeometry(QRect(435, 137, 61, 23));
        label_9 = new QLabel(filesTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 190, 121, 16));
        label_10 = new QLabel(filesTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 220, 301, 16));
        tabWidget->addTab(filesTab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave_as);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "XV2 Quest Creator", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_4->setText(QApplication::translate("MainWindow", "GUID:", 0));
        guidButton->setText(QApplication::translate("MainWindow", "Generate new", 0));
        label_3->setText(QApplication::translate("MainWindow", "Version:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Author:", 0));
        guidCopyButton->setText(QApplication::translate("MainWindow", "Copy to clipboard", 0));
        tabWidget->setTabText(tabWidget->indexOf(modInfoTab), QApplication::translate("MainWindow", "Mod info", 0));
        questFilesButton->setText(QApplication::translate("MainWindow", "Change", 0));
        label_6->setText(QApplication::translate("MainWindow", "Quest files:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Audio*:", 0));
        audioFilesButton->setText(QApplication::translate("MainWindow", "Change", 0));
        label_7->setText(QApplication::translate("MainWindow", "Attached mods*:", 0));
        atmodsButton->setText(QApplication::translate("MainWindow", "Change", 0));
        label_8->setText(QApplication::translate("MainWindow", "Additional data**:", 0));
        addDataButton->setText(QApplication::translate("MainWindow", "Change", 0));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">* Optional</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">** Optional and use only when really needed.</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(filesTab), QApplication::translate("MainWindow", "Files", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

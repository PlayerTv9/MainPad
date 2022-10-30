/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalva;
    QAction *actionApri;
    QAction *actionGrassetto;
    QAction *actionCorsivo;
    QAction *actionInfo;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menue;
    QMenu *menuModifica;
    QMenu *menuFont;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionSalva = new QAction(MainWindow);
        actionSalva->setObjectName(QString::fromUtf8("actionSalva"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/img/salva.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalva->setIcon(icon);
        actionApri = new QAction(MainWindow);
        actionApri->setObjectName(QString::fromUtf8("actionApri"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/img/apri.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionApri->setIcon(icon1);
        actionGrassetto = new QAction(MainWindow);
        actionGrassetto->setObjectName(QString::fromUtf8("actionGrassetto"));
        actionGrassetto->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/img/Grassetto.png"), QSize(), QIcon::Normal, QIcon::On);
        actionGrassetto->setIcon(icon2);
        actionCorsivo = new QAction(MainWindow);
        actionCorsivo->setObjectName(QString::fromUtf8("actionCorsivo"));
        actionCorsivo->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/img/corsivo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCorsivo->setIcon(icon3);
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 40, 761, 521));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menue = new QMenu(menubar);
        menue->setObjectName(QString::fromUtf8("menue"));
        menuModifica = new QMenu(menubar);
        menuModifica->setObjectName(QString::fromUtf8("menuModifica"));
        menuFont = new QMenu(menuModifica);
        menuFont->setObjectName(QString::fromUtf8("menuFont"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menue->menuAction());
        menubar->addAction(menuModifica->menuAction());
        menubar->addAction(menu->menuAction());
        menue->addAction(actionSalva);
        menue->addAction(actionApri);
        menuModifica->addAction(menuFont->menuAction());
        menuFont->addAction(actionGrassetto);
        menuFont->addAction(actionCorsivo);
        menu->addAction(actionInfo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalva->setText(QCoreApplication::translate("MainWindow", "Salva", nullptr));
#if QT_CONFIG(shortcut)
        actionSalva->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionApri->setText(QCoreApplication::translate("MainWindow", "Apri", nullptr));
#if QT_CONFIG(shortcut)
        actionApri->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGrassetto->setText(QCoreApplication::translate("MainWindow", "Grassetto", nullptr));
#if QT_CONFIG(shortcut)
        actionGrassetto->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCorsivo->setText(QCoreApplication::translate("MainWindow", "Corsivo", nullptr));
#if QT_CONFIG(shortcut)
        actionCorsivo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        menue->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuModifica->setTitle(QCoreApplication::translate("MainWindow", "Modifica", nullptr));
        menuFont->setTitle(QCoreApplication::translate("MainWindow", "Font", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

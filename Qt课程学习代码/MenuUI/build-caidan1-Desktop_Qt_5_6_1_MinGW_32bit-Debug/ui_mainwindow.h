/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N_2;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu_C;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        action_N_2 = new QAction(MainWindow);
        action_N_2->setObjectName(QStringLiteral("action_N_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Sunqker/Desktop/Qt\350\257\276\347\250\213/name.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N_2->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 20, 41, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 250, 81, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        menu_C = new QMenu(menuBar);
        menu_C->setObjectName(QStringLiteral("menu_C"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_C->menuAction());
        menu_C->addAction(action_N_2);
        menu_C->addSeparator();
        mainToolBar->addAction(action_N_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_N_2->setText(QApplication::translate("MainWindow", "\346\224\271\345\247\223\345\220\215(&N)", 0));
        label->setText(QApplication::translate("MainWindow", "\346\224\271\345\247\223\345\220\215", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menu_C->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225(&C)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

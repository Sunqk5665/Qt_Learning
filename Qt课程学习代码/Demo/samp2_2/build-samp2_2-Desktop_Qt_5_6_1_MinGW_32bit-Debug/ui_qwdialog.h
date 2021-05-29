/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkBoxBold;
    QCheckBox *chkBoxitalic;
    QCheckBox *chkBoxUnder;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;
    QPlainTextEdit *txtEdit;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(506, 379);
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 30, 321, 71));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        chkBoxBold = new QCheckBox(groupBox);
        chkBoxBold->setObjectName(QStringLiteral("chkBoxBold"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        chkBoxBold->setFont(font);

        horizontalLayout->addWidget(chkBoxBold);

        chkBoxitalic = new QCheckBox(groupBox);
        chkBoxitalic->setObjectName(QStringLiteral("chkBoxitalic"));
        chkBoxitalic->setFont(font);

        horizontalLayout->addWidget(chkBoxitalic);

        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QStringLiteral("chkBoxUnder"));
        chkBoxUnder->setFont(font);

        horizontalLayout->addWidget(chkBoxUnder);

        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 90, 321, 71));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));
        rBtnBlack->setFont(font);

        horizontalLayout_2->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));
        rBtnRed->setFont(font);

        horizontalLayout_2->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));
        rBtnBlue->setFont(font);

        horizontalLayout_2->addWidget(rBtnBlue);

        horizontalLayoutWidget = new QWidget(QWDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 230, 321, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnOK = new QPushButton(horizontalLayoutWidget);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setFont(font);

        horizontalLayout_3->addWidget(btnOK);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnCancle = new QPushButton(horizontalLayoutWidget);
        btnCancle->setObjectName(QStringLiteral("btnCancle"));
        btnCancle->setFont(font);

        horizontalLayout_3->addWidget(btnCancle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(horizontalLayoutWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setFont(font);

        horizontalLayout_3->addWidget(btnClose);

        txtEdit = new QPlainTextEdit(QWDialog);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        txtEdit->setGeometry(QRect(80, 160, 321, 71));
        QFont font1;
        font1.setPointSize(14);
        txtEdit->setFont(font1);

        retranslateUi(QWDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "QWDialog", 0));
        groupBox->setTitle(QString());
        chkBoxBold->setText(QApplication::translate("QWDialog", "Bold", 0));
        chkBoxitalic->setText(QApplication::translate("QWDialog", "Italic", 0));
        chkBoxUnder->setText(QApplication::translate("QWDialog", "UnderLin", 0));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QApplication::translate("QWDialog", "Black", 0));
        rBtnRed->setText(QApplication::translate("QWDialog", "Red", 0));
        rBtnBlue->setText(QApplication::translate("QWDialog", "Blue", 0));
        btnOK->setText(QApplication::translate("QWDialog", "\347\241\256\345\256\232", 0));
        btnCancle->setText(QApplication::translate("QWDialog", "\345\217\226\346\266\210", 0));
        btnClose->setText(QApplication::translate("QWDialog", "\351\200\200\345\207\272", 0));
        txtEdit->setPlainText(QApplication::translate("QWDialog", "It's my demo !!!", 0));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H

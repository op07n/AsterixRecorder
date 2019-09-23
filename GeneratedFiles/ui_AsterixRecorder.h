/********************************************************************************
** Form generated from reading UI file 'AsterixRecorder.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASTERIXRECORDER_H
#define UI_ASTERIXRECORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AsterixRecorderClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *EdRecFileName;
    QLabel *label;
    QPushButton *BtnSelRecFile;
    QLabel *label_2;
    QLineEdit *EdRecvPort;
    QPlainTextEdit *plainTextEdit;
    QPushButton *BtnListen;
    QPushButton *BtnRecord;
    QWidget *tab_2;

    void setupUi(QMainWindow *AsterixRecorderClass)
    {
        if (AsterixRecorderClass->objectName().isEmpty())
            AsterixRecorderClass->setObjectName(QString::fromUtf8("AsterixRecorderClass"));
        AsterixRecorderClass->resize(650, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AsterixRecorderClass->sizePolicy().hasHeightForWidth());
        AsterixRecorderClass->setSizePolicy(sizePolicy);
        AsterixRecorderClass->setMinimumSize(QSize(650, 400));
        AsterixRecorderClass->setMaximumSize(QSize(650, 400));
        centralWidget = new QWidget(AsterixRecorderClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 650, 401));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        EdRecFileName = new QLineEdit(tab);
        EdRecFileName->setObjectName(QString::fromUtf8("EdRecFileName"));
        EdRecFileName->setGeometry(QRect(70, 10, 461, 20));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 47, 13));
        BtnSelRecFile = new QPushButton(tab);
        BtnSelRecFile->setObjectName(QString::fromUtf8("BtnSelRecFile"));
        BtnSelRecFile->setGeometry(QRect(540, 10, 101, 23));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 31, 16));
        EdRecvPort = new QLineEdit(tab);
        EdRecvPort->setObjectName(QString::fromUtf8("EdRecvPort"));
        EdRecvPort->setGeometry(QRect(70, 40, 61, 20));
        EdRecvPort->setMaxLength(5);
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(2, 100, 641, 271));
        plainTextEdit->setReadOnly(true);
        BtnListen = new QPushButton(tab);
        BtnListen->setObjectName(QString::fromUtf8("BtnListen"));
        BtnListen->setGeometry(QRect(540, 40, 101, 23));
        BtnRecord = new QPushButton(tab);
        BtnRecord->setObjectName(QString::fromUtf8("BtnRecord"));
        BtnRecord->setGeometry(QRect(540, 70, 101, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        AsterixRecorderClass->setCentralWidget(centralWidget);

        retranslateUi(AsterixRecorderClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AsterixRecorderClass);
    } // setupUi

    void retranslateUi(QMainWindow *AsterixRecorderClass)
    {
        AsterixRecorderClass->setWindowTitle(QCoreApplication::translate("AsterixRecorderClass", "AsterixRecorder", nullptr));
        label->setText(QCoreApplication::translate("AsterixRecorderClass", "File name:", nullptr));
        BtnSelRecFile->setText(QCoreApplication::translate("AsterixRecorderClass", "Select file", nullptr));
        label_2->setText(QCoreApplication::translate("AsterixRecorderClass", "Port:", nullptr));
        EdRecvPort->setInputMask(QCoreApplication::translate("AsterixRecorderClass", "00000", nullptr));
        EdRecvPort->setText(QCoreApplication::translate("AsterixRecorderClass", "1234", nullptr));
        BtnListen->setText(QCoreApplication::translate("AsterixRecorderClass", "Start listening", nullptr));
        BtnRecord->setText(QCoreApplication::translate("AsterixRecorderClass", "Start recording", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AsterixRecorderClass", "Record", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AsterixRecorderClass", "Playback", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AsterixRecorderClass: public Ui_AsterixRecorderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASTERIXRECORDER_H
